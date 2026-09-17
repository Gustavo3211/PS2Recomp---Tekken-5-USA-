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

// Function: sub_001F1D70
// Address: 0x1f1d70 - 0x1f2190
void sub_001F1D70_0x1f1d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F1D70_0x1f1d70");
#endif

    switch (ctx->pc) {
        case 0x1f1dc4u: goto label_1f1dc4;
        case 0x1f1dd8u: goto label_1f1dd8;
        case 0x1f1de0u: goto label_1f1de0;
        case 0x1f1de8u: goto label_1f1de8;
        case 0x1f1df0u: goto label_1f1df0;
        case 0x1f1e00u: goto label_1f1e00;
        case 0x1f1e08u: goto label_1f1e08;
        case 0x1f1e10u: goto label_1f1e10;
        case 0x1f1e20u: goto label_1f1e20;
        case 0x1f1e6cu: goto label_1f1e6c;
        case 0x1f1e78u: goto label_1f1e78;
        case 0x1f1e80u: goto label_1f1e80;
        case 0x1f1e90u: goto label_1f1e90;
        case 0x1f1e98u: goto label_1f1e98;
        case 0x1f1ea0u: goto label_1f1ea0;
        case 0x1f1eb0u: goto label_1f1eb0;
        case 0x1f1eccu: goto label_1f1ecc;
        case 0x1f1ed4u: goto label_1f1ed4;
        case 0x1f1edcu: goto label_1f1edc;
        case 0x1f1ee4u: goto label_1f1ee4;
        case 0x1f1ef8u: goto label_1f1ef8;
        case 0x1f1f38u: goto label_1f1f38;
        case 0x1f1f48u: goto label_1f1f48;
        case 0x1f1f88u: goto label_1f1f88;
        case 0x1f1f98u: goto label_1f1f98;
        case 0x1f1fa0u: goto label_1f1fa0;
        case 0x1f1fb0u: goto label_1f1fb0;
        case 0x1f1fc0u: goto label_1f1fc0;
        case 0x1f1fc8u: goto label_1f1fc8;
        case 0x1f1fd0u: goto label_1f1fd0;
        case 0x1f1fd8u: goto label_1f1fd8;
        case 0x1f1fe0u: goto label_1f1fe0;
        case 0x1f1fe8u: goto label_1f1fe8;
        case 0x1f1ff0u: goto label_1f1ff0;
        case 0x1f1ffcu: goto label_1f1ffc;
        case 0x1f2010u: goto label_1f2010;
        case 0x1f2064u: goto label_1f2064;
        case 0x1f20b8u: goto label_1f20b8;
        case 0x1f20c4u: goto label_1f20c4;
        case 0x1f20ccu: goto label_1f20cc;
        case 0x1f20d4u: goto label_1f20d4;
        case 0x1f20dcu: goto label_1f20dc;
        case 0x1f20e8u: goto label_1f20e8;
        case 0x1f211cu: goto label_1f211c;
        case 0x1f2128u: goto label_1f2128;
        case 0x1f215cu: goto label_1f215c;
        default: break;
    }

    ctx->pc = 0x1f1d70u;

    // 0x1f1d70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f1d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1f1d74: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1f1d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1f1d78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f1d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f1d7c: 0x41c00  sll         $v1, $a0, 16
    ctx->pc = 0x1f1d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x1f1d80: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f1d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f1d84: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x1f1d84u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x1f1d88: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f1d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f1d8c: 0x244288d0  addiu       $v0, $v0, -0x7730
    ctx->pc = 0x1f1d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
    // 0x1f1d90: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1f1d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1f1d94: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f1d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1d98: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1f1d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1f1d9c: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1f1d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x1f1da0: 0x3bc03  sra         $s7, $v1, 16
    ctx->pc = 0x1f1da0u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 3), 16));
    // 0x1f1da4: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x1f1da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x1f1da8: 0x5f403  sra         $fp, $a1, 16
    ctx->pc = 0x1f1da8u;
    SET_GPR_S32(ctx, 30, SRA32(GPR_S32(ctx, 5), 16));
    // 0x1f1dac: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1f1dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1f1db0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1f1db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1f1db4: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x1f1db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x1f1db8: 0x8c540004  lw          $s4, 0x4($v0)
    ctx->pc = 0x1f1db8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1f1dbc: 0xc09d480  jal         func_275200
    ctx->pc = 0x1F1DBCu;
    SET_GPR_U32(ctx, 31, 0x1F1DC4u);
    ctx->pc = 0x1F1DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1DBCu;
    // 0x1f1dc0: 0x8c530000  lw          $s3, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275200u, 0x1F1DBCu, 0x1F1DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1DC4u;
label_1f1dc4:
    // 0x1f1dc4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f1dc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1dc8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1f1dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1f1dcc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f1dccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1dd0: 0xc09d486  jal         func_275218
    ctx->pc = 0x1F1DD0u;
    SET_GPR_U32(ctx, 31, 0x1F1DD8u);
    ctx->pc = 0x1F1DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1DD0u;
    // 0x1f1dd4: 0x24518858  addiu       $s1, $v0, -0x77A8 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275218u, 0x1F1DD0u, 0x1F1DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1DD8u;
label_1f1dd8:
    // 0x1f1dd8: 0xc09d47a  jal         func_2751E8
    ctx->pc = 0x1F1DD8u;
    SET_GPR_U32(ctx, 31, 0x1F1DE0u);
    ctx->pc = 0x1F1DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1DD8u;
    // 0x1f1ddc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2751E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2751E8u, 0x1F1DD8u, 0x1F1DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1DE0u;
label_1f1de0:
    // 0x1f1de0: 0xc09d47e  jal         func_2751F8
    ctx->pc = 0x1F1DE0u;
    SET_GPR_U32(ctx, 31, 0x1F1DE8u);
    ctx->pc = 0x1F1DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1DE0u;
    // 0x1f1de4: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2751F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2751F8u, 0x1F1DE0u, 0x1F1DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1DE8u;
label_1f1de8:
    // 0x1f1de8: 0xc08bb28  jal         func_22ECA0
    ctx->pc = 0x1F1DE8u;
    SET_GPR_U32(ctx, 31, 0x1F1DF0u);
    ctx->pc = 0x1F1DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1DE8u;
    // 0x1f1dec: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22ECA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22ECA0u, 0x1F1DE8u, 0x1F1DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1DF0u;
label_1f1df0:
    // 0x1f1df0: 0x8e240028  lw          $a0, 0x28($s1)
    ctx->pc = 0x1f1df0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x1f1df4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f1df4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1df8: 0xc07c71c  jal         func_1F1C70
    ctx->pc = 0x1F1DF8u;
    SET_GPR_U32(ctx, 31, 0x1F1E00u);
    ctx->pc = 0x1F1DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1DF8u;
    // 0x1f1dfc: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F1C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1C70u, 0x1F1DF8u, 0x1F1E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1E00u;
label_1f1e00:
    // 0x1f1e00: 0xc07e220  jal         func_1F8880
    ctx->pc = 0x1F1E00u;
    SET_GPR_U32(ctx, 31, 0x1F1E08u);
    ctx->pc = 0x1F8880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8880u, 0x1F1E00u, 0x1F1E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1E08u;
label_1f1e08:
    // 0x1f1e08: 0xc09d940  jal         func_276500
    ctx->pc = 0x1F1E08u;
    SET_GPR_U32(ctx, 31, 0x1F1E10u);
    ctx->pc = 0x1F1E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1E08u;
    // 0x1f1e0c: 0xaf80973c  sw          $zero, -0x68C4($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940476), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276500u, 0x1F1E08u, 0x1F1E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1E10u;
label_1f1e10:
    // 0x1f1e10: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F1E10u;
    {
        const bool branch_taken_0x1f1e10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1E10u;
        // 0x1f1e14: 0x3c03003b  lui         $v1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1e10) {
            ctx->pc = 0x1F1E28u;
            goto label_1f1e28;
        }
    }
    ctx->pc = 0x1F1E18u;
    // 0x1f1e18: 0xc09d9a4  jal         func_276690
    ctx->pc = 0x1F1E18u;
    SET_GPR_U32(ctx, 31, 0x1F1E20u);
    ctx->pc = 0x276690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276690u, 0x1F1E18u, 0x1F1E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1E20u;
label_1f1e20:
    // 0x1f1e20: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F1E20u;
    {
        const bool branch_taken_0x1f1e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1E20u;
        // 0x1f1e24: 0xae220040  sw          $v0, 0x40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1e20) {
            ctx->pc = 0x1F1E34u;
            goto label_1f1e34;
        }
    }
    ctx->pc = 0x1F1E28u;
label_1f1e28:
    // 0x1f1e28: 0x246283c0  addiu       $v0, $v1, -0x7C40
    ctx->pc = 0x1f1e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935488));
    // 0x1f1e2c: 0x9043002f  lbu         $v1, 0x2F($v0)
    ctx->pc = 0x1f1e2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 47)));
    // 0x1f1e30: 0xae230040  sw          $v1, 0x40($s1)
    ctx->pc = 0x1f1e30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 3));
label_1f1e34:
    // 0x1f1e34: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1f1e34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1f1e38: 0x24458858  addiu       $a1, $v0, -0x77A8
    ctx->pc = 0x1f1e38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936664));
    // 0x1f1e3c: 0x8ca30040  lw          $v1, 0x40($a1)
    ctx->pc = 0x1f1e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A8898u));
    // 0x1f1e40: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x1f1e40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1f1e44: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F1E44u;
    {
        const bool branch_taken_0x1f1e44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F1E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1E44u;
        // 0x1f1e48: 0x31040  sll         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1e44) {
            ctx->pc = 0x1F1E5Cu;
            goto label_1f1e5c;
        }
    }
    ctx->pc = 0x1F1E4Cu;
    // 0x1f1e4c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1f1e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1f1e50: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1f1e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1f1e54: 0xaca20040  sw          $v0, 0x40($a1)
    ctx->pc = 0x1f1e54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 2));
    // 0x1f1e58: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1f1e58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1f1e5c:
    // 0x1f1e5c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f1e5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1e60: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f1e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1f1e64: 0xc07c2ae  jal         func_1F0AB8
    ctx->pc = 0x1F1E64u;
    SET_GPR_U32(ctx, 31, 0x1F1E6Cu);
    ctx->pc = 0x1F1E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1E64u;
    // 0x1f1e68: 0xaca20044  sw          $v0, 0x44($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F0AB8u, 0x1F1E64u, 0x1F1E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1E6Cu;
label_1f1e6c:
    // 0x1f1e6c: 0xa6600090  sh          $zero, 0x90($s3)
    ctx->pc = 0x1f1e6cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 144), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f1e70: 0xc07c2ae  jal         func_1F0AB8
    ctx->pc = 0x1F1E70u;
    SET_GPR_U32(ctx, 31, 0x1F1E78u);
    ctx->pc = 0x1F1E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1E70u;
    // 0x1f1e74: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F0AB8u, 0x1F1E70u, 0x1F1E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1E78u;
label_1f1e78:
    // 0x1f1e78: 0xc09d940  jal         func_276500
    ctx->pc = 0x1F1E78u;
    SET_GPR_U32(ctx, 31, 0x1F1E80u);
    ctx->pc = 0x1F1E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1E78u;
    // 0x1f1e7c: 0xa6800090  sh          $zero, 0x90($s4) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 20), 144), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276500u, 0x1F1E78u, 0x1F1E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1E80u;
label_1f1e80:
    // 0x1f1e80: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1F1E80u;
    {
        const bool branch_taken_0x1f1e80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1e80) {
            ctx->pc = 0x1F1E84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1E80u;
            // 0x1f1e84: 0x17102b  sltu        $v0, $zero, $s7 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1EB8u;
            goto label_1f1eb8;
        }
    }
    ctx->pc = 0x1F1E88u;
    // 0x1f1e88: 0xc09d99a  jal         func_276668
    ctx->pc = 0x1F1E88u;
    SET_GPR_U32(ctx, 31, 0x1F1E90u);
    ctx->pc = 0x1F1E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1E88u;
    // 0x1f1e8c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276668u, 0x1F1E88u, 0x1F1E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1E90u;
label_1f1e90:
    // 0x1f1e90: 0xc09d99a  jal         func_276668
    ctx->pc = 0x1F1E90u;
    SET_GPR_U32(ctx, 31, 0x1F1E98u);
    ctx->pc = 0x1F1E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1E90u;
    // 0x1f1e94: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276668u, 0x1F1E90u, 0x1F1E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1E98u;
label_1f1e98:
    // 0x1f1e98: 0xc09dc20  jal         func_277080
    ctx->pc = 0x1F1E98u;
    SET_GPR_U32(ctx, 31, 0x1F1EA0u);
    ctx->pc = 0x277080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277080u, 0x1F1E98u, 0x1F1EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1EA0u;
label_1f1ea0:
    // 0x1f1ea0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1f1ea0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1ea4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f1ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1ea8: 0xc092b66  jal         func_24AD98
    ctx->pc = 0x1F1EA8u;
    SET_GPR_U32(ctx, 31, 0x1F1EB0u);
    ctx->pc = 0x1F1EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1EA8u;
    // 0x1f1eac: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24AD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24AD98u, 0x1F1EA8u, 0x1F1EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1EB0u;
label_1f1eb0:
    // 0x1f1eb0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F1EB0u;
    {
        const bool branch_taken_0x1f1eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1eb0) {
            ctx->pc = 0x1F1EC4u;
            goto label_1f1ec4;
        }
    }
    ctx->pc = 0x1F1EB8u;
label_1f1eb8:
    // 0x1f1eb8: 0x1e182b  sltu        $v1, $zero, $fp
    ctx->pc = 0x1f1eb8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
    // 0x1f1ebc: 0xa26201bc  sb          $v0, 0x1BC($s3)
    ctx->pc = 0x1f1ebcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 444), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f1ec0: 0xa28301bc  sb          $v1, 0x1BC($s4)
    ctx->pc = 0x1f1ec0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 444), (uint8_t)GPR_U32(ctx, 3));
label_1f1ec4:
    // 0x1f1ec4: 0xc0994b6  jal         func_2652D8
    ctx->pc = 0x1F1EC4u;
    SET_GPR_U32(ctx, 31, 0x1F1ECCu);
    ctx->pc = 0x1F1EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1EC4u;
    // 0x1f1ec8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2652D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2652D8u, 0x1F1EC4u, 0x1F1ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1ECCu;
label_1f1ecc:
    // 0x1f1ecc: 0xc09da38  jal         func_2768E0
    ctx->pc = 0x1F1ECCu;
    SET_GPR_U32(ctx, 31, 0x1F1ED4u);
    ctx->pc = 0x2768E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2768E0u, 0x1F1ECCu, 0x1F1ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1ED4u;
label_1f1ed4:
    // 0x1f1ed4: 0xc0b2544  jal         func_2C9510
    ctx->pc = 0x1F1ED4u;
    SET_GPR_U32(ctx, 31, 0x1F1EDCu);
    ctx->pc = 0x2C9510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9510u, 0x1F1ED4u, 0x1F1EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1EDCu;
label_1f1edc:
    // 0x1f1edc: 0xc0a39f8  jal         func_28E7E0
    ctx->pc = 0x1F1EDCu;
    SET_GPR_U32(ctx, 31, 0x1F1EE4u);
    ctx->pc = 0x28E7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E7E0u, 0x1F1EDCu, 0x1F1EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1EE4u;
label_1f1ee4:
    // 0x1f1ee4: 0x1aa00012  blez        $s5, . + 4 + (0x12 << 2)
    ctx->pc = 0x1F1EE4u;
    {
        const bool branch_taken_0x1f1ee4 = (GPR_S32(ctx, 21) <= 0);
        if (branch_taken_0x1f1ee4) {
            ctx->pc = 0x1F1F30u;
            goto label_1f1f30;
        }
    }
    ctx->pc = 0x1F1EECu;
    // 0x1f1eec: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1f1eecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f1ef0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1f1ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f1ef4: 0x0  nop
    ctx->pc = 0x1f1ef4u;
    // NOP
label_1f1ef8:
    // 0x1f1ef8: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x1f1ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x1f1efc: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x1f1efcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1f1f00: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F1F00u;
    {
        const bool branch_taken_0x1f1f00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1F00u;
        // 0x1f1f04: 0xa6000090  sh          $zero, 0x90($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 144), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1f00) {
            ctx->pc = 0x1F1F10u;
            goto label_1f1f10;
        }
    }
    ctx->pc = 0x1F1F08u;
    // 0x1f1f08: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F1F08u;
    {
        const bool branch_taken_0x1f1f08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F1F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1F08u;
        // 0x1f1f0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1f08) {
            ctx->pc = 0x1F1F14u;
            goto label_1f1f14;
        }
    }
    ctx->pc = 0x1F1F10u;
label_1f1f10:
    // 0x1f1f10: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f1f10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f1f14:
    // 0x1f1f14: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F1F14u;
    {
        const bool branch_taken_0x1f1f14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1f14) {
            ctx->pc = 0x1F1F18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1F14u;
            // 0x1f1f18: 0xa20401bc  sb          $a0, 0x1BC($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 444), (uint8_t)GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1F20u;
            goto label_1f1f20;
        }
    }
    ctx->pc = 0x1F1F1Cu;
    // 0x1f1f1c: 0xa20501bc  sb          $a1, 0x1BC($s0)
    ctx->pc = 0x1f1f1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 444), (uint8_t)GPR_U32(ctx, 5));
label_1f1f20:
    // 0x1f1f20: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f1f20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f1f24: 0x235102a  slt         $v0, $s1, $s5
    ctx->pc = 0x1f1f24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x1f1f28: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1F1F28u;
    {
        const bool branch_taken_0x1f1f28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F1F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1F28u;
        // 0x1f1f2c: 0x261008d0  addiu       $s0, $s0, 0x8D0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1f28) {
            ctx->pc = 0x1F1EF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f1ef8;
        }
    }
    ctx->pc = 0x1F1F30u;
label_1f1f30:
    // 0x1f1f30: 0xc09d618  jal         func_275860
    ctx->pc = 0x1F1F30u;
    SET_GPR_U32(ctx, 31, 0x1F1F38u);
    ctx->pc = 0x1F1F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1F30u;
    // 0x1f1f34: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275860u, 0x1F1F30u, 0x1F1F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1F38u;
label_1f1f38:
    // 0x1f1f38: 0x1ac0000b  blez        $s6, . + 4 + (0xB << 2)
    ctx->pc = 0x1F1F38u;
    {
        const bool branch_taken_0x1f1f38 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x1F1F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1F38u;
        // 0x1f1f3c: 0x3c03003b  lui         $v1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1f38) {
            ctx->pc = 0x1F1F68u;
            goto label_1f1f68;
        }
    }
    ctx->pc = 0x1F1F40u;
    // 0x1f1f40: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1f1f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1f1f44: 0x0  nop
    ctx->pc = 0x1f1f44u;
    // NOP
label_1f1f48:
    // 0x1f1f48: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f1f48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f1f4c: 0xa6400090  sh          $zero, 0x90($s2)
    ctx->pc = 0x1f1f4cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 144), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f1f50: 0x236102a  slt         $v0, $s1, $s6
    ctx->pc = 0x1f1f50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x1f1f54: 0xa24301bc  sb          $v1, 0x1BC($s2)
    ctx->pc = 0x1f1f54u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 444), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f1f58: 0x0  nop
    ctx->pc = 0x1f1f58u;
    // NOP
    // 0x1f1f5c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F1F5Cu;
    {
        const bool branch_taken_0x1f1f5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F1F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1F5Cu;
        // 0x1f1f60: 0x265208d0  addiu       $s2, $s2, 0x8D0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1f5c) {
            ctx->pc = 0x1F1F48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f1f48;
        }
    }
    ctx->pc = 0x1F1F64u;
    // 0x1f1f64: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x1f1f64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_1f1f68:
    // 0x1f1f68: 0x247183c0  addiu       $s1, $v1, -0x7C40
    ctx->pc = 0x1f1f68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935488));
    // 0x1f1f6c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1f1f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f1f70: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x1f1f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x1f1f74: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F1F74u;
    {
        const bool branch_taken_0x1f1f74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1f74) {
            ctx->pc = 0x1F1FA8u;
            goto label_1f1fa8;
        }
    }
    ctx->pc = 0x1F1F7Cu;
    // 0x1f1f7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f1f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1f80: 0xc085238  jal         func_2148E0
    ctx->pc = 0x1F1F80u;
    SET_GPR_U32(ctx, 31, 0x1F1F88u);
    ctx->pc = 0x1F1F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1F80u;
    // 0x1f1f84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2148E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2148E0u, 0x1F1F80u, 0x1F1F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1F88u;
label_1f1f88:
    // 0x1f1f88: 0x4400007  bltz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F1F88u;
    {
        const bool branch_taken_0x1f1f88 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1f1f88) {
            ctx->pc = 0x1F1FA8u;
            goto label_1f1fa8;
        }
    }
    ctx->pc = 0x1F1F90u;
    // 0x1f1f90: 0xc08528a  jal         func_214A28
    ctx->pc = 0x1F1F90u;
    SET_GPR_U32(ctx, 31, 0x1F1F98u);
    ctx->pc = 0x1F1F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1F90u;
    // 0x1f1f94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214A28u, 0x1F1F90u, 0x1F1F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1F98u;
label_1f1f98:
    // 0x1f1f98: 0xc07ce42  jal         func_1F3908
    ctx->pc = 0x1F1F98u;
    SET_GPR_U32(ctx, 31, 0x1F1FA0u);
    ctx->pc = 0x1F1F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1F98u;
    // 0x1f1f9c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3908u, 0x1F1F98u, 0x1F1FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1FA0u;
label_1f1fa0:
    // 0x1f1fa0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F1FA0u;
    {
        const bool branch_taken_0x1f1fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1FA0u;
        // 0x1f1fa4: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1fa0) {
            ctx->pc = 0x1F1FB4u;
            goto label_1f1fb4;
        }
    }
    ctx->pc = 0x1F1FA8u;
label_1f1fa8:
    // 0x1f1fa8: 0xc07ce42  jal         func_1F3908
    ctx->pc = 0x1F1FA8u;
    SET_GPR_U32(ctx, 31, 0x1F1FB0u);
    ctx->pc = 0x1F1FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1FA8u;
    // 0x1f1fac: 0x2404002c  addiu       $a0, $zero, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3908u, 0x1F1FA8u, 0x1F1FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1FB0u;
label_1f1fb0:
    // 0x1f1fb0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1f1fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_1f1fb4:
    // 0x1f1fb4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1f1fb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1fb8: 0xc091590  jal         func_245640
    ctx->pc = 0x1F1FB8u;
    SET_GPR_U32(ctx, 31, 0x1F1FC0u);
    ctx->pc = 0x1F1FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1FB8u;
    // 0x1f1fbc: 0x24508858  addiu       $s0, $v0, -0x77A8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245640u, 0x1F1FB8u, 0x1F1FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1FC0u;
label_1f1fc0:
    // 0x1f1fc0: 0xc09fc06  jal         func_27F018
    ctx->pc = 0x1F1FC0u;
    SET_GPR_U32(ctx, 31, 0x1F1FC8u);
    ctx->pc = 0x1F1FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1FC0u;
    // 0x1f1fc4: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F018u, 0x1F1FC0u, 0x1F1FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1FC8u;
label_1f1fc8:
    // 0x1f1fc8: 0xc08ef18  jal         func_23BC60
    ctx->pc = 0x1F1FC8u;
    SET_GPR_U32(ctx, 31, 0x1F1FD0u);
    ctx->pc = 0x1F1FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1FC8u;
    // 0x1f1fcc: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23BC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BC60u, 0x1F1FC8u, 0x1F1FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1FD0u;
label_1f1fd0:
    // 0x1f1fd0: 0xc07daf4  jal         func_1F6BD0
    ctx->pc = 0x1F1FD0u;
    SET_GPR_U32(ctx, 31, 0x1F1FD8u);
    ctx->pc = 0x1F6BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6BD0u, 0x1F1FD0u, 0x1F1FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1FD8u;
label_1f1fd8:
    // 0x1f1fd8: 0xc0845c2  jal         func_211708
    ctx->pc = 0x1F1FD8u;
    SET_GPR_U32(ctx, 31, 0x1F1FE0u);
    ctx->pc = 0x211708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211708u, 0x1F1FD8u, 0x1F1FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1FE0u;
label_1f1fe0:
    // 0x1f1fe0: 0xc07e710  jal         func_1F9C40
    ctx->pc = 0x1F1FE0u;
    SET_GPR_U32(ctx, 31, 0x1F1FE8u);
    ctx->pc = 0x1F1FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1FE0u;
    // 0x1f1fe4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9C40u, 0x1F1FE0u, 0x1F1FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1FE8u;
label_1f1fe8:
    // 0x1f1fe8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f1fe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1fec: 0x0  nop
    ctx->pc = 0x1f1fecu;
    // NOP
label_1f1ff0:
    // 0x1f1ff0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f1ff0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f1ff4: 0xc08b8b4  jal         func_22E2D0
    ctx->pc = 0x1F1FF4u;
    SET_GPR_U32(ctx, 31, 0x1F1FFCu);
    ctx->pc = 0x1F1FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1FF4u;
    // 0x1f1ff8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E2D0u, 0x1F1FF4u, 0x1F1FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1FFCu;
label_1f1ffc:
    // 0x1f1ffc: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x1f1ffcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1f2000: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1F2000u;
    {
        const bool branch_taken_0x1f2000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f2000) {
            ctx->pc = 0x1F2004u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F2000u;
            // 0x1f2004: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1FF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f1ff0;
        }
    }
    ctx->pc = 0x1F2008u;
    // 0x1f2008: 0xc08b84c  jal         func_22E130
    ctx->pc = 0x1F2008u;
    SET_GPR_U32(ctx, 31, 0x1F2010u);
    ctx->pc = 0x1F200Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2008u;
    // 0x1f200c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E130u, 0x1F2008u, 0x1F2010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2010u;
label_1f2010:
    // 0x1f2010: 0x8e630048  lw          $v1, 0x48($s3)
    ctx->pc = 0x1f2010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x1f2014: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F2014u;
    {
        const bool branch_taken_0x1f2014 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F2018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2014u;
        // 0x1f2018: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2014) {
            ctx->pc = 0x1F2028u;
            goto label_1f2028;
        }
    }
    ctx->pc = 0x1F201Cu;
    // 0x1f201c: 0x926201bc  lbu         $v0, 0x1BC($s3)
    ctx->pc = 0x1f201cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 444)));
    // 0x1f2020: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1f2020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1f2024: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1f2024u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1f2028:
    // 0x1f2028: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x1F2028u;
    {
        const bool branch_taken_0x1f2028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2028) {
            ctx->pc = 0x1F202Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F2028u;
            // 0x1f202c: 0x8e830048  lw          $v1, 0x48($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F2068u;
            goto label_1f2068;
        }
    }
    ctx->pc = 0x1F2030u;
    // 0x1f2030: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F2030u;
    {
        const bool branch_taken_0x1f2030 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F2034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2030u;
        // 0x1f2034: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2030) {
            ctx->pc = 0x1F2050u;
            goto label_1f2050;
        }
    }
    ctx->pc = 0x1F2038u;
    // 0x1f2038: 0x926301bc  lbu         $v1, 0x1BC($s3)
    ctx->pc = 0x1f2038u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 444)));
    // 0x1f203c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f203cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f2040: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F2040u;
    {
        const bool branch_taken_0x1f2040 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f2040) {
            ctx->pc = 0x1F2050u;
            goto label_1f2050;
        }
    }
    ctx->pc = 0x1F2048u;
    // 0x1f2048: 0x926201bd  lbu         $v0, 0x1BD($s3)
    ctx->pc = 0x1f2048u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 445)));
    // 0x1f204c: 0x2202b  sltu        $a0, $zero, $v0
    ctx->pc = 0x1f204cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1f2050:
    // 0x1f2050: 0x54800005  bnel        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F2050u;
    {
        const bool branch_taken_0x1f2050 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f2050) {
            ctx->pc = 0x1F2054u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F2050u;
            // 0x1f2054: 0x8e830048  lw          $v1, 0x48($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F2068u;
            goto label_1f2068;
        }
    }
    ctx->pc = 0x1F2058u;
    // 0x1f2058: 0x86650042  lh          $a1, 0x42($s3)
    ctx->pc = 0x1f2058u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 66)));
    // 0x1f205c: 0xc0b719a  jal         func_2DC668
    ctx->pc = 0x1F205Cu;
    SET_GPR_U32(ctx, 31, 0x1F2064u);
    ctx->pc = 0x1F2060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F205Cu;
    // 0x1f2060: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC668u, 0x1F205Cu, 0x1F2064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2064u;
label_1f2064:
    // 0x1f2064: 0x8e830048  lw          $v1, 0x48($s4)
    ctx->pc = 0x1f2064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
label_1f2068:
    // 0x1f2068: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F2068u;
    {
        const bool branch_taken_0x1f2068 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F206Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2068u;
        // 0x1f206c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2068) {
            ctx->pc = 0x1F207Cu;
            goto label_1f207c;
        }
    }
    ctx->pc = 0x1F2070u;
    // 0x1f2070: 0x928201bc  lbu         $v0, 0x1BC($s4)
    ctx->pc = 0x1f2070u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 444)));
    // 0x1f2074: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1f2074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1f2078: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1f2078u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1f207c:
    // 0x1f207c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1F207Cu;
    {
        const bool branch_taken_0x1f207c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F207Cu;
        // 0x1f2080: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f207c) {
            ctx->pc = 0x1F20BCu;
            goto label_1f20bc;
        }
    }
    ctx->pc = 0x1F2084u;
    // 0x1f2084: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F2084u;
    {
        const bool branch_taken_0x1f2084 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F2088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2084u;
        // 0x1f2088: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2084) {
            ctx->pc = 0x1F20A4u;
            goto label_1f20a4;
        }
    }
    ctx->pc = 0x1F208Cu;
    // 0x1f208c: 0x928301bc  lbu         $v1, 0x1BC($s4)
    ctx->pc = 0x1f208cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 444)));
    // 0x1f2090: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f2090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f2094: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F2094u;
    {
        const bool branch_taken_0x1f2094 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f2094) {
            ctx->pc = 0x1F20A4u;
            goto label_1f20a4;
        }
    }
    ctx->pc = 0x1F209Cu;
    // 0x1f209c: 0x928201bd  lbu         $v0, 0x1BD($s4)
    ctx->pc = 0x1f209cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 445)));
    // 0x1f20a0: 0x2202b  sltu        $a0, $zero, $v0
    ctx->pc = 0x1f20a0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1f20a4:
    // 0x1f20a4: 0x54800005  bnel        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F20A4u;
    {
        const bool branch_taken_0x1f20a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f20a4) {
            ctx->pc = 0x1F20A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F20A4u;
            // 0x1f20a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F20BCu;
            goto label_1f20bc;
        }
    }
    ctx->pc = 0x1F20ACu;
    // 0x1f20ac: 0x86850042  lh          $a1, 0x42($s4)
    ctx->pc = 0x1f20acu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 66)));
    // 0x1f20b0: 0xc0b719a  jal         func_2DC668
    ctx->pc = 0x1F20B0u;
    SET_GPR_U32(ctx, 31, 0x1F20B8u);
    ctx->pc = 0x1F20B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F20B0u;
    // 0x1f20b4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC668u, 0x1F20B0u, 0x1F20B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F20B8u;
label_1f20b8:
    // 0x1f20b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f20b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f20bc:
    // 0x1f20bc: 0xc097798  jal         func_25DE60
    ctx->pc = 0x1F20BCu;
    SET_GPR_U32(ctx, 31, 0x1F20C4u);
    ctx->pc = 0x1F20C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F20BCu;
    // 0x1f20c0: 0x3c10003e  lui         $s0, 0x3E (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)62 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25DE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25DE60u, 0x1F20BCu, 0x1F20C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F20C4u;
label_1f20c4:
    // 0x1f20c4: 0xc097798  jal         func_25DE60
    ctx->pc = 0x1F20C4u;
    SET_GPR_U32(ctx, 31, 0x1F20CCu);
    ctx->pc = 0x1F20C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F20C4u;
    // 0x1f20c8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25DE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25DE60u, 0x1F20C4u, 0x1F20CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F20CCu;
label_1f20cc:
    // 0x1f20cc: 0xc097912  jal         func_25E448
    ctx->pc = 0x1F20CCu;
    SET_GPR_U32(ctx, 31, 0x1F20D4u);
    ctx->pc = 0x1F20D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F20CCu;
    // 0x1f20d0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E448u, 0x1F20CCu, 0x1F20D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F20D4u;
label_1f20d4:
    // 0x1f20d4: 0xc097912  jal         func_25E448
    ctx->pc = 0x1F20D4u;
    SET_GPR_U32(ctx, 31, 0x1F20DCu);
    ctx->pc = 0x1F20D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F20D4u;
    // 0x1f20d8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E448u, 0x1F20D4u, 0x1F20DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F20DCu;
label_1f20dc:
    // 0x1f20dc: 0x260437e0  addiu       $a0, $s0, 0x37E0
    ctx->pc = 0x1f20dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 14304));
    // 0x1f20e0: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x1F20E0u;
    SET_GPR_U32(ctx, 31, 0x1F20E8u);
    ctx->pc = 0x1F20E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F20E0u;
    // 0x1f20e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x1F20E0u, 0x1F20E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F20E8u;
label_1f20e8:
    // 0x1f20e8: 0x24450070  addiu       $a1, $v0, 0x70
    ctx->pc = 0x1f20e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x1f20ec: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1f20ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1f20f0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F20F0u;
    {
        const bool branch_taken_0x1f20f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f20f0) {
            ctx->pc = 0x1F20F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F20F0u;
            // 0x1f20f4: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F210Cu;
            goto label_1f210c;
        }
    }
    ctx->pc = 0x1F20F8u;
    // 0x1f20f8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1f20f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1f20fc: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1f20fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1f2100: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F2100u;
    {
        const bool branch_taken_0x1f2100 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f2100) {
            ctx->pc = 0x1F2114u;
            goto label_1f2114;
        }
    }
    ctx->pc = 0x1F2108u;
    // 0x1f2108: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x1f2108u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_1f210c:
    // 0x1f210c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f210cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2110: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1f2110u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_1f2114:
    // 0x1f2114: 0xc0b8a56  jal         func_2E2958
    ctx->pc = 0x1F2114u;
    SET_GPR_U32(ctx, 31, 0x1F211Cu);
    ctx->pc = 0x2E2958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2958u, 0x1F2114u, 0x1F211Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F211Cu;
label_1f211c:
    // 0x1f211c: 0x260437e0  addiu       $a0, $s0, 0x37E0
    ctx->pc = 0x1f211cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 14304));
    // 0x1f2120: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x1F2120u;
    SET_GPR_U32(ctx, 31, 0x1F2128u);
    ctx->pc = 0x1F2124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2120u;
    // 0x1f2124: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x1F2120u, 0x1F2128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2128u;
label_1f2128:
    // 0x1f2128: 0x24450078  addiu       $a1, $v0, 0x78
    ctx->pc = 0x1f2128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
    // 0x1f212c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1f212cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1f2130: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F2130u;
    {
        const bool branch_taken_0x1f2130 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2130) {
            ctx->pc = 0x1F2134u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F2130u;
            // 0x1f2134: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F214Cu;
            goto label_1f214c;
        }
    }
    ctx->pc = 0x1F2138u;
    // 0x1f2138: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1f2138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1f213c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1f213cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1f2140: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F2140u;
    {
        const bool branch_taken_0x1f2140 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f2140) {
            ctx->pc = 0x1F2154u;
            goto label_1f2154;
        }
    }
    ctx->pc = 0x1F2148u;
    // 0x1f2148: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x1f2148u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_1f214c:
    // 0x1f214c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f214cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2150: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1f2150u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_1f2154:
    // 0x1f2154: 0xc0b8a56  jal         func_2E2958
    ctx->pc = 0x1F2154u;
    SET_GPR_U32(ctx, 31, 0x1F215Cu);
    ctx->pc = 0x2E2958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2958u, 0x1F2154u, 0x1F215Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F215Cu;
label_1f215c:
    // 0x1f215c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f215cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f2160: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f2160u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f2164: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f2164u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f2168: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1f2168u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f216c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1f216cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f2170: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1f2170u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2174: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1f2174u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f2178: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1f2178u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f217c: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x1f217cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f2180: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1f2180u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f2184: 0x3e00008  jr          $ra
    ctx->pc = 0x1F2184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F2188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2184u;
        // 0x1f2188: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F2184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F218Cu;
    // 0x1f218c: 0x0  nop
    ctx->pc = 0x1f218cu;
    // NOP
    ctx->pc = 0x1f2190u;
}
