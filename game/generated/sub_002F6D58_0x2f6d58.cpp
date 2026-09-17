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

// Function: sub_002F6D58
// Address: 0x2f6d58 - 0x2f7250
void sub_002F6D58_0x2f6d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F6D58_0x2f6d58");
#endif

    switch (ctx->pc) {
        case 0x2f6da4u: goto label_2f6da4;
        case 0x2f6db8u: goto label_2f6db8;
        case 0x2f6dccu: goto label_2f6dcc;
        case 0x2f6de0u: goto label_2f6de0;
        case 0x2f6e04u: goto label_2f6e04;
        case 0x2f6e24u: goto label_2f6e24;
        case 0x2f6e44u: goto label_2f6e44;
        case 0x2f6e64u: goto label_2f6e64;
        case 0x2f6e84u: goto label_2f6e84;
        case 0x2f6ea4u: goto label_2f6ea4;
        case 0x2f6ec4u: goto label_2f6ec4;
        case 0x2f6ee4u: goto label_2f6ee4;
        case 0x2f6f04u: goto label_2f6f04;
        case 0x2f6f24u: goto label_2f6f24;
        case 0x2f6f44u: goto label_2f6f44;
        case 0x2f6f64u: goto label_2f6f64;
        case 0x2f6f84u: goto label_2f6f84;
        case 0x2f6fa4u: goto label_2f6fa4;
        case 0x2f6fc4u: goto label_2f6fc4;
        case 0x2f6fe4u: goto label_2f6fe4;
        case 0x2f7004u: goto label_2f7004;
        case 0x2f7024u: goto label_2f7024;
        case 0x2f7044u: goto label_2f7044;
        case 0x2f7064u: goto label_2f7064;
        case 0x2f7084u: goto label_2f7084;
        case 0x2f70a4u: goto label_2f70a4;
        case 0x2f70c4u: goto label_2f70c4;
        case 0x2f70e4u: goto label_2f70e4;
        case 0x2f7104u: goto label_2f7104;
        case 0x2f7124u: goto label_2f7124;
        case 0x2f7144u: goto label_2f7144;
        case 0x2f7164u: goto label_2f7164;
        case 0x2f7184u: goto label_2f7184;
        case 0x2f71a4u: goto label_2f71a4;
        case 0x2f71c4u: goto label_2f71c4;
        case 0x2f71e4u: goto label_2f71e4;
        case 0x2f7204u: goto label_2f7204;
        case 0x2f7220u: goto label_2f7220;
        case 0x2f7230u: goto label_2f7230;
        case 0x2f723cu: goto label_2f723c;
        default: break;
    }

    ctx->pc = 0x2f6d58u;

    // 0x2f6d58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f6d58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f6d5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f6d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f6d60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f6d60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6d64: 0x2603015c  addiu       $v1, $s0, 0x15C
    ctx->pc = 0x2f6d64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 348));
    // 0x2f6d68: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2f6d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2f6d6c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f6d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f6d70: 0x26080164  addiu       $t0, $s0, 0x164
    ctx->pc = 0x2f6d70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 356));
    // 0x2f6d74: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x2f6d74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x2f6d78: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2f6d78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6d7c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f6d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2f6d80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f6d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6d84: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x2f6d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x2f6d88: 0x24a518a0  addiu       $a1, $a1, 0x18A0
    ctx->pc = 0x2f6d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6304));
    // 0x2f6d8c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2f6d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2f6d90: 0xad070000  sw          $a3, 0x0($t0)
    ctx->pc = 0x2f6d90u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 7));
    // 0x2f6d94: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x2f6d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x2f6d98: 0xad020004  sw          $v0, 0x4($t0)
    ctx->pc = 0x2f6d98u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
    // 0x2f6d9c: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F6D9Cu;
    SET_GPR_U32(ctx, 31, 0x2F6DA4u);
    ctx->pc = 0x2F6DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6D9Cu;
    // 0x2f6da0: 0xae0000fc  sw          $zero, 0xFC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F6D9Cu, 0x2F6DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6DA4u;
label_2f6da4:
    // 0x2f6da4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f6da4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2f6da8: 0xae0200d8  sw          $v0, 0xD8($s0)
    ctx->pc = 0x2f6da8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 2));
    // 0x2f6dac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f6dacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6db0: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F6DB0u;
    SET_GPR_U32(ctx, 31, 0x2F6DB8u);
    ctx->pc = 0x2F6DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6DB0u;
    // 0x2f6db4: 0x24a518b0  addiu       $a1, $a1, 0x18B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F6DB0u, 0x2F6DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6DB8u;
label_2f6db8:
    // 0x2f6db8: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f6db8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2f6dbc: 0xae0200dc  sw          $v0, 0xDC($s0)
    ctx->pc = 0x2f6dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 2));
    // 0x2f6dc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f6dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6dc4: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F6DC4u;
    SET_GPR_U32(ctx, 31, 0x2F6DCCu);
    ctx->pc = 0x2F6DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6DC4u;
    // 0x2f6dc8: 0x24a518c0  addiu       $a1, $a1, 0x18C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F6DC4u, 0x2F6DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6DCCu;
label_2f6dcc:
    // 0x2f6dcc: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f6dccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2f6dd0: 0xae0200e0  sw          $v0, 0xE0($s0)
    ctx->pc = 0x2f6dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 2));
    // 0x2f6dd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f6dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6dd8: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F6DD8u;
    SET_GPR_U32(ctx, 31, 0x2F6DE0u);
    ctx->pc = 0x2F6DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6DD8u;
    // 0x2f6ddc: 0x24a518d0  addiu       $a1, $a1, 0x18D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F6DD8u, 0x2F6DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6DE0u;
label_2f6de0:
    // 0x2f6de0: 0x3c070015  lui         $a3, 0x15
    ctx->pc = 0x2f6de0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21 << 16));
    // 0x2f6de4: 0xae0200e4  sw          $v0, 0xE4($s0)
    ctx->pc = 0x2f6de4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 2));
    // 0x2f6de8: 0x3c080015  lui         $t0, 0x15
    ctx->pc = 0x2f6de8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)21 << 16));
    // 0x2f6dec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f6decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6df0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2f6df0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6df4: 0x24e74b50  addiu       $a3, $a3, 0x4B50
    ctx->pc = 0x2f6df4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19280));
    // 0x2f6df8: 0x25084b58  addiu       $t0, $t0, 0x4B58
    ctx->pc = 0x2f6df8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 19288));
    // 0x2f6dfc: 0xc0bdaf6  jal         func_2F6BD8
    ctx->pc = 0x2F6DFCu;
    SET_GPR_U32(ctx, 31, 0x2F6E04u);
    ctx->pc = 0x2F6E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6DFCu;
    // 0x2f6e00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6BD8u, 0x2F6DFCu, 0x2F6E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6E04u;
label_2f6e04:
    // 0x2f6e04: 0x3c070015  lui         $a3, 0x15
    ctx->pc = 0x2f6e04u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21 << 16));
    // 0x2f6e08: 0x3c080015  lui         $t0, 0x15
    ctx->pc = 0x2f6e08u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)21 << 16));
    // 0x2f6e0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f6e0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6e10: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2f6e10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6e14: 0x24e74b60  addiu       $a3, $a3, 0x4B60
    ctx->pc = 0x2f6e14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19296));
    // 0x2f6e18: 0x25084b68  addiu       $t0, $t0, 0x4B68
    ctx->pc = 0x2f6e18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 19304));
    // 0x2f6e1c: 0xc0bdaf6  jal         func_2F6BD8
    ctx->pc = 0x2F6E1Cu;
    SET_GPR_U32(ctx, 31, 0x2F6E24u);
    ctx->pc = 0x2F6E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6E1Cu;
    // 0x2f6e20: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6BD8u, 0x2F6E1Cu, 0x2F6E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6E24u;
label_2f6e24:
    // 0x2f6e24: 0x3c070015  lui         $a3, 0x15
    ctx->pc = 0x2f6e24u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21 << 16));
    // 0x2f6e28: 0x3c080015  lui         $t0, 0x15
    ctx->pc = 0x2f6e28u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)21 << 16));
    // 0x2f6e2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f6e2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6e30: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2f6e30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6e34: 0x24e74b70  addiu       $a3, $a3, 0x4B70
    ctx->pc = 0x2f6e34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19312));
    // 0x2f6e38: 0x25084b78  addiu       $t0, $t0, 0x4B78
    ctx->pc = 0x2f6e38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 19320));
    // 0x2f6e3c: 0xc0bdaf6  jal         func_2F6BD8
    ctx->pc = 0x2F6E3Cu;
    SET_GPR_U32(ctx, 31, 0x2F6E44u);
    ctx->pc = 0x2F6E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6E3Cu;
    // 0x2f6e40: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6BD8u, 0x2F6E3Cu, 0x2F6E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6E44u;
label_2f6e44:
    // 0x2f6e44: 0x3c070015  lui         $a3, 0x15
    ctx->pc = 0x2f6e44u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21 << 16));
    // 0x2f6e48: 0x3c080015  lui         $t0, 0x15
    ctx->pc = 0x2f6e48u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)21 << 16));
    // 0x2f6e4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f6e4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6e50: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2f6e50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6e54: 0x24e74b80  addiu       $a3, $a3, 0x4B80
    ctx->pc = 0x2f6e54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19328));
    // 0x2f6e58: 0x25084b88  addiu       $t0, $t0, 0x4B88
    ctx->pc = 0x2f6e58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 19336));
    // 0x2f6e5c: 0xc0bdaf6  jal         func_2F6BD8
    ctx->pc = 0x2F6E5Cu;
    SET_GPR_U32(ctx, 31, 0x2F6E64u);
    ctx->pc = 0x2F6E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6E5Cu;
    // 0x2f6e60: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6BD8u, 0x2F6E5Cu, 0x2F6E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6E64u;
label_2f6e64:
    // 0x2f6e64: 0x3c070015  lui         $a3, 0x15
    ctx->pc = 0x2f6e64u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21 << 16));
    // 0x2f6e68: 0x3c080048  lui         $t0, 0x48
    ctx->pc = 0x2f6e68u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)72 << 16));
    // 0x2f6e6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f6e6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6e70: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2f6e70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6e74: 0x24e74b90  addiu       $a3, $a3, 0x4B90
    ctx->pc = 0x2f6e74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19344));
    // 0x2f6e78: 0x250818e8  addiu       $t0, $t0, 0x18E8
    ctx->pc = 0x2f6e78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 6376));
    // 0x2f6e7c: 0xc0bdaf6  jal         func_2F6BD8
    ctx->pc = 0x2F6E7Cu;
    SET_GPR_U32(ctx, 31, 0x2F6E84u);
    ctx->pc = 0x2F6E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6E7Cu;
    // 0x2f6e80: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6BD8u, 0x2F6E7Cu, 0x2F6E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6E84u;
label_2f6e84:
    // 0x2f6e84: 0x3c070015  lui         $a3, 0x15
    ctx->pc = 0x2f6e84u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21 << 16));
    // 0x2f6e88: 0x3c080015  lui         $t0, 0x15
    ctx->pc = 0x2f6e88u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)21 << 16));
    // 0x2f6e8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f6e8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6e90: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2f6e90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6e94: 0x24e74b98  addiu       $a3, $a3, 0x4B98
    ctx->pc = 0x2f6e94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19352));
    // 0x2f6e98: 0x25084ba0  addiu       $t0, $t0, 0x4BA0
    ctx->pc = 0x2f6e98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 19360));
    // 0x2f6e9c: 0xc0bdaf6  jal         func_2F6BD8
    ctx->pc = 0x2F6E9Cu;
    SET_GPR_U32(ctx, 31, 0x2F6EA4u);
    ctx->pc = 0x2F6EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6E9Cu;
    // 0x2f6ea0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6BD8u, 0x2F6E9Cu, 0x2F6EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6EA4u;
label_2f6ea4:
    // 0x2f6ea4: 0x3c070015  lui         $a3, 0x15
    ctx->pc = 0x2f6ea4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21 << 16));
    // 0x2f6ea8: 0x3c080048  lui         $t0, 0x48
    ctx->pc = 0x2f6ea8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)72 << 16));
    // 0x2f6eac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f6eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6eb0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2f6eb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6eb4: 0x24e74ba8  addiu       $a3, $a3, 0x4BA8
    ctx->pc = 0x2f6eb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19368));
    // 0x2f6eb8: 0x250818f8  addiu       $t0, $t0, 0x18F8
    ctx->pc = 0x2f6eb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 6392));
    // 0x2f6ebc: 0xc0bdaf6  jal         func_2F6BD8
    ctx->pc = 0x2F6EBCu;
    SET_GPR_U32(ctx, 31, 0x2F6EC4u);
    ctx->pc = 0x2F6EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6EBCu;
    // 0x2f6ec0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6BD8u, 0x2F6EBCu, 0x2F6EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6EC4u;
label_2f6ec4:
    // 0x2f6ec4: 0x3c070015  lui         $a3, 0x15
    ctx->pc = 0x2f6ec4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21 << 16));
    // 0x2f6ec8: 0x3c080015  lui         $t0, 0x15
    ctx->pc = 0x2f6ec8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)21 << 16));
    // 0x2f6ecc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f6eccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6ed0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2f6ed0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6ed4: 0x24e74bb0  addiu       $a3, $a3, 0x4BB0
    ctx->pc = 0x2f6ed4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19376));
    // 0x2f6ed8: 0x25084bb8  addiu       $t0, $t0, 0x4BB8
    ctx->pc = 0x2f6ed8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 19384));
    // 0x2f6edc: 0xc0bdaf6  jal         func_2F6BD8
    ctx->pc = 0x2F6EDCu;
    SET_GPR_U32(ctx, 31, 0x2F6EE4u);
    ctx->pc = 0x2F6EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6EDCu;
    // 0x2f6ee0: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6BD8u, 0x2F6EDCu, 0x2F6EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6EE4u;
label_2f6ee4:
    // 0x2f6ee4: 0x3c070015  lui         $a3, 0x15
    ctx->pc = 0x2f6ee4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21 << 16));
    // 0x2f6ee8: 0x3c080048  lui         $t0, 0x48
    ctx->pc = 0x2f6ee8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)72 << 16));
    // 0x2f6eec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f6eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6ef0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2f6ef0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6ef4: 0x24e74bc0  addiu       $a3, $a3, 0x4BC0
    ctx->pc = 0x2f6ef4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19392));
    // 0x2f6ef8: 0x25081908  addiu       $t0, $t0, 0x1908
    ctx->pc = 0x2f6ef8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 6408));
    // 0x2f6efc: 0xc0bdaf6  jal         func_2F6BD8
    ctx->pc = 0x2F6EFCu;
    SET_GPR_U32(ctx, 31, 0x2F6F04u);
    ctx->pc = 0x2F6F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6EFCu;
    // 0x2f6f00: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6BD8u, 0x2F6EFCu, 0x2F6F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6F04u;
label_2f6f04:
    // 0x2f6f04: 0x3c070015  lui         $a3, 0x15
    ctx->pc = 0x2f6f04u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21 << 16));
    // 0x2f6f08: 0x3c080015  lui         $t0, 0x15
    ctx->pc = 0x2f6f08u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)21 << 16));
    // 0x2f6f0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f6f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6f10: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2f6f10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6f14: 0x24e74bc8  addiu       $a3, $a3, 0x4BC8
    ctx->pc = 0x2f6f14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19400));
    // 0x2f6f18: 0x25084bd0  addiu       $t0, $t0, 0x4BD0
    ctx->pc = 0x2f6f18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 19408));
    // 0x2f6f1c: 0xc0bdaf6  jal         func_2F6BD8
    ctx->pc = 0x2F6F1Cu;
    SET_GPR_U32(ctx, 31, 0x2F6F24u);
    ctx->pc = 0x2F6F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6F1Cu;
    // 0x2f6f20: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6BD8u, 0x2F6F1Cu, 0x2F6F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6F24u;
label_2f6f24:
    // 0x2f6f24: 0x3c070015  lui         $a3, 0x15
    ctx->pc = 0x2f6f24u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21 << 16));
    // 0x2f6f28: 0x3c080015  lui         $t0, 0x15
    ctx->pc = 0x2f6f28u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)21 << 16));
    // 0x2f6f2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f6f2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6f30: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2f6f30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6f34: 0x24e74bd8  addiu       $a3, $a3, 0x4BD8
    ctx->pc = 0x2f6f34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19416));
    // 0x2f6f38: 0x25084be0  addiu       $t0, $t0, 0x4BE0
    ctx->pc = 0x2f6f38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 19424));
    // 0x2f6f3c: 0xc0bdaf6  jal         func_2F6BD8
    ctx->pc = 0x2F6F3Cu;
    SET_GPR_U32(ctx, 31, 0x2F6F44u);
    ctx->pc = 0x2F6F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6F3Cu;
    // 0x2f6f40: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6BD8u, 0x2F6F3Cu, 0x2F6F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6F44u;
label_2f6f44:
    // 0x2f6f44: 0x3c070015  lui         $a3, 0x15
    ctx->pc = 0x2f6f44u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21 << 16));
    // 0x2f6f48: 0x3c080015  lui         $t0, 0x15
    ctx->pc = 0x2f6f48u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)21 << 16));
    // 0x2f6f4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f6f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6f50: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2f6f50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6f54: 0x24e74be8  addiu       $a3, $a3, 0x4BE8
    ctx->pc = 0x2f6f54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19432));
    // 0x2f6f58: 0x25084bf0  addiu       $t0, $t0, 0x4BF0
    ctx->pc = 0x2f6f58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 19440));
    // 0x2f6f5c: 0xc0bdaf6  jal         func_2F6BD8
    ctx->pc = 0x2F6F5Cu;
    SET_GPR_U32(ctx, 31, 0x2F6F64u);
    ctx->pc = 0x2F6F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6F5Cu;
    // 0x2f6f60: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6BD8u, 0x2F6F5Cu, 0x2F6F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6F64u;
label_2f6f64:
    // 0x2f6f64: 0x3c070015  lui         $a3, 0x15
    ctx->pc = 0x2f6f64u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21 << 16));
    // 0x2f6f68: 0x3c080015  lui         $t0, 0x15
    ctx->pc = 0x2f6f68u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)21 << 16));
    // 0x2f6f6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f6f6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6f70: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2f6f70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6f74: 0x24e74bf8  addiu       $a3, $a3, 0x4BF8
    ctx->pc = 0x2f6f74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19448));
    // 0x2f6f78: 0x25084c00  addiu       $t0, $t0, 0x4C00
    ctx->pc = 0x2f6f78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 19456));
    // 0x2f6f7c: 0xc0bdaf6  jal         func_2F6BD8
    ctx->pc = 0x2F6F7Cu;
    SET_GPR_U32(ctx, 31, 0x2F6F84u);
    ctx->pc = 0x2F6F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6F7Cu;
    // 0x2f6f80: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6BD8u, 0x2F6F7Cu, 0x2F6F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6F84u;
label_2f6f84:
    // 0x2f6f84: 0x3c070015  lui         $a3, 0x15
    ctx->pc = 0x2f6f84u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21 << 16));
    // 0x2f6f88: 0x3c080015  lui         $t0, 0x15
    ctx->pc = 0x2f6f88u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)21 << 16));
    // 0x2f6f8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f6f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6f90: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2f6f90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6f94: 0x24e74c08  addiu       $a3, $a3, 0x4C08
    ctx->pc = 0x2f6f94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19464));
    // 0x2f6f98: 0x25084c10  addiu       $t0, $t0, 0x4C10
    ctx->pc = 0x2f6f98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 19472));
    // 0x2f6f9c: 0xc0bdaf6  jal         func_2F6BD8
    ctx->pc = 0x2F6F9Cu;
    SET_GPR_U32(ctx, 31, 0x2F6FA4u);
    ctx->pc = 0x2F6FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6F9Cu;
    // 0x2f6fa0: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6BD8u, 0x2F6F9Cu, 0x2F6FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6FA4u;
label_2f6fa4:
    // 0x2f6fa4: 0x3c070015  lui         $a3, 0x15
    ctx->pc = 0x2f6fa4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21 << 16));
    // 0x2f6fa8: 0x3c080015  lui         $t0, 0x15
    ctx->pc = 0x2f6fa8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)21 << 16));
    // 0x2f6fac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f6facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6fb0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2f6fb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6fb4: 0x24e74c18  addiu       $a3, $a3, 0x4C18
    ctx->pc = 0x2f6fb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19480));
    // 0x2f6fb8: 0x25084c20  addiu       $t0, $t0, 0x4C20
    ctx->pc = 0x2f6fb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 19488));
    // 0x2f6fbc: 0xc0bdaf6  jal         func_2F6BD8
    ctx->pc = 0x2F6FBCu;
    SET_GPR_U32(ctx, 31, 0x2F6FC4u);
    ctx->pc = 0x2F6FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6FBCu;
    // 0x2f6fc0: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6BD8u, 0x2F6FBCu, 0x2F6FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6FC4u;
label_2f6fc4:
    // 0x2f6fc4: 0x3c070015  lui         $a3, 0x15
    ctx->pc = 0x2f6fc4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21 << 16));
    // 0x2f6fc8: 0x3c080048  lui         $t0, 0x48
    ctx->pc = 0x2f6fc8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)72 << 16));
    // 0x2f6fcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f6fccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6fd0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2f6fd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6fd4: 0x24e74c28  addiu       $a3, $a3, 0x4C28
    ctx->pc = 0x2f6fd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19496));
    // 0x2f6fd8: 0x25081918  addiu       $t0, $t0, 0x1918
    ctx->pc = 0x2f6fd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 6424));
    // 0x2f6fdc: 0xc0bdaf6  jal         func_2F6BD8
    ctx->pc = 0x2F6FDCu;
    SET_GPR_U32(ctx, 31, 0x2F6FE4u);
    ctx->pc = 0x2F6FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6FDCu;
    // 0x2f6fe0: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6BD8u, 0x2F6FDCu, 0x2F6FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6FE4u;
label_2f6fe4:
    // 0x2f6fe4: 0x3c070015  lui         $a3, 0x15
    ctx->pc = 0x2f6fe4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21 << 16));
    // 0x2f6fe8: 0x3c080015  lui         $t0, 0x15
    ctx->pc = 0x2f6fe8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)21 << 16));
    // 0x2f6fec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f6fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6ff0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2f6ff0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6ff4: 0x24e74c30  addiu       $a3, $a3, 0x4C30
    ctx->pc = 0x2f6ff4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19504));
    // 0x2f6ff8: 0x25084c38  addiu       $t0, $t0, 0x4C38
    ctx->pc = 0x2f6ff8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 19512));
    // 0x2f6ffc: 0xc0bdaf6  jal         func_2F6BD8
    ctx->pc = 0x2F6FFCu;
    SET_GPR_U32(ctx, 31, 0x2F7004u);
    ctx->pc = 0x2F7000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6FFCu;
    // 0x2f7000: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6BD8u, 0x2F6FFCu, 0x2F7004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7004u;
label_2f7004:
    // 0x2f7004: 0x3c070015  lui         $a3, 0x15
    ctx->pc = 0x2f7004u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21 << 16));
    // 0x2f7008: 0x3c080015  lui         $t0, 0x15
    ctx->pc = 0x2f7008u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)21 << 16));
    // 0x2f700c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f700cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7010: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2f7010u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7014: 0x24e74c40  addiu       $a3, $a3, 0x4C40
    ctx->pc = 0x2f7014u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19520));
    // 0x2f7018: 0x25084c48  addiu       $t0, $t0, 0x4C48
    ctx->pc = 0x2f7018u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 19528));
    // 0x2f701c: 0xc0bdaf6  jal         func_2F6BD8
    ctx->pc = 0x2F701Cu;
    SET_GPR_U32(ctx, 31, 0x2F7024u);
    ctx->pc = 0x2F7020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F701Cu;
    // 0x2f7020: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6BD8u, 0x2F701Cu, 0x2F7024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7024u;
label_2f7024:
    // 0x2f7024: 0x3c070015  lui         $a3, 0x15
    ctx->pc = 0x2f7024u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21 << 16));
    // 0x2f7028: 0x3c080015  lui         $t0, 0x15
    ctx->pc = 0x2f7028u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)21 << 16));
    // 0x2f702c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f702cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7030: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2f7030u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7034: 0x24e74c50  addiu       $a3, $a3, 0x4C50
    ctx->pc = 0x2f7034u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19536));
    // 0x2f7038: 0x25084c58  addiu       $t0, $t0, 0x4C58
    ctx->pc = 0x2f7038u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 19544));
    // 0x2f703c: 0xc0bdaf6  jal         func_2F6BD8
    ctx->pc = 0x2F703Cu;
    SET_GPR_U32(ctx, 31, 0x2F7044u);
    ctx->pc = 0x2F7040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F703Cu;
    // 0x2f7040: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6BD8u, 0x2F703Cu, 0x2F7044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7044u;
label_2f7044:
    // 0x2f7044: 0x3c070015  lui         $a3, 0x15
    ctx->pc = 0x2f7044u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21 << 16));
    // 0x2f7048: 0x3c080015  lui         $t0, 0x15
    ctx->pc = 0x2f7048u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)21 << 16));
    // 0x2f704c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f704cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7050: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2f7050u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7054: 0x24e74c60  addiu       $a3, $a3, 0x4C60
    ctx->pc = 0x2f7054u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19552));
    // 0x2f7058: 0x25084c68  addiu       $t0, $t0, 0x4C68
    ctx->pc = 0x2f7058u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 19560));
    // 0x2f705c: 0xc0bdaf6  jal         func_2F6BD8
    ctx->pc = 0x2F705Cu;
    SET_GPR_U32(ctx, 31, 0x2F7064u);
    ctx->pc = 0x2F7060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F705Cu;
    // 0x2f7060: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6BD8u, 0x2F705Cu, 0x2F7064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7064u;
label_2f7064:
    // 0x2f7064: 0x3c070015  lui         $a3, 0x15
    ctx->pc = 0x2f7064u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21 << 16));
    // 0x2f7068: 0x3c080015  lui         $t0, 0x15
    ctx->pc = 0x2f7068u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)21 << 16));
    // 0x2f706c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f706cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7070: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2f7070u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7074: 0x24e74c70  addiu       $a3, $a3, 0x4C70
    ctx->pc = 0x2f7074u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19568));
    // 0x2f7078: 0x25084c78  addiu       $t0, $t0, 0x4C78
    ctx->pc = 0x2f7078u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 19576));
    // 0x2f707c: 0xc0bdaf6  jal         func_2F6BD8
    ctx->pc = 0x2F707Cu;
    SET_GPR_U32(ctx, 31, 0x2F7084u);
    ctx->pc = 0x2F7080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F707Cu;
    // 0x2f7080: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6BD8u, 0x2F707Cu, 0x2F7084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7084u;
label_2f7084:
    // 0x2f7084: 0x3c070015  lui         $a3, 0x15
    ctx->pc = 0x2f7084u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21 << 16));
    // 0x2f7088: 0x3c080015  lui         $t0, 0x15
    ctx->pc = 0x2f7088u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)21 << 16));
    // 0x2f708c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f708cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7090: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2f7090u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7094: 0x24e74c80  addiu       $a3, $a3, 0x4C80
    ctx->pc = 0x2f7094u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19584));
    // 0x2f7098: 0x25084c88  addiu       $t0, $t0, 0x4C88
    ctx->pc = 0x2f7098u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 19592));
    // 0x2f709c: 0xc0bdaf6  jal         func_2F6BD8
    ctx->pc = 0x2F709Cu;
    SET_GPR_U32(ctx, 31, 0x2F70A4u);
    ctx->pc = 0x2F70A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F709Cu;
    // 0x2f70a0: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6BD8u, 0x2F709Cu, 0x2F70A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F70A4u;
label_2f70a4:
    // 0x2f70a4: 0x3c070015  lui         $a3, 0x15
    ctx->pc = 0x2f70a4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21 << 16));
    // 0x2f70a8: 0x3c080015  lui         $t0, 0x15
    ctx->pc = 0x2f70a8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)21 << 16));
    // 0x2f70ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f70acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f70b0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2f70b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f70b4: 0x24e74c90  addiu       $a3, $a3, 0x4C90
    ctx->pc = 0x2f70b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19600));
    // 0x2f70b8: 0x25084c98  addiu       $t0, $t0, 0x4C98
    ctx->pc = 0x2f70b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 19608));
    // 0x2f70bc: 0xc0bdaf6  jal         func_2F6BD8
    ctx->pc = 0x2F70BCu;
    SET_GPR_U32(ctx, 31, 0x2F70C4u);
    ctx->pc = 0x2F70C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F70BCu;
    // 0x2f70c0: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6BD8u, 0x2F70BCu, 0x2F70C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F70C4u;
label_2f70c4:
    // 0x2f70c4: 0x3c070015  lui         $a3, 0x15
    ctx->pc = 0x2f70c4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21 << 16));
    // 0x2f70c8: 0x3c080015  lui         $t0, 0x15
    ctx->pc = 0x2f70c8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)21 << 16));
    // 0x2f70cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f70ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f70d0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2f70d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f70d4: 0x24e74ca0  addiu       $a3, $a3, 0x4CA0
    ctx->pc = 0x2f70d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19616));
    // 0x2f70d8: 0x25084ca8  addiu       $t0, $t0, 0x4CA8
    ctx->pc = 0x2f70d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 19624));
    // 0x2f70dc: 0xc0bdaf6  jal         func_2F6BD8
    ctx->pc = 0x2F70DCu;
    SET_GPR_U32(ctx, 31, 0x2F70E4u);
    ctx->pc = 0x2F70E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F70DCu;
    // 0x2f70e0: 0x24050017  addiu       $a1, $zero, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6BD8u, 0x2F70DCu, 0x2F70E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F70E4u;
label_2f70e4:
    // 0x2f70e4: 0x3c070015  lui         $a3, 0x15
    ctx->pc = 0x2f70e4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21 << 16));
    // 0x2f70e8: 0x3c080015  lui         $t0, 0x15
    ctx->pc = 0x2f70e8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)21 << 16));
    // 0x2f70ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f70ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f70f0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2f70f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f70f4: 0x24e74cb0  addiu       $a3, $a3, 0x4CB0
    ctx->pc = 0x2f70f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19632));
    // 0x2f70f8: 0x25084cb8  addiu       $t0, $t0, 0x4CB8
    ctx->pc = 0x2f70f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 19640));
    // 0x2f70fc: 0xc0bdaf6  jal         func_2F6BD8
    ctx->pc = 0x2F70FCu;
    SET_GPR_U32(ctx, 31, 0x2F7104u);
    ctx->pc = 0x2F7100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F70FCu;
    // 0x2f7100: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6BD8u, 0x2F70FCu, 0x2F7104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7104u;
label_2f7104:
    // 0x2f7104: 0x3c070015  lui         $a3, 0x15
    ctx->pc = 0x2f7104u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21 << 16));
    // 0x2f7108: 0x3c080015  lui         $t0, 0x15
    ctx->pc = 0x2f7108u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)21 << 16));
    // 0x2f710c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f710cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7110: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2f7110u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7114: 0x24e74cc0  addiu       $a3, $a3, 0x4CC0
    ctx->pc = 0x2f7114u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19648));
    // 0x2f7118: 0x25084cc8  addiu       $t0, $t0, 0x4CC8
    ctx->pc = 0x2f7118u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 19656));
    // 0x2f711c: 0xc0bdaf6  jal         func_2F6BD8
    ctx->pc = 0x2F711Cu;
    SET_GPR_U32(ctx, 31, 0x2F7124u);
    ctx->pc = 0x2F7120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F711Cu;
    // 0x2f7120: 0x24050019  addiu       $a1, $zero, 0x19 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6BD8u, 0x2F711Cu, 0x2F7124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7124u;
label_2f7124:
    // 0x2f7124: 0x3c070015  lui         $a3, 0x15
    ctx->pc = 0x2f7124u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21 << 16));
    // 0x2f7128: 0x3c080015  lui         $t0, 0x15
    ctx->pc = 0x2f7128u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)21 << 16));
    // 0x2f712c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f712cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7130: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2f7130u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7134: 0x24e74cd0  addiu       $a3, $a3, 0x4CD0
    ctx->pc = 0x2f7134u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19664));
    // 0x2f7138: 0x25084cd8  addiu       $t0, $t0, 0x4CD8
    ctx->pc = 0x2f7138u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 19672));
    // 0x2f713c: 0xc0bdaf6  jal         func_2F6BD8
    ctx->pc = 0x2F713Cu;
    SET_GPR_U32(ctx, 31, 0x2F7144u);
    ctx->pc = 0x2F7140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F713Cu;
    // 0x2f7140: 0x2405001a  addiu       $a1, $zero, 0x1A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6BD8u, 0x2F713Cu, 0x2F7144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7144u;
label_2f7144:
    // 0x2f7144: 0x3c070015  lui         $a3, 0x15
    ctx->pc = 0x2f7144u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21 << 16));
    // 0x2f7148: 0x3c080015  lui         $t0, 0x15
    ctx->pc = 0x2f7148u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)21 << 16));
    // 0x2f714c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f714cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7150: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2f7150u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7154: 0x24e74ce0  addiu       $a3, $a3, 0x4CE0
    ctx->pc = 0x2f7154u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19680));
    // 0x2f7158: 0x25084ce8  addiu       $t0, $t0, 0x4CE8
    ctx->pc = 0x2f7158u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 19688));
    // 0x2f715c: 0xc0bdaf6  jal         func_2F6BD8
    ctx->pc = 0x2F715Cu;
    SET_GPR_U32(ctx, 31, 0x2F7164u);
    ctx->pc = 0x2F7160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F715Cu;
    // 0x2f7160: 0x2405001b  addiu       $a1, $zero, 0x1B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6BD8u, 0x2F715Cu, 0x2F7164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7164u;
label_2f7164:
    // 0x2f7164: 0x3c070015  lui         $a3, 0x15
    ctx->pc = 0x2f7164u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21 << 16));
    // 0x2f7168: 0x3c080015  lui         $t0, 0x15
    ctx->pc = 0x2f7168u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)21 << 16));
    // 0x2f716c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f716cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7170: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2f7170u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7174: 0x24e74cf0  addiu       $a3, $a3, 0x4CF0
    ctx->pc = 0x2f7174u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19696));
    // 0x2f7178: 0x25084cf8  addiu       $t0, $t0, 0x4CF8
    ctx->pc = 0x2f7178u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 19704));
    // 0x2f717c: 0xc0bdaf6  jal         func_2F6BD8
    ctx->pc = 0x2F717Cu;
    SET_GPR_U32(ctx, 31, 0x2F7184u);
    ctx->pc = 0x2F7180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F717Cu;
    // 0x2f7180: 0x2405001c  addiu       $a1, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6BD8u, 0x2F717Cu, 0x2F7184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7184u;
label_2f7184:
    // 0x2f7184: 0x3c070015  lui         $a3, 0x15
    ctx->pc = 0x2f7184u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21 << 16));
    // 0x2f7188: 0x3c080015  lui         $t0, 0x15
    ctx->pc = 0x2f7188u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)21 << 16));
    // 0x2f718c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f718cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7190: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2f7190u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7194: 0x24e74d00  addiu       $a3, $a3, 0x4D00
    ctx->pc = 0x2f7194u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19712));
    // 0x2f7198: 0x25084d08  addiu       $t0, $t0, 0x4D08
    ctx->pc = 0x2f7198u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 19720));
    // 0x2f719c: 0xc0bdaf6  jal         func_2F6BD8
    ctx->pc = 0x2F719Cu;
    SET_GPR_U32(ctx, 31, 0x2F71A4u);
    ctx->pc = 0x2F71A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F719Cu;
    // 0x2f71a0: 0x2405001d  addiu       $a1, $zero, 0x1D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6BD8u, 0x2F719Cu, 0x2F71A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F71A4u;
label_2f71a4:
    // 0x2f71a4: 0x3c070015  lui         $a3, 0x15
    ctx->pc = 0x2f71a4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21 << 16));
    // 0x2f71a8: 0x3c080015  lui         $t0, 0x15
    ctx->pc = 0x2f71a8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)21 << 16));
    // 0x2f71ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f71acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f71b0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2f71b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f71b4: 0x24e74d10  addiu       $a3, $a3, 0x4D10
    ctx->pc = 0x2f71b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19728));
    // 0x2f71b8: 0x25084d18  addiu       $t0, $t0, 0x4D18
    ctx->pc = 0x2f71b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 19736));
    // 0x2f71bc: 0xc0bdaf6  jal         func_2F6BD8
    ctx->pc = 0x2F71BCu;
    SET_GPR_U32(ctx, 31, 0x2F71C4u);
    ctx->pc = 0x2F71C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F71BCu;
    // 0x2f71c0: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6BD8u, 0x2F71BCu, 0x2F71C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F71C4u;
label_2f71c4:
    // 0x2f71c4: 0x3c070015  lui         $a3, 0x15
    ctx->pc = 0x2f71c4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21 << 16));
    // 0x2f71c8: 0x3c080015  lui         $t0, 0x15
    ctx->pc = 0x2f71c8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)21 << 16));
    // 0x2f71cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f71ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f71d0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2f71d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f71d4: 0x24e74d20  addiu       $a3, $a3, 0x4D20
    ctx->pc = 0x2f71d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19744));
    // 0x2f71d8: 0x25084d28  addiu       $t0, $t0, 0x4D28
    ctx->pc = 0x2f71d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 19752));
    // 0x2f71dc: 0xc0bdaf6  jal         func_2F6BD8
    ctx->pc = 0x2F71DCu;
    SET_GPR_U32(ctx, 31, 0x2F71E4u);
    ctx->pc = 0x2F71E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F71DCu;
    // 0x2f71e0: 0x2405001f  addiu       $a1, $zero, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6BD8u, 0x2F71DCu, 0x2F71E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F71E4u;
label_2f71e4:
    // 0x2f71e4: 0x3c070015  lui         $a3, 0x15
    ctx->pc = 0x2f71e4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21 << 16));
    // 0x2f71e8: 0x3c080015  lui         $t0, 0x15
    ctx->pc = 0x2f71e8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)21 << 16));
    // 0x2f71ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f71ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f71f0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2f71f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f71f4: 0x24e74d30  addiu       $a3, $a3, 0x4D30
    ctx->pc = 0x2f71f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19760));
    // 0x2f71f8: 0x25084d38  addiu       $t0, $t0, 0x4D38
    ctx->pc = 0x2f71f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 19768));
    // 0x2f71fc: 0xc0bdaf6  jal         func_2F6BD8
    ctx->pc = 0x2F71FCu;
    SET_GPR_U32(ctx, 31, 0x2F7204u);
    ctx->pc = 0x2F7200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F71FCu;
    // 0x2f7200: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6BD8u, 0x2F71FCu, 0x2F7204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7204u;
label_2f7204:
    // 0x2f7204: 0x3c070015  lui         $a3, 0x15
    ctx->pc = 0x2f7204u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21 << 16));
    // 0x2f7208: 0x24e74d40  addiu       $a3, $a3, 0x4D40
    ctx->pc = 0x2f7208u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19776));
    // 0x2f720c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2f720cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7210: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2f7210u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7214: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f7214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7218: 0xc0bdaf6  jal         func_2F6BD8
    ctx->pc = 0x2F7218u;
    SET_GPR_U32(ctx, 31, 0x2F7220u);
    ctx->pc = 0x2F721Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7218u;
    // 0x2f721c: 0x24050021  addiu       $a1, $zero, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6BD8u, 0x2F7218u, 0x2F7220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7220u;
label_2f7220:
    // 0x2f7220: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f7220u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2f7224: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f7224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7228: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F7228u;
    SET_GPR_U32(ctx, 31, 0x2F7230u);
    ctx->pc = 0x2F722Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7228u;
    // 0x2f722c: 0x24a51928  addiu       $a1, $a1, 0x1928 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F7228u, 0x2F7230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7230u;
label_2f7230:
    // 0x2f7230: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f7230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7234: 0xc0bdcf4  jal         func_2F73D0
    ctx->pc = 0x2F7234u;
    SET_GPR_U32(ctx, 31, 0x2F723Cu);
    ctx->pc = 0x2F7238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7234u;
    // 0x2f7238: 0xae0200e8  sw          $v0, 0xE8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F73D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F73D0u, 0x2F7234u, 0x2F723Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F723Cu;
label_2f723c:
    // 0x2f723c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f723cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f7240: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2f7240u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f7244: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f7244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f7248: 0x3e00008  jr          $ra
    ctx->pc = 0x2F7248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F724Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7248u;
        // 0x2f724c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F7248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F7250u;
}
