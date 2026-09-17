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

// Function: sub_00D05D50
// Address: 0xd05d50 - 0xd05e80
void sub_00D05D50_0xd05d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00D05D50_0xd05d50");
#endif

    switch (ctx->pc) {
        case 0xd05d98u: goto label_d05d98;
        case 0xd05da0u: goto label_d05da0;
        case 0xd05dacu: goto label_d05dac;
        case 0xd05db4u: goto label_d05db4;
        case 0xd05dc8u: goto label_d05dc8;
        case 0xd05dfcu: goto label_d05dfc;
        case 0xd05e10u: goto label_d05e10;
        case 0xd05e18u: goto label_d05e18;
        case 0xd05e30u: goto label_d05e30;
        case 0xd05e3cu: goto label_d05e3c;
        case 0xd05e4cu: goto label_d05e4c;
        default: break;
    }

    ctx->pc = 0xd05d50u;

    // 0xd05d50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0xd05d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0xd05d54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0xd05d54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0xd05d58: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0xd05d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0xd05d5c: 0x3c1200d1  lui         $s2, 0xD1
    ctx->pc = 0xd05d5cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)209 << 16));
    // 0xd05d60: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0xd05d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0xd05d64: 0x3c110fff  lui         $s1, 0xFFF
    ctx->pc = 0xd05d64u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)4095 << 16));
    // 0xd05d68: 0x26446600  addiu       $a0, $s2, 0x6600
    ctx->pc = 0xd05d68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 26112));
    // 0xd05d6c: 0x3c060004  lui         $a2, 0x4
    ctx->pc = 0xd05d6cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4 << 16));
    // 0xd05d70: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0xd05d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0xd05d74: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0xd05d74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0xd05d78: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0xd05d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0xd05d7c: 0x3c138000  lui         $s3, 0x8000
    ctx->pc = 0xd05d7cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32768 << 16));
    // 0xd05d80: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0xd05d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0xd05d84: 0x24140080  addiu       $s4, $zero, 0x80
    ctx->pc = 0xd05d84u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0xd05d88: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0xd05d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0xd05d8c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0xd05d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0xd05d90: 0xc04a151  jal         func_128544
    ctx->pc = 0xD05D90u;
    SET_GPR_U32(ctx, 31, 0xD05D98u);
    ctx->pc = 0xD05D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD05D90u;
    // 0xd05d94: 0x24150200  addiu       $s5, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0xD05D90u, 0xD05D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD05D98u;
label_d05d98:
    // 0xd05d98: 0x3631ffff  ori         $s1, $s1, 0xFFFF
    ctx->pc = 0xd05d98u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    // 0xd05d9c: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0xd05d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
label_d05da0:
    // 0xd05da0: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0xd05da0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0xd05da4: 0xc042d06  jal         func_10B418
    ctx->pc = 0xD05DA4u;
    SET_GPR_U32(ctx, 31, 0xD05DACu);
    ctx->pc = 0xD05DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD05DA4u;
    // 0xd05da8: 0x34a50010  ori         $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B418u, 0xD05DA4u, 0xD05DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD05DACu;
label_d05dac:
    // 0xd05dac: 0xc042d0a  jal         func_10B428
    ctx->pc = 0xD05DACu;
    SET_GPR_U32(ctx, 31, 0xD05DB4u);
    ctx->pc = 0xD05DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD05DACu;
    // 0xd05db0: 0x3c047000  lui         $a0, 0x7000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B428u, 0xD05DACu, 0xD05DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD05DB4u;
label_d05db4:
    // 0xd05db4: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0xd05db4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0xd05db8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0xd05db8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0xd05dbc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0xd05dbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0xd05dc0: 0xc042d24  jal         func_10B490
    ctx->pc = 0xD05DC0u;
    SET_GPR_U32(ctx, 31, 0xD05DC8u);
    ctx->pc = 0xD05DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD05DC0u;
    // 0xd05dc4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B490u, 0xD05DC0u, 0xD05DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD05DC8u;
label_d05dc8:
    // 0xd05dc8: 0x102a80  sll         $a1, $s0, 10
    ctx->pc = 0xd05dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 10));
    // 0xd05dcc: 0x26486600  addiu       $t0, $s2, 0x6600
    ctx->pc = 0xd05dccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 26112));
    // 0xd05dd0: 0x24094000  addiu       $t1, $zero, 0x4000
    ctx->pc = 0xd05dd0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0xd05dd4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0xd05dd4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0xd05dd8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0xd05dd8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0xd05ddc: 0x30a5fc00  andi        $a1, $a1, 0xFC00
    ctx->pc = 0xd05ddcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)64512);
    // 0xd05de0: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0xd05de0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0xd05de4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0xd05de4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0xd05de8: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0xd05de8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0xd05dec: 0xafb50000  sw          $s5, 0x0($sp)
    ctx->pc = 0xd05decu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 21));
    // 0xd05df0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0xd05df0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0xd05df4: 0xc042da4  jal         func_10B690
    ctx->pc = 0xD05DF4u;
    SET_GPR_U32(ctx, 31, 0xD05DFCu);
    ctx->pc = 0xD05DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD05DF4u;
    // 0xd05df8: 0xafb40008  sw          $s4, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B690u, 0xD05DF4u, 0xD05DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD05DFCu;
label_d05dfc:
    // 0xd05dfc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0xd05dfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0xd05e00: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0xd05e00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0xd05e04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0xd05e04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0xd05e08: 0xc042d42  jal         func_10B508
    ctx->pc = 0xD05E08u;
    SET_GPR_U32(ctx, 31, 0xD05E10u);
    ctx->pc = 0xD05E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD05E08u;
    // 0xd05e0c: 0x3c047000  lui         $a0, 0x7000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B508u, 0xD05E08u, 0xD05E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD05E10u;
label_d05e10:
    // 0xd05e10: 0xc042d0e  jal         func_10B438
    ctx->pc = 0xD05E10u;
    SET_GPR_U32(ctx, 31, 0xD05E18u);
    ctx->pc = 0xD05E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD05E10u;
    // 0xd05e14: 0x3c047000  lui         $a0, 0x7000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B438u, 0xD05E10u, 0xD05E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD05E18u;
label_d05e18:
    // 0xd05e18: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0xd05e18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0xd05e1c: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0xd05e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x70000004u)); // MMIO: 0x70000004
    // 0xd05e20: 0x8f84ccf0  lw          $a0, -0x3310($gp)
    ctx->pc = 0xd05e20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954224)));
    // 0xd05e24: 0xb12824  and         $a1, $a1, $s1
    ctx->pc = 0xd05e24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 17));
    // 0xd05e28: 0xc04072c  jal         func_101CB0
    ctx->pc = 0xD05E28u;
    SET_GPR_U32(ctx, 31, 0xD05E30u);
    ctx->pc = 0xD05E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD05E28u;
    // 0xd05e2c: 0xb32825  or          $a1, $a1, $s3 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101CB0u, 0xD05E28u, 0xD05E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD05E30u;
label_d05e30:
    // 0xd05e30: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0xd05e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0xd05e34: 0xc0409b2  jal         func_1026C8
    ctx->pc = 0xD05E34u;
    SET_GPR_U32(ctx, 31, 0xD05E3Cu);
    ctx->pc = 0xD05E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD05E34u;
    // 0xd05e38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1026C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1026C8u, 0xD05E34u, 0xD05E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD05E3Cu;
label_d05e3c:
    // 0xd05e3c: 0x8f84ccf0  lw          $a0, -0x3310($gp)
    ctx->pc = 0xd05e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954224)));
    // 0xd05e40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0xd05e40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0xd05e44: 0xc0407d4  jal         func_101F50
    ctx->pc = 0xD05E44u;
    SET_GPR_U32(ctx, 31, 0xD05E4Cu);
    ctx->pc = 0xD05E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD05E44u;
    // 0xd05e48: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101F50u, 0xD05E44u, 0xD05E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD05E4Cu;
label_d05e4c:
    // 0xd05e4c: 0x2a030010  slti        $v1, $s0, 0x10
    ctx->pc = 0xd05e4cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0xd05e50: 0x1460ffd3  bnez        $v1, . + 4 + (-0x2D << 2)
    ctx->pc = 0xD05E50u;
    {
        const bool branch_taken_0xd05e50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0xD05E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0xD05E50u;
        // 0xd05e54: 0x3c057000  lui         $a1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0xd05e50) {
            ctx->pc = 0xD05DA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_d05da0;
        }
    }
    ctx->pc = 0xD05E58u;
    // 0xd05e58: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0xd05e58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0xd05e5c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0xd05e5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0xd05e60: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0xd05e60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0xd05e64: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0xd05e64u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0xd05e68: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0xd05e68u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0xd05e6c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0xd05e6cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0xd05e70: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0xd05e70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0xd05e74: 0x3e00008  jr          $ra
    ctx->pc = 0xD05E74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0xD05E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0xD05E74u;
        // 0xd05e78: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0xD05E74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0xD05E7Cu;
    // 0xd05e7c: 0x0  nop
    ctx->pc = 0xd05e7cu;
    // NOP
    ctx->pc = 0xd05e80u;
}
