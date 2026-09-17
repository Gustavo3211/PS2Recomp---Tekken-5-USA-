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

// Function: sub_002F3D38
// Address: 0x2f3d38 - 0x2f3e70
void sub_002F3D38_0x2f3d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F3D38_0x2f3d38");
#endif

    switch (ctx->pc) {
        case 0x2f3d38u: goto label_2f3d38;
        case 0x2f3d3cu: goto label_2f3d3c;
        case 0x2f3d40u: goto label_2f3d40;
        case 0x2f3d44u: goto label_2f3d44;
        case 0x2f3d48u: goto label_2f3d48;
        case 0x2f3d4cu: goto label_2f3d4c;
        case 0x2f3d50u: goto label_2f3d50;
        case 0x2f3d54u: goto label_2f3d54;
        case 0x2f3d58u: goto label_2f3d58;
        case 0x2f3d5cu: goto label_2f3d5c;
        case 0x2f3d60u: goto label_2f3d60;
        case 0x2f3d64u: goto label_2f3d64;
        case 0x2f3d68u: goto label_2f3d68;
        case 0x2f3d6cu: goto label_2f3d6c;
        case 0x2f3d70u: goto label_2f3d70;
        case 0x2f3d74u: goto label_2f3d74;
        case 0x2f3d78u: goto label_2f3d78;
        case 0x2f3d7cu: goto label_2f3d7c;
        case 0x2f3d80u: goto label_2f3d80;
        case 0x2f3d84u: goto label_2f3d84;
        case 0x2f3d88u: goto label_2f3d88;
        case 0x2f3d8cu: goto label_2f3d8c;
        case 0x2f3d90u: goto label_2f3d90;
        case 0x2f3d94u: goto label_2f3d94;
        case 0x2f3d98u: goto label_2f3d98;
        case 0x2f3d9cu: goto label_2f3d9c;
        case 0x2f3da0u: goto label_2f3da0;
        case 0x2f3da4u: goto label_2f3da4;
        case 0x2f3da8u: goto label_2f3da8;
        case 0x2f3dacu: goto label_2f3dac;
        case 0x2f3db0u: goto label_2f3db0;
        case 0x2f3db4u: goto label_2f3db4;
        case 0x2f3db8u: goto label_2f3db8;
        case 0x2f3dbcu: goto label_2f3dbc;
        case 0x2f3dc0u: goto label_2f3dc0;
        case 0x2f3dc4u: goto label_2f3dc4;
        case 0x2f3dc8u: goto label_2f3dc8;
        case 0x2f3dccu: goto label_2f3dcc;
        case 0x2f3dd0u: goto label_2f3dd0;
        case 0x2f3dd4u: goto label_2f3dd4;
        case 0x2f3dd8u: goto label_2f3dd8;
        case 0x2f3ddcu: goto label_2f3ddc;
        case 0x2f3de0u: goto label_2f3de0;
        case 0x2f3de4u: goto label_2f3de4;
        case 0x2f3de8u: goto label_2f3de8;
        case 0x2f3decu: goto label_2f3dec;
        case 0x2f3df0u: goto label_2f3df0;
        case 0x2f3df4u: goto label_2f3df4;
        case 0x2f3df8u: goto label_2f3df8;
        case 0x2f3dfcu: goto label_2f3dfc;
        case 0x2f3e00u: goto label_2f3e00;
        case 0x2f3e04u: goto label_2f3e04;
        case 0x2f3e08u: goto label_2f3e08;
        case 0x2f3e0cu: goto label_2f3e0c;
        case 0x2f3e10u: goto label_2f3e10;
        case 0x2f3e14u: goto label_2f3e14;
        case 0x2f3e18u: goto label_2f3e18;
        case 0x2f3e1cu: goto label_2f3e1c;
        case 0x2f3e20u: goto label_2f3e20;
        case 0x2f3e24u: goto label_2f3e24;
        case 0x2f3e28u: goto label_2f3e28;
        case 0x2f3e2cu: goto label_2f3e2c;
        case 0x2f3e30u: goto label_2f3e30;
        case 0x2f3e34u: goto label_2f3e34;
        case 0x2f3e38u: goto label_2f3e38;
        case 0x2f3e3cu: goto label_2f3e3c;
        case 0x2f3e40u: goto label_2f3e40;
        case 0x2f3e44u: goto label_2f3e44;
        case 0x2f3e48u: goto label_2f3e48;
        case 0x2f3e4cu: goto label_2f3e4c;
        case 0x2f3e50u: goto label_2f3e50;
        case 0x2f3e54u: goto label_2f3e54;
        case 0x2f3e58u: goto label_2f3e58;
        case 0x2f3e5cu: goto label_2f3e5c;
        case 0x2f3e60u: goto label_2f3e60;
        case 0x2f3e64u: goto label_2f3e64;
        case 0x2f3e68u: goto label_2f3e68;
        case 0x2f3e6cu: goto label_2f3e6c;
        default: break;
    }

    ctx->pc = 0x2f3d38u;

label_2f3d38:
    // 0x2f3d38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f3d38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2f3d3c:
    // 0x2f3d3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f3d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2f3d40:
    // 0x2f3d40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f3d40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f3d44:
    // 0x2f3d44: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2f3d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2f3d48:
    // 0x2f3d48: 0x26110110  addiu       $s1, $s0, 0x110
    ctx->pc = 0x2f3d48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
label_2f3d4c:
    // 0x2f3d4c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f3d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2f3d50:
    // 0x2f3d50: 0xc0bb89e  jal         func_2EE278
label_2f3d54:
    if (ctx->pc == 0x2F3D54u) {
        ctx->pc = 0x2F3D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3D50u;
        // 0x2f3d54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3D58u;
        goto label_2f3d58;
    }
    ctx->pc = 0x2F3D50u;
    SET_GPR_U32(ctx, 31, 0x2F3D58u);
    ctx->pc = 0x2F3D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3D50u;
    // 0x2f3d54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE278u, 0x2F3D50u, 0x2F3D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3D58u;
label_2f3d58:
    // 0x2f3d58: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x2f3d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_2f3d5c:
    // 0x2f3d5c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_2f3d60:
    if (ctx->pc == 0x2F3D60u) {
        ctx->pc = 0x2F3D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3D5Cu;
        // 0x2f3d60: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3D64u;
        goto label_2f3d64;
    }
    ctx->pc = 0x2F3D5Cu;
    {
        const bool branch_taken_0x2f3d5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F3D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3D5Cu;
        // 0x2f3d60: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3d5c) {
            ctx->pc = 0x2F3D6Cu;
            goto label_2f3d6c;
        }
    }
    ctx->pc = 0x2F3D64u;
label_2f3d64:
    // 0x2f3d64: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_2f3d68:
    if (ctx->pc == 0x2F3D68u) {
        ctx->pc = 0x2F3D6Cu;
        goto label_2f3d6c;
    }
    ctx->pc = 0x2F3D64u;
    {
        const bool branch_taken_0x2f3d64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f3d64) {
            ctx->pc = 0x2F3D80u;
            goto label_2f3d80;
        }
    }
    ctx->pc = 0x2F3D6Cu;
label_2f3d6c:
    // 0x2f3d6c: 0xc0bbfd0  jal         func_2EFF40
label_2f3d70:
    if (ctx->pc == 0x2F3D70u) {
        ctx->pc = 0x2F3D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3D6Cu;
        // 0x2f3d70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3D74u;
        goto label_2f3d74;
    }
    ctx->pc = 0x2F3D6Cu;
    SET_GPR_U32(ctx, 31, 0x2F3D74u);
    ctx->pc = 0x2F3D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3D6Cu;
    // 0x2f3d70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EFF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFF40u, 0x2F3D6Cu, 0x2F3D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3D74u;
label_2f3d74:
    // 0x2f3d74: 0x1000000e  b           . + 4 + (0xE << 2)
label_2f3d78:
    if (ctx->pc == 0x2F3D78u) {
        ctx->pc = 0x2F3D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3D74u;
        // 0x2f3d78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3D7Cu;
        goto label_2f3d7c;
    }
    ctx->pc = 0x2F3D74u;
    {
        const bool branch_taken_0x2f3d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3D74u;
        // 0x2f3d78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3d74) {
            ctx->pc = 0x2F3DB0u;
            goto label_2f3db0;
        }
    }
    ctx->pc = 0x2F3D7Cu;
label_2f3d7c:
    // 0x2f3d7c: 0x0  nop
    ctx->pc = 0x2f3d7cu;
    // NOP
label_2f3d80:
    // 0x2f3d80: 0xc0bc026  jal         func_2F0098
label_2f3d84:
    if (ctx->pc == 0x2F3D84u) {
        ctx->pc = 0x2F3D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3D80u;
        // 0x2f3d84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3D88u;
        goto label_2f3d88;
    }
    ctx->pc = 0x2F3D80u;
    SET_GPR_U32(ctx, 31, 0x2F3D88u);
    ctx->pc = 0x2F3D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3D80u;
    // 0x2f3d84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0098u, 0x2F3D80u, 0x2F3D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3D88u;
label_2f3d88:
    // 0x2f3d88: 0xc0bc046  jal         func_2F0118
label_2f3d8c:
    if (ctx->pc == 0x2F3D8Cu) {
        ctx->pc = 0x2F3D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3D88u;
        // 0x2f3d8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3D90u;
        goto label_2f3d90;
    }
    ctx->pc = 0x2F3D88u;
    SET_GPR_U32(ctx, 31, 0x2F3D90u);
    ctx->pc = 0x2F3D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3D88u;
    // 0x2f3d8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0118u, 0x2F3D88u, 0x2F3D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3D90u;
label_2f3d90:
    // 0x2f3d90: 0xc0bc056  jal         func_2F0158
label_2f3d94:
    if (ctx->pc == 0x2F3D94u) {
        ctx->pc = 0x2F3D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3D90u;
        // 0x2f3d94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3D98u;
        goto label_2f3d98;
    }
    ctx->pc = 0x2F3D90u;
    SET_GPR_U32(ctx, 31, 0x2F3D98u);
    ctx->pc = 0x2F3D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3D90u;
    // 0x2f3d94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0158u, 0x2F3D90u, 0x2F3D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3D98u;
label_2f3d98:
    // 0x2f3d98: 0x26030130  addiu       $v1, $s0, 0x130
    ctx->pc = 0x2f3d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
label_2f3d9c:
    // 0x2f3d9c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2f3d9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2f3da0:
    // 0x2f3da0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2f3da4:
    if (ctx->pc == 0x2F3DA4u) {
        ctx->pc = 0x2F3DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3DA0u;
        // 0x2f3da4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3DA8u;
        goto label_2f3da8;
    }
    ctx->pc = 0x2F3DA0u;
    {
        const bool branch_taken_0x2f3da0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F3DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3DA0u;
        // 0x2f3da4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3da0) {
            ctx->pc = 0x2F3DB0u;
            goto label_2f3db0;
        }
    }
    ctx->pc = 0x2F3DA8u;
label_2f3da8:
    // 0x2f3da8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2f3da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f3dac:
    // 0x2f3dac: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x2f3dacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_2f3db0:
    // 0x2f3db0: 0xc0bb934  jal         func_2EE4D0
label_2f3db4:
    if (ctx->pc == 0x2F3DB4u) {
        ctx->pc = 0x2F3DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3DB0u;
        // 0x2f3db4: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3DB8u;
        goto label_2f3db8;
    }
    ctx->pc = 0x2F3DB0u;
    SET_GPR_U32(ctx, 31, 0x2F3DB8u);
    ctx->pc = 0x2F3DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3DB0u;
    // 0x2f3db4: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE4D0u, 0x2F3DB0u, 0x2F3DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3DB8u;
label_2f3db8:
    // 0x2f3db8: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_2f3dbc:
    if (ctx->pc == 0x2F3DBCu) {
        ctx->pc = 0x2F3DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3DB8u;
        // 0x2f3dbc: 0x260500b8  addiu       $a1, $s0, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 184));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3DC0u;
        goto label_2f3dc0;
    }
    ctx->pc = 0x2F3DB8u;
    {
        const bool branch_taken_0x2f3db8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F3DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3DB8u;
        // 0x2f3dbc: 0x260500b8  addiu       $a1, $s0, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3db8) {
            ctx->pc = 0x2F3E10u;
            goto label_2f3e10;
        }
    }
    ctx->pc = 0x2F3DC0u;
label_2f3dc0:
    // 0x2f3dc0: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2f3dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2f3dc4:
    // 0x2f3dc4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2f3dc8:
    if (ctx->pc == 0x2F3DC8u) {
        ctx->pc = 0x2F3DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3DC4u;
        // 0x2f3dc8: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3DCCu;
        goto label_2f3dcc;
    }
    ctx->pc = 0x2F3DC4u;
    {
        const bool branch_taken_0x2f3dc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3dc4) {
            ctx->pc = 0x2F3DC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F3DC4u;
            // 0x2f3dc8: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F3DE0u;
            goto label_2f3de0;
        }
    }
    ctx->pc = 0x2F3DCCu;
label_2f3dcc:
    // 0x2f3dcc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2f3dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2f3dd0:
    // 0x2f3dd0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2f3dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2f3dd4:
    // 0x2f3dd4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2f3dd8:
    if (ctx->pc == 0x2F3DD8u) {
        ctx->pc = 0x2F3DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3DD4u;
        // 0x2f3dd8: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3DDCu;
        goto label_2f3ddc;
    }
    ctx->pc = 0x2F3DD4u;
    {
        const bool branch_taken_0x2f3dd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F3DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3DD4u;
        // 0x2f3dd8: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3dd4) {
            ctx->pc = 0x2F3DE8u;
            goto label_2f3de8;
        }
    }
    ctx->pc = 0x2F3DDCu;
label_2f3ddc:
    // 0x2f3ddc: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2f3ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2f3de0:
    // 0x2f3de0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f3de0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f3de4:
    // 0x2f3de4: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2f3de4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2f3de8:
    // 0x2f3de8: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x2f3de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_2f3dec:
    // 0x2f3dec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2f3decu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f3df0:
    // 0x2f3df0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f3df0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f3df4:
    // 0x2f3df4: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x2f3df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_2f3df8:
    // 0x2f3df8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2f3df8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2f3dfc:
    // 0x2f3dfc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2f3dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2f3e00:
    // 0x2f3e00: 0x60f809  jalr        $v1
label_2f3e04:
    if (ctx->pc == 0x2F3E04u) {
        ctx->pc = 0x2F3E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3E00u;
        // 0x2f3e04: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3E08u;
        goto label_2f3e08;
    }
    ctx->pc = 0x2F3E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F3E08u);
        ctx->pc = 0x2F3E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3E00u;
        // 0x2f3e04: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F3E00u, 0x2F3E08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F3E08u;
label_2f3e08:
    // 0x2f3e08: 0x10000014  b           . + 4 + (0x14 << 2)
label_2f3e0c:
    if (ctx->pc == 0x2F3E0Cu) {
        ctx->pc = 0x2F3E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3E08u;
        // 0x2f3e0c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3E10u;
        goto label_2f3e10;
    }
    ctx->pc = 0x2F3E08u;
    {
        const bool branch_taken_0x2f3e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3E08u;
        // 0x2f3e0c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3e08) {
            ctx->pc = 0x2F3E5Cu;
            goto label_2f3e5c;
        }
    }
    ctx->pc = 0x2F3E10u;
label_2f3e10:
    // 0x2f3e10: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2f3e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2f3e14:
    // 0x2f3e14: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2f3e18:
    if (ctx->pc == 0x2F3E18u) {
        ctx->pc = 0x2F3E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3E14u;
        // 0x2f3e18: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3E1Cu;
        goto label_2f3e1c;
    }
    ctx->pc = 0x2F3E14u;
    {
        const bool branch_taken_0x2f3e14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3e14) {
            ctx->pc = 0x2F3E18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F3E14u;
            // 0x2f3e18: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F3E30u;
            goto label_2f3e30;
        }
    }
    ctx->pc = 0x2F3E1Cu;
label_2f3e1c:
    // 0x2f3e1c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2f3e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2f3e20:
    // 0x2f3e20: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2f3e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2f3e24:
    // 0x2f3e24: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2f3e28:
    if (ctx->pc == 0x2F3E28u) {
        ctx->pc = 0x2F3E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3E24u;
        // 0x2f3e28: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3E2Cu;
        goto label_2f3e2c;
    }
    ctx->pc = 0x2F3E24u;
    {
        const bool branch_taken_0x2f3e24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F3E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3E24u;
        // 0x2f3e28: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3e24) {
            ctx->pc = 0x2F3E38u;
            goto label_2f3e38;
        }
    }
    ctx->pc = 0x2F3E2Cu;
label_2f3e2c:
    // 0x2f3e2c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2f3e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2f3e30:
    // 0x2f3e30: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f3e30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f3e34:
    // 0x2f3e34: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2f3e34u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2f3e38:
    // 0x2f3e38: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x2f3e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_2f3e3c:
    // 0x2f3e3c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2f3e3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f3e40:
    // 0x2f3e40: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2f3e40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f3e44:
    // 0x2f3e44: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x2f3e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_2f3e48:
    // 0x2f3e48: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2f3e48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2f3e4c:
    // 0x2f3e4c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2f3e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2f3e50:
    // 0x2f3e50: 0x60f809  jalr        $v1
label_2f3e54:
    if (ctx->pc == 0x2F3E54u) {
        ctx->pc = 0x2F3E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3E50u;
        // 0x2f3e54: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3E58u;
        goto label_2f3e58;
    }
    ctx->pc = 0x2F3E50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F3E58u);
        ctx->pc = 0x2F3E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3E50u;
        // 0x2f3e54: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F3E50u, 0x2F3E58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F3E58u;
label_2f3e58:
    // 0x2f3e58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f3e58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2f3e5c:
    // 0x2f3e5c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2f3e5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2f3e60:
    // 0x2f3e60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f3e60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2f3e64:
    // 0x2f3e64: 0x3e00008  jr          $ra
label_2f3e68:
    if (ctx->pc == 0x2F3E68u) {
        ctx->pc = 0x2F3E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3E64u;
        // 0x2f3e68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3E6Cu;
        goto label_2f3e6c;
    }
    ctx->pc = 0x2F3E64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F3E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3E64u;
        // 0x2f3e68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F3E64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F3E6Cu;
label_2f3e6c:
    // 0x2f3e6c: 0x0  nop
    ctx->pc = 0x2f3e6cu;
    // NOP
    ctx->pc = 0x2f3e70u;
}
