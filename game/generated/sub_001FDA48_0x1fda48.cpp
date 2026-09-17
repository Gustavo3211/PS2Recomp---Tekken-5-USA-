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

// Function: sub_001FDA48
// Address: 0x1fda48 - 0x1fe070
void sub_001FDA48_0x1fda48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FDA48_0x1fda48");
#endif

    switch (ctx->pc) {
        case 0x1fdaa4u: goto label_1fdaa4;
        case 0x1fdab4u: goto label_1fdab4;
        case 0x1fdac4u: goto label_1fdac4;
        case 0x1fdb20u: goto label_1fdb20;
        case 0x1fdb80u: goto label_1fdb80;
        case 0x1fdbb8u: goto label_1fdbb8;
        case 0x1fdbf0u: goto label_1fdbf0;
        case 0x1fdc40u: goto label_1fdc40;
        case 0x1fdcb8u: goto label_1fdcb8;
        case 0x1fdd40u: goto label_1fdd40;
        case 0x1fdd88u: goto label_1fdd88;
        case 0x1fddd8u: goto label_1fddd8;
        case 0x1fde28u: goto label_1fde28;
        case 0x1fdea8u: goto label_1fdea8;
        case 0x1fdf10u: goto label_1fdf10;
        case 0x1fdf1cu: goto label_1fdf1c;
        case 0x1fdfe0u: goto label_1fdfe0;
        case 0x1fe038u: goto label_1fe038;
        default: break;
    }

    ctx->pc = 0x1fda48u;

    // 0x1fda48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fda48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1fda4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fda4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fda50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fda50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fda54: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fda54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fda58: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1fda58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1fda5c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1fda5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1fda60: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1fda60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1fda64: 0x8e0200c4  lw          $v0, 0xC4($s0)
    ctx->pc = 0x1fda64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x1fda68: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x1fda68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x1fda6c: 0x14600154  bnez        $v1, . + 4 + (0x154 << 2)
    ctx->pc = 0x1FDA6Cu;
    {
        const bool branch_taken_0x1fda6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FDA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDA6Cu;
        // 0x1fda70: 0x84520048  lh          $s2, 0x48($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fda6c) {
            ctx->pc = 0x1FDFC0u;
            goto label_1fdfc0;
        }
    }
    ctx->pc = 0x1FDA74u;
    // 0x1fda74: 0x86040040  lh          $a0, 0x40($s0)
    ctx->pc = 0x1fda74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1fda78: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1fda78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1fda7c: 0x8c4583c0  lw          $a1, -0x7C40($v0)
    ctx->pc = 0x1fda7cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x1fda80: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x1fda80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x1fda84: 0x2473b478  addiu       $s3, $v1, -0x4B88
    ctx->pc = 0x1fda84u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947960));
    // 0x1fda88: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1fda88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1fda8c: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x1fda8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x1fda90: 0x38a50007  xori        $a1, $a1, 0x7
    ctx->pc = 0x1fda90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)7);
    // 0x1fda94: 0x14a0000d  bnez        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x1FDA94u;
    {
        const bool branch_taken_0x1fda94 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FDA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDA94u;
        // 0x1fda98: 0x8c910000  lw          $s1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fda94) {
            ctx->pc = 0x1FDACCu;
            goto label_1fdacc;
        }
    }
    ctx->pc = 0x1FDA9Cu;
    // 0x1fda9c: 0xc07e580  jal         func_1F9600
    ctx->pc = 0x1FDA9Cu;
    SET_GPR_U32(ctx, 31, 0x1FDAA4u);
    ctx->pc = 0x1F9600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9600u, 0x1FDA9Cu, 0x1FDAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDAA4u;
label_1fdaa4:
    // 0x1fdaa4: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1FDAA4u;
    {
        const bool branch_taken_0x1fdaa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fdaa4) {
            ctx->pc = 0x1FDAA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FDAA4u;
            // 0x1fdaa8: 0x3242000f  andi        $v0, $s2, 0xF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)15);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDAD0u;
            goto label_1fdad0;
        }
    }
    ctx->pc = 0x1FDAACu;
    // 0x1fdaac: 0xc07e588  jal         func_1F9620
    ctx->pc = 0x1FDAACu;
    SET_GPR_U32(ctx, 31, 0x1FDAB4u);
    ctx->pc = 0x1F9620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9620u, 0x1FDAACu, 0x1FDAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDAB4u;
label_1fdab4:
    // 0x1fdab4: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FDAB4u;
    {
        const bool branch_taken_0x1fdab4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fdab4) {
            ctx->pc = 0x1FDAB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FDAB4u;
            // 0x1fdab8: 0x3242000f  andi        $v0, $s2, 0xF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)15);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDAD0u;
            goto label_1fdad0;
        }
    }
    ctx->pc = 0x1FDABCu;
    // 0x1fdabc: 0xc07e628  jal         func_1F98A0
    ctx->pc = 0x1FDABCu;
    SET_GPR_U32(ctx, 31, 0x1FDAC4u);
    ctx->pc = 0x1F98A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F98A0u, 0x1FDABCu, 0x1FDAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDAC4u;
label_1fdac4:
    // 0x1fdac4: 0x54500001  bnel        $v0, $s0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FDAC4u;
    {
        const bool branch_taken_0x1fdac4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x1fdac4) {
            ctx->pc = 0x1FDAC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FDAC4u;
            // 0x1fdac8: 0x8e710024  lw          $s1, 0x24($s3) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDACCu;
            goto label_1fdacc;
        }
    }
    ctx->pc = 0x1FDACCu;
label_1fdacc:
    // 0x1fdacc: 0x3242000f  andi        $v0, $s2, 0xF
    ctx->pc = 0x1fdaccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)15);
label_1fdad0:
    // 0x1fdad0: 0x104000e1  beqz        $v0, . + 4 + (0xE1 << 2)
    ctx->pc = 0x1FDAD0u;
    {
        const bool branch_taken_0x1fdad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDAD0u;
        // 0x1fdad4: 0x2443ffff  addiu       $v1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdad0) {
            ctx->pc = 0x1FDE58u;
            goto label_1fde58;
        }
    }
    ctx->pc = 0x1FDAD8u;
    // 0x1fdad8: 0x2c62000b  sltiu       $v0, $v1, 0xB
    ctx->pc = 0x1fdad8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x1fdadc: 0x104000d1  beqz        $v0, . + 4 + (0xD1 << 2)
    ctx->pc = 0x1FDADCu;
    {
        const bool branch_taken_0x1fdadc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDADCu;
        // 0x1fdae0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdadc) {
            ctx->pc = 0x1FDE24u;
            goto label_1fde24;
        }
    }
    ctx->pc = 0x1FDAE4u;
    // 0x1fdae4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1fdae4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1fdae8: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x1fdae8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x1fdaec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1fdaecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fdaf0: 0x8c633750  lw          $v1, 0x3750($v1)
    ctx->pc = 0x1fdaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 14160)));
    // 0x1fdaf4: 0x600008  jr          $v1
    ctx->pc = 0x1FDAF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FDB00u: goto label_1fdb00;
            case 0x1FDB70u: goto label_1fdb70;
            case 0x1FDBA8u: goto label_1fdba8;
            case 0x1FDBE8u: goto label_1fdbe8;
            case 0x1FDC18u: goto label_1fdc18;
            case 0x1FDC90u: goto label_1fdc90;
            case 0x1FDD30u: goto label_1fdd30;
            case 0x1FDD70u: goto label_1fdd70;
            case 0x1FDDC0u: goto label_1fddc0;
            case 0x1FDE20u: goto label_1fde20;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FDAF4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1FDAFCu;
    // 0x1fdafc: 0x0  nop
    ctx->pc = 0x1fdafcu;
    // NOP
label_1fdb00:
    // 0x1fdb00: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1fdb00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1fdb04: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1fdb04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fdb08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fdb08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdb0c: 0x2606049c  addiu       $a2, $s0, 0x49C
    ctx->pc = 0x1fdb0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1180));
    // 0x1fdb10: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x1fdb10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1fdb14: 0x260404cc  addiu       $a0, $s0, 0x4CC
    ctx->pc = 0x1fdb14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1228));
    // 0x1fdb18: 0x2603000c  addiu       $v1, $s0, 0xC
    ctx->pc = 0x1fdb18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1fdb1c: 0x0  nop
    ctx->pc = 0x1fdb1cu;
    // NOP
label_1fdb20:
    // 0x1fdb20: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FDB20u;
    {
        const bool branch_taken_0x1fdb20 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fdb20) {
            ctx->pc = 0x1FDB38u;
            goto label_1fdb38;
        }
    }
    ctx->pc = 0x1FDB28u;
    // 0x1fdb28: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1fdb28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fdb2c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1FDB2Cu;
    {
        const bool branch_taken_0x1fdb2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDB2Cu;
        // 0x1fdb30: 0xe4c00000  swc1        $f0, 0x0($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdb2c) {
            ctx->pc = 0x1FDB58u;
            goto label_1fdb58;
        }
    }
    ctx->pc = 0x1FDB34u;
    // 0x1fdb34: 0x0  nop
    ctx->pc = 0x1fdb34u;
    // NOP
label_1fdb38:
    // 0x1fdb38: 0x14a70005  bne         $a1, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FDB38u;
    {
        const bool branch_taken_0x1fdb38 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 7));
        ctx->pc = 0x1FDB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDB38u;
        // 0x1fdb3c: 0x51100  sll         $v0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdb38) {
            ctx->pc = 0x1FDB50u;
            goto label_1fdb50;
        }
    }
    ctx->pc = 0x1FDB40u;
    // 0x1fdb40: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x1fdb40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fdb44: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FDB44u;
    {
        const bool branch_taken_0x1fdb44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDB44u;
        // 0x1fdb48: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdb44) {
            ctx->pc = 0x1FDB58u;
            goto label_1fdb58;
        }
    }
    ctx->pc = 0x1FDB4Cu;
    // 0x1fdb4c: 0x0  nop
    ctx->pc = 0x1fdb4cu;
    // NOP
label_1fdb50:
    // 0x1fdb50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fdb50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fdb54: 0xe4410490  swc1        $f1, 0x490($v0)
    ctx->pc = 0x1fdb54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 1168), bits); }
label_1fdb58:
    // 0x1fdb58: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1fdb58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1fdb5c: 0x28a20008  slti        $v0, $a1, 0x8
    ctx->pc = 0x1fdb5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1fdb60: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1FDB60u;
    {
        const bool branch_taken_0x1fdb60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fdb60) {
            ctx->pc = 0x1FDB20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fdb20;
        }
    }
    ctx->pc = 0x1FDB68u;
    // 0x1fdb68: 0x100000e3  b           . + 4 + (0xE3 << 2)
    ctx->pc = 0x1FDB68u;
    {
        const bool branch_taken_0x1fdb68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fdb68) {
            ctx->pc = 0x1FDEF8u;
            goto label_1fdef8;
        }
    }
    ctx->pc = 0x1FDB70u;
label_1fdb70:
    // 0x1fdb70: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1fdb70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1fdb74: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1fdb74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fdb78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fdb78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdb7c: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x1fdb7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_1fdb80:
    // 0x1fdb80: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x1fdb80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1fdb84: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1fdb84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1fdb88: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1fdb88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1fdb8c: 0x28a30008  slti        $v1, $a1, 0x8
    ctx->pc = 0x1fdb8cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1fdb90: 0x0  nop
    ctx->pc = 0x1fdb90u;
    // NOP
    // 0x1fdb94: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1FDB94u;
    {
        const bool branch_taken_0x1fdb94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FDB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDB94u;
        // 0x1fdb98: 0xe4400490  swc1        $f0, 0x490($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 1168), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdb94) {
            ctx->pc = 0x1FDB80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fdb80;
        }
    }
    ctx->pc = 0x1FDB9Cu;
    // 0x1fdb9c: 0x100000d6  b           . + 4 + (0xD6 << 2)
    ctx->pc = 0x1FDB9Cu;
    {
        const bool branch_taken_0x1fdb9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fdb9c) {
            ctx->pc = 0x1FDEF8u;
            goto label_1fdef8;
        }
    }
    ctx->pc = 0x1FDBA4u;
    // 0x1fdba4: 0x0  nop
    ctx->pc = 0x1fdba4u;
    // NOP
label_1fdba8:
    // 0x1fdba8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1fdba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1fdbac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1fdbacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fdbb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fdbb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdbb4: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x1fdbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_1fdbb8:
    // 0x1fdbb8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1fdbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1fdbbc: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x1fdbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1fdbc0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1fdbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1fdbc4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1fdbc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1fdbc8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1fdbc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fdbcc: 0x28a20008  slti        $v0, $a1, 0x8
    ctx->pc = 0x1fdbccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1fdbd0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fdbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fdbd4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1fdbd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1fdbd8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1FDBD8u;
    {
        const bool branch_taken_0x1fdbd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FDBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDBD8u;
        // 0x1fdbdc: 0xe4600490  swc1        $f0, 0x490($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1168), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdbd8) {
            ctx->pc = 0x1FDBB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fdbb8;
        }
    }
    ctx->pc = 0x1FDBE0u;
    // 0x1fdbe0: 0x100000c5  b           . + 4 + (0xC5 << 2)
    ctx->pc = 0x1FDBE0u;
    {
        const bool branch_taken_0x1fdbe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fdbe0) {
            ctx->pc = 0x1FDEF8u;
            goto label_1fdef8;
        }
    }
    ctx->pc = 0x1FDBE8u;
label_1fdbe8:
    // 0x1fdbe8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fdbe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdbec: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x1fdbecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_1fdbf0:
    // 0x1fdbf0: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x1fdbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1fdbf4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1fdbf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1fdbf8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1fdbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1fdbfc: 0x28a30008  slti        $v1, $a1, 0x8
    ctx->pc = 0x1fdbfcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1fdc00: 0x0  nop
    ctx->pc = 0x1fdc00u;
    // NOP
    // 0x1fdc04: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1FDC04u;
    {
        const bool branch_taken_0x1fdc04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FDC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDC04u;
        // 0x1fdc08: 0xac400490  sw          $zero, 0x490($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdc04) {
            ctx->pc = 0x1FDBF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fdbf0;
        }
    }
    ctx->pc = 0x1FDC0Cu;
    // 0x1fdc0c: 0x100000ba  b           . + 4 + (0xBA << 2)
    ctx->pc = 0x1FDC0Cu;
    {
        const bool branch_taken_0x1fdc0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fdc0c) {
            ctx->pc = 0x1FDEF8u;
            goto label_1fdef8;
        }
    }
    ctx->pc = 0x1FDC14u;
    // 0x1fdc14: 0x0  nop
    ctx->pc = 0x1fdc14u;
    // NOP
label_1fdc18:
    // 0x1fdc18: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1fdc18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1fdc1c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1fdc1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fdc20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fdc20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdc24: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1fdc24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1fdc28: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1fdc28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1fdc2c: 0x2606049c  addiu       $a2, $s0, 0x49C
    ctx->pc = 0x1fdc2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1180));
    // 0x1fdc30: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x1fdc30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1fdc34: 0x260404cc  addiu       $a0, $s0, 0x4CC
    ctx->pc = 0x1fdc34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1228));
    // 0x1fdc38: 0x2603000c  addiu       $v1, $s0, 0xC
    ctx->pc = 0x1fdc38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1fdc3c: 0x0  nop
    ctx->pc = 0x1fdc3cu;
    // NOP
label_1fdc40:
    // 0x1fdc40: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FDC40u;
    {
        const bool branch_taken_0x1fdc40 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fdc40) {
            ctx->pc = 0x1FDC58u;
            goto label_1fdc58;
        }
    }
    ctx->pc = 0x1FDC48u;
    // 0x1fdc48: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1fdc48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fdc4c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1fdc4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1fdc50: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1FDC50u;
    {
        const bool branch_taken_0x1fdc50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDC50u;
        // 0x1fdc54: 0xe4c00000  swc1        $f0, 0x0($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdc50) {
            ctx->pc = 0x1FDC78u;
            goto label_1fdc78;
        }
    }
    ctx->pc = 0x1FDC58u;
label_1fdc58:
    // 0x1fdc58: 0x14a70005  bne         $a1, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FDC58u;
    {
        const bool branch_taken_0x1fdc58 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 7));
        ctx->pc = 0x1FDC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDC58u;
        // 0x1fdc5c: 0x51100  sll         $v0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdc58) {
            ctx->pc = 0x1FDC70u;
            goto label_1fdc70;
        }
    }
    ctx->pc = 0x1FDC60u;
    // 0x1fdc60: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x1fdc60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fdc64: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1fdc64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1fdc68: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FDC68u;
    {
        const bool branch_taken_0x1fdc68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDC68u;
        // 0x1fdc6c: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdc68) {
            ctx->pc = 0x1FDC78u;
            goto label_1fdc78;
        }
    }
    ctx->pc = 0x1FDC70u;
label_1fdc70:
    // 0x1fdc70: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fdc70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fdc74: 0xe4420490  swc1        $f2, 0x490($v0)
    ctx->pc = 0x1fdc74u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 1168), bits); }
label_1fdc78:
    // 0x1fdc78: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1fdc78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1fdc7c: 0x28a20008  slti        $v0, $a1, 0x8
    ctx->pc = 0x1fdc7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1fdc80: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1FDC80u;
    {
        const bool branch_taken_0x1fdc80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fdc80) {
            ctx->pc = 0x1FDC40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fdc40;
        }
    }
    ctx->pc = 0x1FDC88u;
    // 0x1fdc88: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x1FDC88u;
    {
        const bool branch_taken_0x1fdc88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fdc88) {
            ctx->pc = 0x1FDEF8u;
            goto label_1fdef8;
        }
    }
    ctx->pc = 0x1FDC90u;
label_1fdc90:
    // 0x1fdc90: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x1fdc90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x1fdc94: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1fdc94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1fdc98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fdc98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdc9c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1fdc9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1fdca0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1fdca0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fdca4: 0x2606049c  addiu       $a2, $s0, 0x49C
    ctx->pc = 0x1fdca4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1180));
    // 0x1fdca8: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1fdca8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1fdcac: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1fdcacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1fdcb0: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x1fdcb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1fdcb4: 0x0  nop
    ctx->pc = 0x1fdcb4u;
    // NOP
label_1fdcb8:
    // 0x1fdcb8: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FDCB8u;
    {
        const bool branch_taken_0x1fdcb8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FDCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDCB8u;
        // 0x1fdcbc: 0x24a2fffa  addiu       $v0, $a1, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967290));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdcb8) {
            ctx->pc = 0x1FDCD0u;
            goto label_1fdcd0;
        }
    }
    ctx->pc = 0x1FDCC0u;
    // 0x1fdcc0: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1fdcc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fdcc4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1fdcc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1fdcc8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1FDCC8u;
    {
        const bool branch_taken_0x1fdcc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDCC8u;
        // 0x1fdccc: 0xe4c00000  swc1        $f0, 0x0($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdcc8) {
            ctx->pc = 0x1FDD14u;
            goto label_1fdd14;
        }
    }
    ctx->pc = 0x1FDCD0u;
label_1fdcd0:
    // 0x1fdcd0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1fdcd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1fdcd4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FDCD4u;
    {
        const bool branch_taken_0x1fdcd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FDCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDCD4u;
        // 0x1fdcd8: 0x51100  sll         $v0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdcd4) {
            ctx->pc = 0x1FDCF0u;
            goto label_1fdcf0;
        }
    }
    ctx->pc = 0x1FDCDCu;
    // 0x1fdcdc: 0x10a80005  beq         $a1, $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FDCDCu;
    {
        const bool branch_taken_0x1fdcdc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 8));
        ctx->pc = 0x1FDCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDCDCu;
        // 0x1fdce0: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdcdc) {
            ctx->pc = 0x1FDCF4u;
            goto label_1fdcf4;
        }
    }
    ctx->pc = 0x1FDCE4u;
    // 0x1fdce4: 0x14a70006  bne         $a1, $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FDCE4u;
    {
        const bool branch_taken_0x1fdce4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 7));
        ctx->pc = 0x1FDCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDCE4u;
        // 0x1fdce8: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdce4) {
            ctx->pc = 0x1FDD00u;
            goto label_1fdd00;
        }
    }
    ctx->pc = 0x1FDCECu;
    // 0x1fdcec: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x1fdcecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_1fdcf0:
    // 0x1fdcf0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1fdcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1fdcf4:
    // 0x1fdcf4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1FDCF4u;
    {
        const bool branch_taken_0x1fdcf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDCF4u;
        // 0x1fdcf8: 0xe4410490  swc1        $f1, 0x490($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 1168), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdcf4) {
            ctx->pc = 0x1FDD14u;
            goto label_1fdd14;
        }
    }
    ctx->pc = 0x1FDCFCu;
    // 0x1fdcfc: 0x0  nop
    ctx->pc = 0x1fdcfcu;
    // NOP
label_1fdd00:
    // 0x1fdd00: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x1fdd00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1fdd04: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1fdd04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1fdd08: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fdd08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fdd0c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1fdd0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fdd10: 0xe4600490  swc1        $f0, 0x490($v1)
    ctx->pc = 0x1fdd10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1168), bits); }
label_1fdd14:
    // 0x1fdd14: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1fdd14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1fdd18: 0x28a20008  slti        $v0, $a1, 0x8
    ctx->pc = 0x1fdd18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1fdd1c: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x1FDD1Cu;
    {
        const bool branch_taken_0x1fdd1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fdd1c) {
            ctx->pc = 0x1FDCB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fdcb8;
        }
    }
    ctx->pc = 0x1FDD24u;
    // 0x1fdd24: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x1FDD24u;
    {
        const bool branch_taken_0x1fdd24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fdd24) {
            ctx->pc = 0x1FDEF8u;
            goto label_1fdef8;
        }
    }
    ctx->pc = 0x1FDD2Cu;
    // 0x1fdd2c: 0x0  nop
    ctx->pc = 0x1fdd2cu;
    // NOP
label_1fdd30:
    // 0x1fdd30: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x1fdd30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x1fdd34: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1fdd34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fdd38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fdd38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdd3c: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x1fdd3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_1fdd40:
    // 0x1fdd40: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1fdd40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1fdd44: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x1fdd44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1fdd48: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1fdd48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1fdd4c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1fdd4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1fdd50: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1fdd50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fdd54: 0x28a20008  slti        $v0, $a1, 0x8
    ctx->pc = 0x1fdd54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1fdd58: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fdd58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fdd5c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1fdd5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1fdd60: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1FDD60u;
    {
        const bool branch_taken_0x1fdd60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FDD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDD60u;
        // 0x1fdd64: 0xe4600490  swc1        $f0, 0x490($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1168), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdd60) {
            ctx->pc = 0x1FDD40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fdd40;
        }
    }
    ctx->pc = 0x1FDD68u;
    // 0x1fdd68: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x1FDD68u;
    {
        const bool branch_taken_0x1fdd68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fdd68) {
            ctx->pc = 0x1FDEF8u;
            goto label_1fdef8;
        }
    }
    ctx->pc = 0x1FDD70u;
label_1fdd70:
    // 0x1fdd70: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x1fdd70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x1fdd74: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1fdd74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fdd78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fdd78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdd7c: 0x2604049c  addiu       $a0, $s0, 0x49C
    ctx->pc = 0x1fdd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1180));
    // 0x1fdd80: 0x2603000c  addiu       $v1, $s0, 0xC
    ctx->pc = 0x1fdd80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1fdd84: 0x0  nop
    ctx->pc = 0x1fdd84u;
    // NOP
label_1fdd88:
    // 0x1fdd88: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FDD88u;
    {
        const bool branch_taken_0x1fdd88 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FDD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDD88u;
        // 0x1fdd8c: 0x51100  sll         $v0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdd88) {
            ctx->pc = 0x1FDDA0u;
            goto label_1fdda0;
        }
    }
    ctx->pc = 0x1FDD90u;
    // 0x1fdd90: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1fdd90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fdd94: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1fdd94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1fdd98: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FDD98u;
    {
        const bool branch_taken_0x1fdd98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDD98u;
        // 0x1fdd9c: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdd98) {
            ctx->pc = 0x1FDDA8u;
            goto label_1fdda8;
        }
    }
    ctx->pc = 0x1FDDA0u;
label_1fdda0:
    // 0x1fdda0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fdda0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fdda4: 0xac400490  sw          $zero, 0x490($v0)
    ctx->pc = 0x1fdda4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1168), GPR_U32(ctx, 0));
label_1fdda8:
    // 0x1fdda8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1fdda8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1fddac: 0x28a20008  slti        $v0, $a1, 0x8
    ctx->pc = 0x1fddacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1fddb0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1FDDB0u;
    {
        const bool branch_taken_0x1fddb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fddb0) {
            ctx->pc = 0x1FDD88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fdd88;
        }
    }
    ctx->pc = 0x1FDDB8u;
    // 0x1fddb8: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x1FDDB8u;
    {
        const bool branch_taken_0x1fddb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fddb8) {
            ctx->pc = 0x1FDEF8u;
            goto label_1fdef8;
        }
    }
    ctx->pc = 0x1FDDC0u;
label_1fddc0:
    // 0x1fddc0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1fddc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1fddc4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1fddc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fddc8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fddc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fddcc: 0x2606049c  addiu       $a2, $s0, 0x49C
    ctx->pc = 0x1fddccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1180));
    // 0x1fddd0: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x1fddd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1fddd4: 0x0  nop
    ctx->pc = 0x1fddd4u;
    // NOP
label_1fddd8:
    // 0x1fddd8: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FDDD8u;
    {
        const bool branch_taken_0x1fddd8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FDDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDDD8u;
        // 0x1fdddc: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fddd8) {
            ctx->pc = 0x1FDDF0u;
            goto label_1fddf0;
        }
    }
    ctx->pc = 0x1FDDE0u;
    // 0x1fdde0: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1fdde0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fdde4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1fdde4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1fdde8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1FDDE8u;
    {
        const bool branch_taken_0x1fdde8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDDE8u;
        // 0x1fddec: 0xe4c00000  swc1        $f0, 0x0($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdde8) {
            ctx->pc = 0x1FDE04u;
            goto label_1fde04;
        }
    }
    ctx->pc = 0x1FDDF0u;
label_1fddf0:
    // 0x1fddf0: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x1fddf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1fddf4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1fddf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1fddf8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fddf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fddfc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1fddfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fde00: 0xe4600490  swc1        $f0, 0x490($v1)
    ctx->pc = 0x1fde00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1168), bits); }
label_1fde04:
    // 0x1fde04: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1fde04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1fde08: 0x28a20008  slti        $v0, $a1, 0x8
    ctx->pc = 0x1fde08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1fde0c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1FDE0Cu;
    {
        const bool branch_taken_0x1fde0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fde0c) {
            ctx->pc = 0x1FDDD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fddd8;
        }
    }
    ctx->pc = 0x1FDE14u;
    // 0x1fde14: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x1FDE14u;
    {
        const bool branch_taken_0x1fde14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fde14) {
            ctx->pc = 0x1FDEF8u;
            goto label_1fdef8;
        }
    }
    ctx->pc = 0x1FDE1Cu;
    // 0x1fde1c: 0x0  nop
    ctx->pc = 0x1fde1cu;
    // NOP
label_1fde20:
    // 0x1fde20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fde20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fde24:
    // 0x1fde24: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x1fde24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_1fde28:
    // 0x1fde28: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1fde28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1fde2c: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x1fde2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1fde30: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1fde30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1fde34: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1fde34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1fde38: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1fde38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fde3c: 0x28a20008  slti        $v0, $a1, 0x8
    ctx->pc = 0x1fde3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1fde40: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fde40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fde44: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1FDE44u;
    {
        const bool branch_taken_0x1fde44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FDE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDE44u;
        // 0x1fde48: 0xe4600490  swc1        $f0, 0x490($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1168), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fde44) {
            ctx->pc = 0x1FDE28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fde28;
        }
    }
    ctx->pc = 0x1FDE4Cu;
    // 0x1fde4c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1FDE4Cu;
    {
        const bool branch_taken_0x1fde4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fde4c) {
            ctx->pc = 0x1FDEF8u;
            goto label_1fdef8;
        }
    }
    ctx->pc = 0x1FDE54u;
    // 0x1fde54: 0x0  nop
    ctx->pc = 0x1fde54u;
    // NOP
label_1fde58:
    // 0x1fde58: 0x121302  srl         $v0, $s2, 12
    ctx->pc = 0x1fde58u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 12));
    // 0x1fde5c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1fde5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1fde60: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1FDE60u;
    {
        const bool branch_taken_0x1fde60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDE60u;
        // 0x1fde64: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fde60) {
            ctx->pc = 0x1FDE9Cu;
            goto label_1fde9c;
        }
    }
    ctx->pc = 0x1FDE68u;
    // 0x1fde68: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x1fde68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x1fde6c: 0x94620044  lhu         $v0, 0x44($v1)
    ctx->pc = 0x1fde6cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x1fde70: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1FDE70u;
    {
        const bool branch_taken_0x1fde70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDE70u;
        // 0x1fde74: 0x2442fff8  addiu       $v0, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fde70) {
            ctx->pc = 0x1FDE9Cu;
            goto label_1fde9c;
        }
    }
    ctx->pc = 0x1FDE78u;
    // 0x1fde78: 0x86040096  lh          $a0, 0x96($s0)
    ctx->pc = 0x1fde78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 150)));
    // 0x1fde7c: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x1fde7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1fde80: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FDE80u;
    {
        const bool branch_taken_0x1fde80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDE80u;
        // 0x1fde84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fde80) {
            ctx->pc = 0x1FDE9Cu;
            goto label_1fde9c;
        }
    }
    ctx->pc = 0x1FDE88u;
    // 0x1fde88: 0x94620046  lhu         $v0, 0x46($v1)
    ctx->pc = 0x1fde88u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 70)));
    // 0x1fde8c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1fde8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1fde90: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FDE90u;
    {
        const bool branch_taken_0x1fde90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FDE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDE90u;
        // 0x1fde94: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fde90) {
            ctx->pc = 0x1FDE9Cu;
            goto label_1fde9c;
        }
    }
    ctx->pc = 0x1FDE98u;
    // 0x1fde98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fde98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fde9c:
    // 0x1fde9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fde9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdea0: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x1fdea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1fdea4: 0x0  nop
    ctx->pc = 0x1fdea4u;
    // NOP
label_1fdea8:
    // 0x1fdea8: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FDEA8u;
    {
        const bool branch_taken_0x1fdea8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDEA8u;
        // 0x1fdeac: 0x24a20004  addiu       $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdea8) {
            ctx->pc = 0x1FDED0u;
            goto label_1fded0;
        }
    }
    ctx->pc = 0x1FDEB0u;
    // 0x1fdeb0: 0x521007  srav        $v0, $s2, $v0
    ctx->pc = 0x1fdeb0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 18), GPR_U32(ctx, 2) & 0x1F));
    // 0x1fdeb4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1fdeb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1fdeb8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FDEB8u;
    {
        const bool branch_taken_0x1fdeb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDEB8u;
        // 0x1fdebc: 0x51100  sll         $v0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdeb8) {
            ctx->pc = 0x1FDED0u;
            goto label_1fded0;
        }
    }
    ctx->pc = 0x1FDEC0u;
    // 0x1fdec0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1fdec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1fdec4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FDEC4u;
    {
        const bool branch_taken_0x1fdec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDEC4u;
        // 0x1fdec8: 0xac400490  sw          $zero, 0x490($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdec4) {
            ctx->pc = 0x1FDEE8u;
            goto label_1fdee8;
        }
    }
    ctx->pc = 0x1FDECCu;
    // 0x1fdecc: 0x0  nop
    ctx->pc = 0x1fdeccu;
    // NOP
label_1fded0:
    // 0x1fded0: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1fded0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1fded4: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x1fded4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1fded8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1fded8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1fdedc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fdedcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fdee0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1fdee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fdee4: 0xe4600490  swc1        $f0, 0x490($v1)
    ctx->pc = 0x1fdee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1168), bits); }
label_1fdee8:
    // 0x1fdee8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1fdee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1fdeec: 0x28a20008  slti        $v0, $a1, 0x8
    ctx->pc = 0x1fdeecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1fdef0: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1FDEF0u;
    {
        const bool branch_taken_0x1fdef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fdef0) {
            ctx->pc = 0x1FDEA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fdea8;
        }
    }
    ctx->pc = 0x1FDEF8u;
label_1fdef8:
    // 0x1fdef8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1fdef8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fdefc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fdefcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdf00: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x1fdf00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1fdf04: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x1fdf04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1fdf08: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x1fdf08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1fdf0c: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x1fdf0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_1fdf10:
    // 0x1fdf10: 0x94620044  lhu         $v0, 0x44($v1)
    ctx->pc = 0x1fdf10u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x1fdf14: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FDF14u;
    {
        const bool branch_taken_0x1fdf14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDF14u;
        // 0x1fdf18: 0x24a2ffff  addiu       $v0, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdf14) {
            ctx->pc = 0x1FDF30u;
            goto label_1fdf30;
        }
    }
    ctx->pc = 0x1FDF1Cu;
label_1fdf1c:
    // 0x1fdf1c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1fdf1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1fdf20: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x1FDF20u;
    {
        const bool branch_taken_0x1fdf20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fdf20) {
            ctx->pc = 0x1FDF24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FDF20u;
            // 0x1fdf24: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDFA8u;
            goto label_1fdfa8;
        }
    }
    ctx->pc = 0x1FDF28u;
    // 0x1fdf28: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1FDF28u;
    {
        const bool branch_taken_0x1fdf28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDF28u;
        // 0x1fdf2c: 0x51100  sll         $v0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdf28) {
            ctx->pc = 0x1FDF9Cu;
            goto label_1fdf9c;
        }
    }
    ctx->pc = 0x1FDF30u;
label_1fdf30:
    // 0x1fdf30: 0x92020187  lbu         $v0, 0x187($s0)
    ctx->pc = 0x1fdf30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 391)));
    // 0x1fdf34: 0x0  nop
    ctx->pc = 0x1fdf34u;
    // NOP
    // 0x1fdf38: 0x0  nop
    ctx->pc = 0x1fdf38u;
    // NOP
    // 0x1fdf3c: 0x0  nop
    ctx->pc = 0x1fdf3cu;
    // NOP
    // 0x1fdf40: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1FDF40u;
    {
        const bool branch_taken_0x1fdf40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FDF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDF40u;
        // 0x1fdf44: 0x24a2fffa  addiu       $v0, $a1, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967290));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdf40) {
            ctx->pc = 0x1FDF1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fdf1c;
        }
    }
    ctx->pc = 0x1FDF48u;
    // 0x1fdf48: 0x920201f9  lbu         $v0, 0x1F9($s0)
    ctx->pc = 0x1fdf48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 505)));
    // 0x1fdf4c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FDF4Cu;
    {
        const bool branch_taken_0x1fdf4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fdf4c) {
            ctx->pc = 0x1FDF50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FDF4Cu;
            // 0x1fdf50: 0x8c62003c  lw          $v0, 0x3C($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDF70u;
            goto label_1fdf70;
        }
    }
    ctx->pc = 0x1FDF54u;
    // 0x1fdf54: 0xc6000644  lwc1        $f0, 0x644($s0)
    ctx->pc = 0x1fdf54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fdf58: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1fdf58u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1fdf5c: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x1FDF5Cu;
    {
        const bool branch_taken_0x1fdf5c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1fdf5c) {
            ctx->pc = 0x1FDF60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FDF5Cu;
            // 0x1fdf60: 0x8c62003c  lw          $v0, 0x3C($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDF70u;
            goto label_1fdf70;
        }
    }
    ctx->pc = 0x1FDF64u;
    // 0x1fdf64: 0x1000ffed  b           . + 4 + (-0x13 << 2)
    ctx->pc = 0x1FDF64u;
    {
        const bool branch_taken_0x1fdf64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDF64u;
        // 0x1fdf68: 0x24a2fffa  addiu       $v0, $a1, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967290));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdf64) {
            ctx->pc = 0x1FDF1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fdf1c;
        }
    }
    ctx->pc = 0x1FDF6Cu;
    // 0x1fdf6c: 0x0  nop
    ctx->pc = 0x1fdf6cu;
    // NOP
label_1fdf70:
    // 0x1fdf70: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1fdf70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1fdf74: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1FDF74u;
    {
        const bool branch_taken_0x1fdf74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDF74u;
        // 0x1fdf78: 0x24a2fffa  addiu       $v0, $a1, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967290));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdf74) {
            ctx->pc = 0x1FDFA4u;
            goto label_1fdfa4;
        }
    }
    ctx->pc = 0x1FDF7Cu;
    // 0x1fdf7c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1fdf7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1fdf80: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FDF80u;
    {
        const bool branch_taken_0x1fdf80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FDF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDF80u;
        // 0x1fdf84: 0x51100  sll         $v0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdf80) {
            ctx->pc = 0x1FDF9Cu;
            goto label_1fdf9c;
        }
    }
    ctx->pc = 0x1FDF88u;
    // 0x1fdf88: 0x10a70005  beq         $a1, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FDF88u;
    {
        const bool branch_taken_0x1fdf88 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        ctx->pc = 0x1FDF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDF88u;
        // 0x1fdf8c: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdf88) {
            ctx->pc = 0x1FDFA0u;
            goto label_1fdfa0;
        }
    }
    ctx->pc = 0x1FDF90u;
    // 0x1fdf90: 0x54a60005  bnel        $a1, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FDF90u;
    {
        const bool branch_taken_0x1fdf90 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        if (branch_taken_0x1fdf90) {
            ctx->pc = 0x1FDF94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FDF90u;
            // 0x1fdf94: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDFA8u;
            goto label_1fdfa8;
        }
    }
    ctx->pc = 0x1FDF98u;
    // 0x1fdf98: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x1fdf98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_1fdf9c:
    // 0x1fdf9c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1fdf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1fdfa0:
    // 0x1fdfa0: 0xac400490  sw          $zero, 0x490($v0)
    ctx->pc = 0x1fdfa0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1168), GPR_U32(ctx, 0));
label_1fdfa4:
    // 0x1fdfa4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1fdfa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1fdfa8:
    // 0x1fdfa8: 0x28a20008  slti        $v0, $a1, 0x8
    ctx->pc = 0x1fdfa8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1fdfac: 0x5440ffd8  bnel        $v0, $zero, . + 4 + (-0x28 << 2)
    ctx->pc = 0x1FDFACu;
    {
        const bool branch_taken_0x1fdfac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fdfac) {
            ctx->pc = 0x1FDFB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FDFACu;
            // 0x1fdfb0: 0x8e0300c4  lw          $v1, 0xC4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDF10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fdf10;
        }
    }
    ctx->pc = 0x1FDFB4u;
    // 0x1fdfb4: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1FDFB4u;
    {
        const bool branch_taken_0x1fdfb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDFB4u;
        // 0x1fdfb8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdfb4) {
            ctx->pc = 0x1FE058u;
            goto label_1fe058;
        }
    }
    ctx->pc = 0x1FDFBCu;
    // 0x1fdfbc: 0x0  nop
    ctx->pc = 0x1fdfbcu;
    // NOP
label_1fdfc0:
    // 0x1fdfc0: 0x38620003  xori        $v0, $v1, 0x3
    ctx->pc = 0x1fdfc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)3);
    // 0x1fdfc4: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1FDFC4u;
    {
        const bool branch_taken_0x1fdfc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FDFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDFC4u;
        // 0x1fdfc8: 0x2c620005  sltiu       $v0, $v1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdfc4) {
            ctx->pc = 0x1FE008u;
            goto label_1fe008;
        }
    }
    ctx->pc = 0x1FDFCCu;
    // 0x1fdfcc: 0x3c0143c8  lui         $at, 0x43C8
    ctx->pc = 0x1fdfccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17352 << 16));
    // 0x1fdfd0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1fdfd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fdfd4: 0x26040490  addiu       $a0, $s0, 0x490
    ctx->pc = 0x1fdfd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1168));
    // 0x1fdfd8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fdfd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdfdc: 0x0  nop
    ctx->pc = 0x1fdfdcu;
    // NOP
label_1fdfe0:
    // 0x1fdfe0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1fdfe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1fdfe4: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x1fdfe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1fdfe8: 0x28a20008  slti        $v0, $a1, 0x8
    ctx->pc = 0x1fdfe8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1fdfec: 0x0  nop
    ctx->pc = 0x1fdfecu;
    // NOP
    // 0x1fdff0: 0x0  nop
    ctx->pc = 0x1fdff0u;
    // NOP
    // 0x1fdff4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1FDFF4u;
    {
        const bool branch_taken_0x1fdff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FDFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDFF4u;
        // 0x1fdff8: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdff4) {
            ctx->pc = 0x1FDFE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fdfe0;
        }
    }
    ctx->pc = 0x1FDFFCu;
    // 0x1fdffc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1FDFFCu;
    {
        const bool branch_taken_0x1fdffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDFFCu;
        // 0x1fe000: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdffc) {
            ctx->pc = 0x1FE058u;
            goto label_1fe058;
        }
    }
    ctx->pc = 0x1FE004u;
    // 0x1fe004: 0x0  nop
    ctx->pc = 0x1fe004u;
    // NOP
label_1fe008:
    // 0x1fe008: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FE008u;
    {
        const bool branch_taken_0x1fe008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE008u;
        // 0x1fe00c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe008) {
            ctx->pc = 0x1FE01Cu;
            goto label_1fe01c;
        }
    }
    ctx->pc = 0x1FE010u;
    // 0x1fe010: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FE010u;
    {
        const bool branch_taken_0x1fe010 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE010u;
        // 0x1fe014: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe010) {
            ctx->pc = 0x1FE01Cu;
            goto label_1fe01c;
        }
    }
    ctx->pc = 0x1FE018u;
    // 0x1fe018: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fe018u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fe01c:
    // 0x1fe01c: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1FE01Cu;
    {
        const bool branch_taken_0x1fe01c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe01c) {
            ctx->pc = 0x1FE020u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE01Cu;
            // 0x1fe020: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FE058u;
            goto label_1fe058;
        }
    }
    ctx->pc = 0x1FE024u;
    // 0x1fe024: 0x3c014396  lui         $at, 0x4396
    ctx->pc = 0x1fe024u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17302 << 16));
    // 0x1fe028: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1fe028u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fe02c: 0x26040490  addiu       $a0, $s0, 0x490
    ctx->pc = 0x1fe02cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1168));
    // 0x1fe030: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fe030u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe034: 0x0  nop
    ctx->pc = 0x1fe034u;
    // NOP
label_1fe038:
    // 0x1fe038: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1fe038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1fe03c: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x1fe03cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1fe040: 0x28a20008  slti        $v0, $a1, 0x8
    ctx->pc = 0x1fe040u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1fe044: 0x0  nop
    ctx->pc = 0x1fe044u;
    // NOP
    // 0x1fe048: 0x0  nop
    ctx->pc = 0x1fe048u;
    // NOP
    // 0x1fe04c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1FE04Cu;
    {
        const bool branch_taken_0x1fe04c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE04Cu;
        // 0x1fe050: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe04c) {
            ctx->pc = 0x1FE038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fe038;
        }
    }
    ctx->pc = 0x1FE054u;
    // 0x1fe054: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fe054u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fe058:
    // 0x1fe058: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fe058u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fe05c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fe05cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fe060: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1fe060u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fe064: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1fe064u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fe068: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE068u;
        // 0x1fe06c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE068u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE070u;
}
