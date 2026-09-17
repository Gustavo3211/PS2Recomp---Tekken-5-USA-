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

// Function: sub_00D05A50
// Address: 0xd05a50 - 0xd05ba0
void sub_00D05A50_0xd05a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00D05A50_0xd05a50");
#endif

    switch (ctx->pc) {
        case 0xd05a88u: goto label_d05a88;
        case 0xd05a90u: goto label_d05a90;
        case 0xd05aa4u: goto label_d05aa4;
        case 0xd05ab0u: goto label_d05ab0;
        case 0xd05ac0u: goto label_d05ac0;
        case 0xd05ad4u: goto label_d05ad4;
        case 0xd05aecu: goto label_d05aec;
        case 0xd05afcu: goto label_d05afc;
        case 0xd05b1cu: goto label_d05b1c;
        case 0xd05b3cu: goto label_d05b3c;
        case 0xd05b44u: goto label_d05b44;
        case 0xd05b58u: goto label_d05b58;
        case 0xd05b60u: goto label_d05b60;
        case 0xd05b84u: goto label_d05b84;
        case 0xd05b90u: goto label_d05b90;
        default: break;
    }

    ctx->pc = 0xd05a50u;

    // 0xd05a50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0xd05a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0xd05a54: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0xd05a54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0xd05a58: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0xd05a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0xd05a5c: 0x309000ff  andi        $s0, $a0, 0xFF
    ctx->pc = 0xd05a5cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0xd05a60: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0xd05a60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0xd05a64: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0xd05a64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0xd05a68: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0xd05a68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0xd05a6c: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0xd05a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0xd05a70: 0x34a50010  ori         $a1, $a1, 0x10
    ctx->pc = 0xd05a70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16);
    // 0xd05a74: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0xd05a74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0xd05a78: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0xd05a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0xd05a7c: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0xd05a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0xd05a80: 0xc042d06  jal         func_10B418
    ctx->pc = 0xD05A80u;
    SET_GPR_U32(ctx, 31, 0xD05A88u);
    ctx->pc = 0xD05A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD05A80u;
    // 0xd05a84: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B418u, 0xD05A80u, 0xD05A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD05A88u;
label_d05a88:
    // 0xd05a88: 0xc042d0a  jal         func_10B428
    ctx->pc = 0xD05A88u;
    SET_GPR_U32(ctx, 31, 0xD05A90u);
    ctx->pc = 0xD05A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD05A88u;
    // 0xd05a8c: 0x3c047000  lui         $a0, 0x7000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B428u, 0xD05A88u, 0xD05A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD05A90u;
label_d05a90:
    // 0xd05a90: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0xd05a90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0xd05a94: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0xd05a94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0xd05a98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0xd05a98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0xd05a9c: 0xc042d24  jal         func_10B490
    ctx->pc = 0xD05A9Cu;
    SET_GPR_U32(ctx, 31, 0xD05AA4u);
    ctx->pc = 0xD05AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD05A9Cu;
    // 0xd05aa0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B490u, 0xD05A9Cu, 0xD05AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD05AA4u;
label_d05aa4:
    // 0xd05aa4: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0xd05aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0xd05aa8: 0xc042d60  jal         func_10B580
    ctx->pc = 0xD05AA8u;
    SET_GPR_U32(ctx, 31, 0xD05AB0u);
    ctx->pc = 0xD05AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD05AA8u;
    // 0xd05aac: 0x7ba50000  lq          $a1, 0x0($sp) (Delay Slot)
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B580u, 0xD05AA8u, 0xD05AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD05AB0u;
label_d05ab0:
    // 0xd05ab0: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0xd05ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0xd05ab4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0xd05ab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0xd05ab8: 0xc042d9a  jal         func_10B668
    ctx->pc = 0xD05AB8u;
    SET_GPR_U32(ctx, 31, 0xD05AC0u);
    ctx->pc = 0xD05ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD05AB8u;
    // 0xd05abc: 0x24060046  addiu       $a2, $zero, 0x46 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0xD05AB8u, 0xD05AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD05AC0u;
label_d05ac0:
    // 0xd05ac0: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0xd05ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0xd05ac4: 0x3c060003  lui         $a2, 0x3
    ctx->pc = 0xd05ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    // 0xd05ac8: 0x34c60807  ori         $a2, $a2, 0x807
    ctx->pc = 0xd05ac8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2055);
    // 0xd05acc: 0xc042d9a  jal         func_10B668
    ctx->pc = 0xD05ACCu;
    SET_GPR_U32(ctx, 31, 0xD05AD4u);
    ctx->pc = 0xD05AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD05ACCu;
    // 0xd05ad0: 0x24050047  addiu       $a1, $zero, 0x47 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0xD05ACCu, 0xD05AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD05AD4u;
label_d05ad4:
    // 0xd05ad4: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0xd05ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0xd05ad8: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0xd05ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0xd05adc: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0xd05adcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0xd05ae0: 0x34c60044  ori         $a2, $a2, 0x44
    ctx->pc = 0xd05ae0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)68);
    // 0xd05ae4: 0xc042d9a  jal         func_10B668
    ctx->pc = 0xD05AE4u;
    SET_GPR_U32(ctx, 31, 0xD05AECu);
    ctx->pc = 0xD05AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD05AE4u;
    // 0xd05ae8: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0xD05AE4u, 0xD05AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD05AECu;
label_d05aec:
    // 0xd05aec: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0xd05aecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0xd05af0: 0x103638  dsll        $a2, $s0, 24
    ctx->pc = 0xd05af0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) << 24);
    // 0xd05af4: 0xc042d9a  jal         func_10B668
    ctx->pc = 0xD05AF4u;
    SET_GPR_U32(ctx, 31, 0xD05AFCu);
    ctx->pc = 0xD05AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD05AF4u;
    // 0xd05af8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0xD05AF4u, 0xD05AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD05AFCu;
label_d05afc:
    // 0xd05afc: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0xd05afcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0xd05b00: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0xd05b00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0xd05b04: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0xd05b04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0xd05b08: 0x34c67200  ori         $a2, $a2, 0x7200
    ctx->pc = 0xd05b08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)29184);
    // 0xd05b0c: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0xd05b0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0xd05b10: 0x34c66c00  ori         $a2, $a2, 0x6C00
    ctx->pc = 0xd05b10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)27648);
    // 0xd05b14: 0xc042d9a  jal         func_10B668
    ctx->pc = 0xD05B14u;
    SET_GPR_U32(ctx, 31, 0xD05B1Cu);
    ctx->pc = 0xD05B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD05B14u;
    // 0xd05b18: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0xD05B14u, 0xD05B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD05B1Cu;
label_d05b1c:
    // 0xd05b1c: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0xd05b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0xd05b20: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0xd05b20u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0xd05b24: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0xd05b24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0xd05b28: 0x34c68e00  ori         $a2, $a2, 0x8E00
    ctx->pc = 0xd05b28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)36352);
    // 0xd05b2c: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0xd05b2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0xd05b30: 0x34c69400  ori         $a2, $a2, 0x9400
    ctx->pc = 0xd05b30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)37888);
    // 0xd05b34: 0xc042d9a  jal         func_10B668
    ctx->pc = 0xD05B34u;
    SET_GPR_U32(ctx, 31, 0xD05B3Cu);
    ctx->pc = 0xD05B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD05B34u;
    // 0xd05b38: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0xD05B34u, 0xD05B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD05B3Cu;
label_d05b3c:
    // 0xd05b3c: 0xc042d66  jal         func_10B598
    ctx->pc = 0xD05B3Cu;
    SET_GPR_U32(ctx, 31, 0xD05B44u);
    ctx->pc = 0xD05B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD05B3Cu;
    // 0xd05b40: 0x3c047000  lui         $a0, 0x7000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B598u, 0xD05B3Cu, 0xD05B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD05B44u;
label_d05b44:
    // 0xd05b44: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0xd05b44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0xd05b48: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0xd05b48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0xd05b4c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0xd05b4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0xd05b50: 0xc042d42  jal         func_10B508
    ctx->pc = 0xD05B50u;
    SET_GPR_U32(ctx, 31, 0xD05B58u);
    ctx->pc = 0xD05B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD05B50u;
    // 0xd05b54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B508u, 0xD05B50u, 0xD05B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD05B58u;
label_d05b58:
    // 0xd05b58: 0xc042d0e  jal         func_10B438
    ctx->pc = 0xD05B58u;
    SET_GPR_U32(ctx, 31, 0xD05B60u);
    ctx->pc = 0xD05B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD05B58u;
    // 0xd05b5c: 0x3c047000  lui         $a0, 0x7000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B438u, 0xD05B58u, 0xD05B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD05B60u;
label_d05b60:
    // 0xd05b60: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0xd05b60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0xd05b64: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0xd05b64u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x70000004u)); // MMIO: 0x70000004
    // 0xd05b68: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0xd05b68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0xd05b6c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0xd05b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0xd05b70: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0xd05b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0xd05b74: 0x8f84ccf0  lw          $a0, -0x3310($gp)
    ctx->pc = 0xd05b74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954224)));
    // 0xd05b78: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0xd05b78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0xd05b7c: 0xc04072c  jal         func_101CB0
    ctx->pc = 0xD05B7Cu;
    SET_GPR_U32(ctx, 31, 0xD05B84u);
    ctx->pc = 0xD05B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD05B7Cu;
    // 0xd05b80: 0xa32825  or          $a1, $a1, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101CB0u, 0xD05B7Cu, 0xD05B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD05B84u;
label_d05b84:
    // 0xd05b84: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0xd05b84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0xd05b88: 0xc0409b2  jal         func_1026C8
    ctx->pc = 0xD05B88u;
    SET_GPR_U32(ctx, 31, 0xD05B90u);
    ctx->pc = 0xD05B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD05B88u;
    // 0xd05b8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1026C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1026C8u, 0xD05B88u, 0xD05B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD05B90u;
label_d05b90:
    // 0xd05b90: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0xd05b90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0xd05b94: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0xd05b94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0xd05b98: 0x3e00008  jr          $ra
    ctx->pc = 0xD05B98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0xD05B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0xD05B98u;
        // 0xd05b9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0xD05B98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0xD05BA0u;
}
