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

// Function: sub_0029EB30
// Address: 0x29eb30 - 0x29ed30
void sub_0029EB30_0x29eb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029EB30_0x29eb30");
#endif

    switch (ctx->pc) {
        case 0x29eb60u: goto label_29eb60;
        case 0x29eb68u: goto label_29eb68;
        case 0x29ebb0u: goto label_29ebb0;
        case 0x29ebc0u: goto label_29ebc0;
        case 0x29ebccu: goto label_29ebcc;
        case 0x29ebecu: goto label_29ebec;
        case 0x29ec00u: goto label_29ec00;
        case 0x29ec28u: goto label_29ec28;
        case 0x29ec30u: goto label_29ec30;
        case 0x29ec40u: goto label_29ec40;
        case 0x29ec4cu: goto label_29ec4c;
        case 0x29ec70u: goto label_29ec70;
        case 0x29ec90u: goto label_29ec90;
        case 0x29ece4u: goto label_29ece4;
        case 0x29ed04u: goto label_29ed04;
        case 0x29ed0cu: goto label_29ed0c;
        default: break;
    }

    ctx->pc = 0x29eb30u;

    // 0x29eb30: 0x8f83b6cc  lw          $v1, -0x4934($gp)
    ctx->pc = 0x29eb30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948556)));
    // 0x29eb34: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x29eb34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x29eb38: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x29eb38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x29eb3c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29eb3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29eb40: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x29eb40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x29eb44: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x29eb44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29eb48: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x29eb48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x29eb4c: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x29eb4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x29eb50: 0x1460006f  bnez        $v1, . + 4 + (0x6F << 2)
    ctx->pc = 0x29EB50u;
    {
        const bool branch_taken_0x29eb50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x29EB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EB50u;
        // 0x29eb54: 0xffbf0060  sd          $ra, 0x60($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29eb50) {
            ctx->pc = 0x29ED10u;
            goto label_29ed10;
        }
    }
    ctx->pc = 0x29EB58u;
    // 0x29eb58: 0xc086620  jal         func_219880
    ctx->pc = 0x29EB58u;
    SET_GPR_U32(ctx, 31, 0x29EB60u);
    ctx->pc = 0x29EB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EB58u;
    // 0x29eb5c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219880u, 0x29EB58u, 0x29EB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EB60u;
label_29eb60:
    // 0x29eb60: 0xc08661c  jal         func_219870
    ctx->pc = 0x29EB60u;
    SET_GPR_U32(ctx, 31, 0x29EB68u);
    ctx->pc = 0x29EB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EB60u;
    // 0x29eb64: 0xae220168  sw          $v0, 0x168($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 360), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219870u, 0x29EB60u, 0x29EB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EB68u;
label_29eb68:
    // 0x29eb68: 0x8e300048  lw          $s0, 0x48($s1)
    ctx->pc = 0x29eb68u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x29eb6c: 0x24430070  addiu       $v1, $v0, 0x70
    ctx->pc = 0x29eb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x29eb70: 0xae22016c  sw          $v0, 0x16C($s1)
    ctx->pc = 0x29eb70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 364), GPR_U32(ctx, 2));
    // 0x29eb74: 0x12120020  beq         $s0, $s2, . + 4 + (0x20 << 2)
    ctx->pc = 0x29EB74u;
    {
        const bool branch_taken_0x29eb74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x29EB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EB74u;
        // 0x29eb78: 0xae230170  sw          $v1, 0x170($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 368), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29eb74) {
            ctx->pc = 0x29EBF8u;
            goto label_29ebf8;
        }
    }
    ctx->pc = 0x29EB7Cu;
    // 0x29eb7c: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x29eb7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x29eb80: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x29EB80u;
    {
        const bool branch_taken_0x29eb80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29eb80) {
            ctx->pc = 0x29EB84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29EB80u;
            // 0x29eb84: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29EB98u;
            goto label_29eb98;
        }
    }
    ctx->pc = 0x29EB88u;
    // 0x29eb88: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29EB88u;
    {
        const bool branch_taken_0x29eb88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29EB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EB88u;
        // 0x29eb8c: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29eb88) {
            ctx->pc = 0x29EBA8u;
            goto label_29eba8;
        }
    }
    ctx->pc = 0x29EB90u;
    // 0x29eb90: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x29EB90u;
    {
        const bool branch_taken_0x29eb90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29EB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EB90u;
        // 0x29eb94: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29eb90) {
            ctx->pc = 0x29ECF0u;
            goto label_29ecf0;
        }
    }
    ctx->pc = 0x29EB98u;
label_29eb98:
    // 0x29eb98: 0x1202003b  beq         $s0, $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x29EB98u;
    {
        const bool branch_taken_0x29eb98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x29EB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EB98u;
        // 0x29eb9c: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29eb98) {
            ctx->pc = 0x29EC88u;
            goto label_29ec88;
        }
    }
    ctx->pc = 0x29EBA0u;
    // 0x29eba0: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x29EBA0u;
    {
        const bool branch_taken_0x29eba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29EBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EBA0u;
        // 0x29eba4: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29eba0) {
            ctx->pc = 0x29ECF0u;
            goto label_29ecf0;
        }
    }
    ctx->pc = 0x29EBA8u;
label_29eba8:
    // 0x29eba8: 0xc089622  jal         func_225888
    ctx->pc = 0x29EBA8u;
    SET_GPR_U32(ctx, 31, 0x29EBB0u);
    ctx->pc = 0x29EBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EBA8u;
    // 0x29ebac: 0x8e240150  lw          $a0, 0x150($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225888u, 0x29EBA8u, 0x29EBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EBB0u;
label_29ebb0:
    // 0x29ebb0: 0x50400057  beql        $v0, $zero, . + 4 + (0x57 << 2)
    ctx->pc = 0x29EBB0u;
    {
        const bool branch_taken_0x29ebb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ebb0) {
            ctx->pc = 0x29EBB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29EBB0u;
            // 0x29ebb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29ED10u;
            goto label_29ed10;
        }
    }
    ctx->pc = 0x29EBB8u;
    // 0x29ebb8: 0xc0404b8  jal         func_1012E0
    ctx->pc = 0x29EBB8u;
    SET_GPR_U32(ctx, 31, 0x29EBC0u);
    ctx->pc = 0x29EBBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EBB8u;
    // 0x29ebbc: 0x24040026  addiu       $a0, $zero, 0x26 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012E0u, 0x29EBB8u, 0x29EBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EBC0u;
label_29ebc0:
    // 0x29ebc0: 0x24040027  addiu       $a0, $zero, 0x27
    ctx->pc = 0x29ebc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x29ebc4: 0xc0404b8  jal         func_1012E0
    ctx->pc = 0x29EBC4u;
    SET_GPR_U32(ctx, 31, 0x29EBCCu);
    ctx->pc = 0x29EBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EBC4u;
    // 0x29ebc8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012E0u, 0x29EBC4u, 0x29EBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EBCCu;
label_29ebcc:
    // 0x29ebcc: 0x3c094000  lui         $t1, 0x4000
    ctx->pc = 0x29ebccu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16384 << 16));
    // 0x29ebd0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x29ebd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ebd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29ebd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ebd8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29ebd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ebdc: 0x24070400  addiu       $a3, $zero, 0x400
    ctx->pc = 0x29ebdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x29ebe0: 0x240800f3  addiu       $t0, $zero, 0xF3
    ctx->pc = 0x29ebe0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 243));
    // 0x29ebe4: 0xc0a5adc  jal         func_296B70
    ctx->pc = 0x29EBE4u;
    SET_GPR_U32(ctx, 31, 0x29EBECu);
    ctx->pc = 0x29EBE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EBE4u;
    // 0x29ebe8: 0x35290c00  ori         $t1, $t1, 0xC00 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)3072);
    ctx->in_delay_slot = false;
    ctx->pc = 0x296B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296B70u, 0x29EBE4u, 0x29EBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EBECu;
label_29ebec:
    // 0x29ebec: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x29EBECu;
    {
        const bool branch_taken_0x29ebec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29EBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EBECu;
        // 0x29ebf0: 0xae320048  sw          $s2, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ebec) {
            ctx->pc = 0x29ED0Cu;
            goto label_29ed0c;
        }
    }
    ctx->pc = 0x29EBF4u;
    // 0x29ebf4: 0x0  nop
    ctx->pc = 0x29ebf4u;
    // NOP
label_29ebf8:
    // 0x29ebf8: 0xc0a5b2a  jal         func_296CA8
    ctx->pc = 0x29EBF8u;
    SET_GPR_U32(ctx, 31, 0x29EC00u);
    ctx->pc = 0x29EBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EBF8u;
    // 0x29ebfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296CA8u, 0x29EBF8u, 0x29EC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EC00u;
label_29ec00:
    // 0x29ec00: 0x8e22013c  lw          $v0, 0x13C($s1)
    ctx->pc = 0x29ec00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 316)));
    // 0x29ec04: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x29EC04u;
    {
        const bool branch_taken_0x29ec04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29EC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EC04u;
        // 0x29ec08: 0x2403fffd  addiu       $v1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ec04) {
            ctx->pc = 0x29ED0Cu;
            goto label_29ed0c;
        }
    }
    ctx->pc = 0x29EC0Cu;
    // 0x29ec0c: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x29ec0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x29ec10: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x29ec10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ec14: 0x3c130015  lui         $s3, 0x15
    ctx->pc = 0x29ec14u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)21 << 16));
    // 0x29ec18: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x29ec18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x29ec1c: 0x3c12003c  lui         $s2, 0x3C
    ctx->pc = 0x29ec1cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)60 << 16));
    // 0x29ec20: 0xae220040  sw          $v0, 0x40($s1)
    ctx->pc = 0x29ec20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
    // 0x29ec24: 0x0  nop
    ctx->pc = 0x29ec24u;
    // NOP
label_29ec28:
    // 0x29ec28: 0xc08e498  jal         func_239260
    ctx->pc = 0x29EC28u;
    SET_GPR_U32(ctx, 31, 0x29EC30u);
    ctx->pc = 0x29EC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EC28u;
    // 0x29ec2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239260u, 0x29EC28u, 0x29EC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EC30u;
label_29ec30:
    // 0x29ec30: 0x26653f40  addiu       $a1, $s3, 0x3F40
    ctx->pc = 0x29ec30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16192));
    // 0x29ec34: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29ec34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ec38: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x29EC38u;
    SET_GPR_U32(ctx, 31, 0x29EC40u);
    ctx->pc = 0x29EC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EC38u;
    // 0x29ec3c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x29EC38u, 0x29EC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EC40u;
label_29ec40:
    // 0x29ec40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29ec40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ec44: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x29EC44u;
    SET_GPR_U32(ctx, 31, 0x29EC4Cu);
    ctx->pc = 0x29EC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EC44u;
    // 0x29ec48: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x29EC44u, 0x29EC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EC4Cu;
label_29ec4c:
    // 0x29ec4c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x29EC4Cu;
    {
        const bool branch_taken_0x29ec4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ec4c) {
            ctx->pc = 0x29EC50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29EC4Cu;
            // 0x29ec50: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29EC74u;
            goto label_29ec74;
        }
    }
    ctx->pc = 0x29EC54u;
    // 0x29ec54: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x29ec54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x29ec58: 0x8c430078  lw          $v1, 0x78($v0)
    ctx->pc = 0x29ec58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x29ec5c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x29EC5Cu;
    {
        const bool branch_taken_0x29ec5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29EC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EC5Cu;
        // 0x29ec60: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ec5c) {
            ctx->pc = 0x29EC70u;
            goto label_29ec70;
        }
    }
    ctx->pc = 0x29EC64u;
    // 0x29ec64: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29ec64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ec68: 0xc0a79f8  jal         func_29E7E0
    ctx->pc = 0x29EC68u;
    SET_GPR_U32(ctx, 31, 0x29EC70u);
    ctx->pc = 0x29EC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EC68u;
    // 0x29ec6c: 0x2644c668  addiu       $a0, $s2, -0x3998 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294952552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E7E0u, 0x29EC68u, 0x29EC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EC70u;
label_29ec70:
    // 0x29ec70: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x29ec70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_29ec74:
    // 0x29ec74: 0x2a020021  slti        $v0, $s0, 0x21
    ctx->pc = 0x29ec74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x29ec78: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x29EC78u;
    {
        const bool branch_taken_0x29ec78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29EC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EC78u;
        // 0x29ec7c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ec78) {
            ctx->pc = 0x29EC28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29ec28;
        }
    }
    ctx->pc = 0x29EC80u;
    // 0x29ec80: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x29EC80u;
    {
        const bool branch_taken_0x29ec80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29EC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EC80u;
        // 0x29ec84: 0xae220048  sw          $v0, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ec80) {
            ctx->pc = 0x29ED0Cu;
            goto label_29ed0c;
        }
    }
    ctx->pc = 0x29EC88u;
label_29ec88:
    // 0x29ec88: 0xc0a5b2a  jal         func_296CA8
    ctx->pc = 0x29EC88u;
    SET_GPR_U32(ctx, 31, 0x29EC90u);
    ctx->pc = 0x29EC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EC88u;
    // 0x29ec8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296CA8u, 0x29EC88u, 0x29EC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EC90u;
label_29ec90:
    // 0x29ec90: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x29ec90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x29ec94: 0x24438858  addiu       $v1, $v0, -0x77A8
    ctx->pc = 0x29ec94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936664));
    // 0x29ec98: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x29ec98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x29ec9c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x29ec9cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A885Cu));
    // 0x29eca0: 0x5044000a  beql        $v0, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x29ECA0u;
    {
        const bool branch_taken_0x29eca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x29eca0) {
            ctx->pc = 0x29ECA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29ECA0u;
            // 0x29eca4: 0x8e230040  lw          $v1, 0x40($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29ECCCu;
            goto label_29eccc;
        }
    }
    ctx->pc = 0x29ECA8u;
    // 0x29eca8: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x29eca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x29ecac: 0x10640006  beq         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29ECACu;
    {
        const bool branch_taken_0x29ecac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x29ECB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ECACu;
        // 0x29ecb0: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ecac) {
            ctx->pc = 0x29ECC8u;
            goto label_29ecc8;
        }
    }
    ctx->pc = 0x29ECB4u;
    // 0x29ecb4: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x29ECB4u;
    {
        const bool branch_taken_0x29ecb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x29ECB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ECB4u;
        // 0x29ecb8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ecb4) {
            ctx->pc = 0x29ED0Cu;
            goto label_29ed0c;
        }
    }
    ctx->pc = 0x29ECBCu;
    // 0x29ecbc: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x29ECBCu;
    {
        const bool branch_taken_0x29ecbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29ECC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ECBCu;
        // 0x29ecc0: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ecbc) {
            ctx->pc = 0x29ED14u;
            goto label_29ed14;
        }
    }
    ctx->pc = 0x29ECC4u;
    // 0x29ecc4: 0x0  nop
    ctx->pc = 0x29ecc4u;
    // NOP
label_29ecc8:
    // 0x29ecc8: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x29ecc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_29eccc:
    // 0x29eccc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x29ecccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29ecd0: 0xae220048  sw          $v0, 0x48($s1)
    ctx->pc = 0x29ecd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
    // 0x29ecd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29ecd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ecd8: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x29ecd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x29ecdc: 0xc0a7b5e  jal         func_29ED78
    ctx->pc = 0x29ECDCu;
    SET_GPR_U32(ctx, 31, 0x29ECE4u);
    ctx->pc = 0x29ECE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29ECDCu;
    // 0x29ece0: 0xae230040  sw          $v1, 0x40($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29ED78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29ED78u, 0x29ECDCu, 0x29ECE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29ECE4u;
label_29ece4:
    // 0x29ece4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x29ECE4u;
    {
        const bool branch_taken_0x29ece4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29ECE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ECE4u;
        // 0x29ece8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ece4) {
            ctx->pc = 0x29ED10u;
            goto label_29ed10;
        }
    }
    ctx->pc = 0x29ECECu;
    // 0x29ecec: 0x0  nop
    ctx->pc = 0x29ececu;
    // NOP
label_29ecf0:
    // 0x29ecf0: 0x8c43885c  lw          $v1, -0x77A4($v0)
    ctx->pc = 0x29ecf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936668)));
    // 0x29ecf4: 0x14640006  bne         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29ECF4u;
    {
        const bool branch_taken_0x29ecf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x29ECF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ECF4u;
        // 0x29ecf8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ecf4) {
            ctx->pc = 0x29ED10u;
            goto label_29ed10;
        }
    }
    ctx->pc = 0x29ECFCu;
    // 0x29ecfc: 0xc0a5b2a  jal         func_296CA8
    ctx->pc = 0x29ECFCu;
    SET_GPR_U32(ctx, 31, 0x29ED04u);
    ctx->pc = 0x29ED00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29ECFCu;
    // 0x29ed00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296CA8u, 0x29ECFCu, 0x29ED04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29ED04u;
label_29ed04:
    // 0x29ed04: 0xc0a7b82  jal         func_29EE08
    ctx->pc = 0x29ED04u;
    SET_GPR_U32(ctx, 31, 0x29ED0Cu);
    ctx->pc = 0x29ED08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29ED04u;
    // 0x29ed08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29EE08u, 0x29ED04u, 0x29ED0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29ED0Cu;
label_29ed0c:
    // 0x29ed0c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29ed0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29ed10:
    // 0x29ed10: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x29ed10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_29ed14:
    // 0x29ed14: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x29ed14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x29ed18: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x29ed18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29ed1c: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x29ed1cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29ed20: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x29ed20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29ed24: 0x3e00008  jr          $ra
    ctx->pc = 0x29ED24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29ED28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ED24u;
        // 0x29ed28: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29ED24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29ED2Cu;
    // 0x29ed2c: 0x0  nop
    ctx->pc = 0x29ed2cu;
    // NOP
    ctx->pc = 0x29ed30u;
}
