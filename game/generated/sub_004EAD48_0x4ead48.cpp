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

// Function: sub_004EAD48
// Address: 0x4ead48 - 0x4eb190
void sub_004EAD48_0x4ead48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EAD48_0x4ead48");
#endif

    switch (ctx->pc) {
        case 0x4eada8u: goto label_4eada8;
        case 0x4eadf0u: goto label_4eadf0;
        case 0x4eae00u: goto label_4eae00;
        case 0x4eae10u: goto label_4eae10;
        case 0x4eae20u: goto label_4eae20;
        case 0x4eae30u: goto label_4eae30;
        case 0x4eae40u: goto label_4eae40;
        case 0x4eae50u: goto label_4eae50;
        case 0x4eae60u: goto label_4eae60;
        case 0x4eaec0u: goto label_4eaec0;
        case 0x4eaed0u: goto label_4eaed0;
        case 0x4eaee0u: goto label_4eaee0;
        case 0x4eaef0u: goto label_4eaef0;
        case 0x4eaf00u: goto label_4eaf00;
        case 0x4eaf10u: goto label_4eaf10;
        case 0x4eaf18u: goto label_4eaf18;
        case 0x4eafd8u: goto label_4eafd8;
        case 0x4eafe8u: goto label_4eafe8;
        case 0x4eaff8u: goto label_4eaff8;
        case 0x4eb008u: goto label_4eb008;
        case 0x4eb018u: goto label_4eb018;
        case 0x4eb028u: goto label_4eb028;
        case 0x4eb038u: goto label_4eb038;
        case 0x4eb048u: goto label_4eb048;
        case 0x4eb058u: goto label_4eb058;
        case 0x4eb068u: goto label_4eb068;
        case 0x4eb078u: goto label_4eb078;
        case 0x4eb184u: goto label_4eb184;
        default: break;
    }

    ctx->pc = 0x4ead48u;

    // 0x4ead48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ead48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ead4c: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x4ead4cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x4ead50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ead50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ead54: 0x3c0a007f  lui         $t2, 0x7F
    ctx->pc = 0x4ead54u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)127 << 16));
    // 0x4ead58: 0x252911f4  addiu       $t1, $t1, 0x11F4
    ctx->pc = 0x4ead58u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4596));
    // 0x4ead5c: 0x254a11f8  addiu       $t2, $t2, 0x11F8
    ctx->pc = 0x4ead5cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4600));
    // 0x4ead60: 0x8d280000  lw          $t0, 0x0($t1)
    ctx->pc = 0x4ead60u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x7F11F4u));
    // 0x4ead64: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4ead64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4ead68: 0x8d470000  lw          $a3, 0x0($t2)
    ctx->pc = 0x4ead68u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x7F11F8u));
    // 0x4ead6c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4ead6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4ead70: 0x346304b6  ori         $v1, $v1, 0x4B6
    ctx->pc = 0x4ead70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1206);
    // 0x4ead74: 0x344204b7  ori         $v0, $v0, 0x4B7
    ctx->pc = 0x4ead74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1207);
    // 0x4ead78: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4ead78u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4ead7c: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4ead7cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4ead80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ead80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ead84: 0x1034024  and         $t0, $t0, $v1
    ctx->pc = 0x4ead84u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x4ead88: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4ead88u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4ead8c: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x4ead8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ead90: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x4ead90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ead94: 0xad280000  sw          $t0, 0x0($t1)
    ctx->pc = 0x4ead94u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 8));
    // 0x4ead98: 0xad470000  sw          $a3, 0x0($t2)
    ctx->pc = 0x4ead98u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 7));
    // 0x4ead9c: 0x812b698  j           func_4ADA60
    ctx->pc = 0x4EAD9Cu;
    ctx->pc = 0x4EADA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EAD9Cu;
    // 0x4eada0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADA60u;
    sub_004ADA60_0x4ada60(rdram, ctx, runtime); return;
    ctx->pc = 0x4EADA4u;
    // 0x4eada4: 0x0  nop
    ctx->pc = 0x4eada4u;
    // NOP
label_4eada8:
    // 0x4eada8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4eada8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4eadac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4eadacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4eadb0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4eadb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eadb4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4eadb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4eadb8: 0x96020164  lhu         $v0, 0x164($s0)
    ctx->pc = 0x4eadb8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 356)));
    // 0x4eadbc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4eadbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4eadc0: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4eadc0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4eadc4: 0x2c43000b  sltiu       $v1, $v0, 0xB
    ctx->pc = 0x4eadc4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x4eadc8: 0x50600026  beql        $v1, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x4EADC8u;
    {
        const bool branch_taken_0x4eadc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4eadc8) {
            ctx->pc = 0x4EADCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EADC8u;
            // 0x4eadcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4EAE64u;
            goto label_4eae64;
        }
    }
    ctx->pc = 0x4EADD0u;
    // 0x4eadd0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4eadd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4eadd4: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4eadd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4eadd8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4eadd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4eaddc: 0x8c63bac0  lw          $v1, -0x4540($v1)
    ctx->pc = 0x4eaddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949568)));
    // 0x4eade0: 0x600008  jr          $v1
    ctx->pc = 0x4EADE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x4EADE8u: goto label_4eade8;
            case 0x4EADF8u: goto label_4eadf8;
            case 0x4EAE08u: goto label_4eae08;
            case 0x4EAE18u: goto label_4eae18;
            case 0x4EAE28u: goto label_4eae28;
            case 0x4EAE38u: goto label_4eae38;
            case 0x4EAE48u: goto label_4eae48;
            case 0x4EAE58u: goto label_4eae58;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EADE0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4EADE8u;
label_4eade8:
    // 0x4eade8: 0xc13bcb8  jal         func_4EF2E0
    ctx->pc = 0x4EADE8u;
    SET_GPR_U32(ctx, 31, 0x4EADF0u);
    ctx->pc = 0x4EADECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EADE8u;
    // 0x4eadec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EF2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EF2E0u, 0x4EADE8u, 0x4EADF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EADF0u;
label_4eadf0:
    // 0x4eadf0: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x4EADF0u;
    {
        const bool branch_taken_0x4eadf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EADF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EADF0u;
        // 0x4eadf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eadf0) {
            ctx->pc = 0x4EAE64u;
            goto label_4eae64;
        }
    }
    ctx->pc = 0x4EADF8u;
label_4eadf8:
    // 0x4eadf8: 0xc13addc  jal         func_4EB770
    ctx->pc = 0x4EADF8u;
    SET_GPR_U32(ctx, 31, 0x4EAE00u);
    ctx->pc = 0x4EADFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EADF8u;
    // 0x4eadfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EB770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EB770u, 0x4EADF8u, 0x4EAE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EAE00u;
label_4eae00:
    // 0x4eae00: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x4EAE00u;
    {
        const bool branch_taken_0x4eae00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EAE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EAE00u;
        // 0x4eae04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eae00) {
            ctx->pc = 0x4EAE64u;
            goto label_4eae64;
        }
    }
    ctx->pc = 0x4EAE08u;
label_4eae08:
    // 0x4eae08: 0xc13aede  jal         func_4EBB78
    ctx->pc = 0x4EAE08u;
    SET_GPR_U32(ctx, 31, 0x4EAE10u);
    ctx->pc = 0x4EAE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EAE08u;
    // 0x4eae0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EBB78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EBB78u, 0x4EAE08u, 0x4EAE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EAE10u;
label_4eae10:
    // 0x4eae10: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x4EAE10u;
    {
        const bool branch_taken_0x4eae10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EAE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EAE10u;
        // 0x4eae14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eae10) {
            ctx->pc = 0x4EAE64u;
            goto label_4eae64;
        }
    }
    ctx->pc = 0x4EAE18u;
label_4eae18:
    // 0x4eae18: 0xc13add4  jal         func_4EB750
    ctx->pc = 0x4EAE18u;
    SET_GPR_U32(ctx, 31, 0x4EAE20u);
    ctx->pc = 0x4EAE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EAE18u;
    // 0x4eae1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EB750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EB750u, 0x4EAE18u, 0x4EAE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EAE20u;
label_4eae20:
    // 0x4eae20: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x4EAE20u;
    {
        const bool branch_taken_0x4eae20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EAE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EAE20u;
        // 0x4eae24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eae20) {
            ctx->pc = 0x4EAE64u;
            goto label_4eae64;
        }
    }
    ctx->pc = 0x4EAE28u;
label_4eae28:
    // 0x4eae28: 0xc13add2  jal         func_4EB748
    ctx->pc = 0x4EAE28u;
    SET_GPR_U32(ctx, 31, 0x4EAE30u);
    ctx->pc = 0x4EAE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EAE28u;
    // 0x4eae2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EB748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EB748u, 0x4EAE28u, 0x4EAE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EAE30u;
label_4eae30:
    // 0x4eae30: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4EAE30u;
    {
        const bool branch_taken_0x4eae30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EAE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EAE30u;
        // 0x4eae34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eae30) {
            ctx->pc = 0x4EAE64u;
            goto label_4eae64;
        }
    }
    ctx->pc = 0x4EAE38u;
label_4eae38:
    // 0x4eae38: 0xc13af98  jal         func_4EBE60
    ctx->pc = 0x4EAE38u;
    SET_GPR_U32(ctx, 31, 0x4EAE40u);
    ctx->pc = 0x4EAE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EAE38u;
    // 0x4eae3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EBE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EBE60u, 0x4EAE38u, 0x4EAE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EAE40u;
label_4eae40:
    // 0x4eae40: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4EAE40u;
    {
        const bool branch_taken_0x4eae40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EAE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EAE40u;
        // 0x4eae44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eae40) {
            ctx->pc = 0x4EAE64u;
            goto label_4eae64;
        }
    }
    ctx->pc = 0x4EAE48u;
label_4eae48:
    // 0x4eae48: 0xc13b08a  jal         func_4EC228
    ctx->pc = 0x4EAE48u;
    SET_GPR_U32(ctx, 31, 0x4EAE50u);
    ctx->pc = 0x4EAE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EAE48u;
    // 0x4eae4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EC228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EC228u, 0x4EAE48u, 0x4EAE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EAE50u;
label_4eae50:
    // 0x4eae50: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4EAE50u;
    {
        const bool branch_taken_0x4eae50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EAE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EAE50u;
        // 0x4eae54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eae50) {
            ctx->pc = 0x4EAE64u;
            goto label_4eae64;
        }
    }
    ctx->pc = 0x4EAE58u;
label_4eae58:
    // 0x4eae58: 0xc13af90  jal         func_4EBE40
    ctx->pc = 0x4EAE58u;
    SET_GPR_U32(ctx, 31, 0x4EAE60u);
    ctx->pc = 0x4EAE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EAE58u;
    // 0x4eae5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EBE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EBE40u, 0x4EAE58u, 0x4EAE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EAE60u;
label_4eae60:
    // 0x4eae60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4eae60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4eae64:
    // 0x4eae64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4eae64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4eae68: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4eae68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4eae6c: 0x813ab9e  j           func_4EAE78
    ctx->pc = 0x4EAE6Cu;
    ctx->pc = 0x4EAE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EAE6Cu;
    // 0x4eae70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EAE78u;
    goto label_4eae78;
    ctx->pc = 0x4EAE74u;
    // 0x4eae74: 0x0  nop
    ctx->pc = 0x4eae74u;
    // NOP
label_4eae78:
    // 0x4eae78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4eae78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4eae7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4eae7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4eae80: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4eae80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eae84: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4eae84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4eae88: 0x96020166  lhu         $v0, 0x166($s0)
    ctx->pc = 0x4eae88u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 358)));
    // 0x4eae8c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4eae8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4eae90: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4eae90u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4eae94: 0x2c430009  sltiu       $v1, $v0, 0x9
    ctx->pc = 0x4eae94u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x4eae98: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x4EAE98u;
    {
        const bool branch_taken_0x4eae98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EAE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EAE98u;
        // 0x4eae9c: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eae98) {
            ctx->pc = 0x4EAF10u;
            goto label_4eaf10;
        }
    }
    ctx->pc = 0x4EAEA0u;
    // 0x4eaea0: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4eaea0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4eaea4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4eaea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4eaea8: 0x8c63baf0  lw          $v1, -0x4510($v1)
    ctx->pc = 0x4eaea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949616)));
    // 0x4eaeac: 0x600008  jr          $v1
    ctx->pc = 0x4EAEACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x4EAEB8u: goto label_4eaeb8;
            case 0x4EAEC8u: goto label_4eaec8;
            case 0x4EAED8u: goto label_4eaed8;
            case 0x4EAEE8u: goto label_4eaee8;
            case 0x4EAEF8u: goto label_4eaef8;
            case 0x4EAF08u: goto label_4eaf08;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EAEACu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4EAEB4u;
    // 0x4eaeb4: 0x0  nop
    ctx->pc = 0x4eaeb4u;
    // NOP
label_4eaeb8:
    // 0x4eaeb8: 0xc13b12a  jal         func_4EC4A8
    ctx->pc = 0x4EAEB8u;
    SET_GPR_U32(ctx, 31, 0x4EAEC0u);
    ctx->pc = 0x4EAEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EAEB8u;
    // 0x4eaebc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EC4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EC4A8u, 0x4EAEB8u, 0x4EAEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EAEC0u;
label_4eaec0:
    // 0x4eaec0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x4EAEC0u;
    {
        const bool branch_taken_0x4eaec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4eaec0) {
            ctx->pc = 0x4EAF10u;
            goto label_4eaf10;
        }
    }
    ctx->pc = 0x4EAEC8u;
label_4eaec8:
    // 0x4eaec8: 0xc13bcb8  jal         func_4EF2E0
    ctx->pc = 0x4EAEC8u;
    SET_GPR_U32(ctx, 31, 0x4EAED0u);
    ctx->pc = 0x4EAECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EAEC8u;
    // 0x4eaecc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EF2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EF2E0u, 0x4EAEC8u, 0x4EAED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EAED0u;
label_4eaed0:
    // 0x4eaed0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x4EAED0u;
    {
        const bool branch_taken_0x4eaed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4eaed0) {
            ctx->pc = 0x4EAF10u;
            goto label_4eaf10;
        }
    }
    ctx->pc = 0x4EAED8u;
label_4eaed8:
    // 0x4eaed8: 0xc13b15c  jal         func_4EC570
    ctx->pc = 0x4EAED8u;
    SET_GPR_U32(ctx, 31, 0x4EAEE0u);
    ctx->pc = 0x4EAEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EAED8u;
    // 0x4eaedc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EC570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EC570u, 0x4EAED8u, 0x4EAEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EAEE0u;
label_4eaee0:
    // 0x4eaee0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4EAEE0u;
    {
        const bool branch_taken_0x4eaee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4eaee0) {
            ctx->pc = 0x4EAF10u;
            goto label_4eaf10;
        }
    }
    ctx->pc = 0x4EAEE8u;
label_4eaee8:
    // 0x4eaee8: 0xc13b356  jal         func_4ECD58
    ctx->pc = 0x4EAEE8u;
    SET_GPR_U32(ctx, 31, 0x4EAEF0u);
    ctx->pc = 0x4EAEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EAEE8u;
    // 0x4eaeec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ECD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ECD58u, 0x4EAEE8u, 0x4EAEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EAEF0u;
label_4eaef0:
    // 0x4eaef0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4EAEF0u;
    {
        const bool branch_taken_0x4eaef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4eaef0) {
            ctx->pc = 0x4EAF10u;
            goto label_4eaf10;
        }
    }
    ctx->pc = 0x4EAEF8u;
label_4eaef8:
    // 0x4eaef8: 0xc13b37e  jal         func_4ECDF8
    ctx->pc = 0x4EAEF8u;
    SET_GPR_U32(ctx, 31, 0x4EAF00u);
    ctx->pc = 0x4EAEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EAEF8u;
    // 0x4eaefc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ECDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ECDF8u, 0x4EAEF8u, 0x4EAF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EAF00u;
label_4eaf00:
    // 0x4eaf00: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4EAF00u;
    {
        const bool branch_taken_0x4eaf00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4eaf00) {
            ctx->pc = 0x4EAF10u;
            goto label_4eaf10;
        }
    }
    ctx->pc = 0x4EAF08u;
label_4eaf08:
    // 0x4eaf08: 0xc13b154  jal         func_4EC550
    ctx->pc = 0x4EAF08u;
    SET_GPR_U32(ctx, 31, 0x4EAF10u);
    ctx->pc = 0x4EAF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EAF08u;
    // 0x4eaf0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EC550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EC550u, 0x4EAF08u, 0x4EAF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EAF10u;
label_4eaf10:
    // 0x4eaf10: 0xc127e84  jal         func_49FA10
    ctx->pc = 0x4EAF10u;
    SET_GPR_U32(ctx, 31, 0x4EAF18u);
    ctx->pc = 0x4EAF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EAF10u;
    // 0x4eaf14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FA10u, 0x4EAF10u, 0x4EAF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EAF18u;
label_4eaf18:
    // 0x4eaf18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4eaf18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eaf1c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4eaf1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4eaf20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4eaf20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4eaf24: 0x813abcc  j           func_4EAF30
    ctx->pc = 0x4EAF24u;
    ctx->pc = 0x4EAF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EAF24u;
    // 0x4eaf28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EAF30u;
    goto label_4eaf30;
    ctx->pc = 0x4EAF2Cu;
    // 0x4eaf2c: 0x0  nop
    ctx->pc = 0x4eaf2cu;
    // NOP
label_4eaf30:
    // 0x4eaf30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4eaf30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4eaf34: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4eaf34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4eaf38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4eaf38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4eaf3c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4eaf3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4eaf40: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4eaf40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4eaf44: 0x8c461208  lw          $a2, 0x1208($v0)
    ctx->pc = 0x4eaf44u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7F1208u));
    // 0x4eaf48: 0x24a511e8  addiu       $a1, $a1, 0x11E8
    ctx->pc = 0x4eaf48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4584));
    // 0x4eaf4c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4eaf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F11E8u));
    // 0x4eaf50: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4eaf50u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4eaf54: 0x84c20160  lh          $v0, 0x160($a2)
    ctx->pc = 0x4eaf54u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 352)));
    // 0x4eaf58: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4eaf58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4eaf5c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4eaf5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4eaf60: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4eaf60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4eaf64: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4eaf64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4eaf68: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4eaf68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4eaf6c: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4eaf6cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4eaf70: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x4eaf70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x4eaf74: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4eaf74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4eaf78: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4eaf78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4eaf7c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4eaf7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4eaf80: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4eaf80u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4eaf84: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4EAF84u;
    {
        const bool branch_taken_0x4eaf84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4EAF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EAF84u;
        // 0x4eaf88: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eaf84) {
            ctx->pc = 0x4EAFA0u;
            goto label_4eafa0;
        }
    }
    ctx->pc = 0x4EAF8Cu;
    // 0x4eaf8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4eaf8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4eaf90: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4eaf90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4eaf94: 0x813ac24  j           func_4EB090
    ctx->pc = 0x4EAF94u;
    ctx->pc = 0x4EAF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EAF94u;
    // 0x4eaf98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EB090u;
    goto label_4eb090;
    ctx->pc = 0x4EAF9Cu;
    // 0x4eaf9c: 0x0  nop
    ctx->pc = 0x4eaf9cu;
    // NOP
label_4eafa0:
    // 0x4eafa0: 0x96020168  lhu         $v0, 0x168($s0)
    ctx->pc = 0x4eafa0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 360)));
    // 0x4eafa4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4eafa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4eafa8: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4eafa8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4eafac: 0x2c430011  sltiu       $v1, $v0, 0x11
    ctx->pc = 0x4eafacu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x4eafb0: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x4EAFB0u;
    {
        const bool branch_taken_0x4eafb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EAFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EAFB0u;
        // 0x4eafb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eafb0) {
            ctx->pc = 0x4EB07Cu;
            goto label_4eb07c;
        }
    }
    ctx->pc = 0x4EAFB8u;
    // 0x4eafb8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4eafb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4eafbc: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4eafbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4eafc0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4eafc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4eafc4: 0x8c63bb20  lw          $v1, -0x44E0($v1)
    ctx->pc = 0x4eafc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949664)));
    // 0x4eafc8: 0x600008  jr          $v1
    ctx->pc = 0x4EAFC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x4EAFD0u: goto label_4eafd0;
            case 0x4EAFE0u: goto label_4eafe0;
            case 0x4EAFF0u: goto label_4eaff0;
            case 0x4EB000u: goto label_4eb000;
            case 0x4EB010u: goto label_4eb010;
            case 0x4EB020u: goto label_4eb020;
            case 0x4EB030u: goto label_4eb030;
            case 0x4EB040u: goto label_4eb040;
            case 0x4EB050u: goto label_4eb050;
            case 0x4EB060u: goto label_4eb060;
            case 0x4EB070u: goto label_4eb070;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EAFC8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4EAFD0u;
label_4eafd0:
    // 0x4eafd0: 0xc13bcb8  jal         func_4EF2E0
    ctx->pc = 0x4EAFD0u;
    SET_GPR_U32(ctx, 31, 0x4EAFD8u);
    ctx->pc = 0x4EAFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EAFD0u;
    // 0x4eafd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EF2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EF2E0u, 0x4EAFD0u, 0x4EAFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EAFD8u;
label_4eafd8:
    // 0x4eafd8: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x4EAFD8u;
    {
        const bool branch_taken_0x4eafd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EAFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EAFD8u;
        // 0x4eafdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eafd8) {
            ctx->pc = 0x4EB07Cu;
            goto label_4eb07c;
        }
    }
    ctx->pc = 0x4EAFE0u;
label_4eafe0:
    // 0x4eafe0: 0xc13b4c2  jal         func_4ED308
    ctx->pc = 0x4EAFE0u;
    SET_GPR_U32(ctx, 31, 0x4EAFE8u);
    ctx->pc = 0x4EAFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EAFE0u;
    // 0x4eafe4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ED308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ED308u, 0x4EAFE0u, 0x4EAFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EAFE8u;
label_4eafe8:
    // 0x4eafe8: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x4EAFE8u;
    {
        const bool branch_taken_0x4eafe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EAFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EAFE8u;
        // 0x4eafec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eafe8) {
            ctx->pc = 0x4EB07Cu;
            goto label_4eb07c;
        }
    }
    ctx->pc = 0x4EAFF0u;
label_4eaff0:
    // 0x4eaff0: 0xc13b4cc  jal         func_4ED330
    ctx->pc = 0x4EAFF0u;
    SET_GPR_U32(ctx, 31, 0x4EAFF8u);
    ctx->pc = 0x4EAFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EAFF0u;
    // 0x4eaff4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ED330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ED330u, 0x4EAFF0u, 0x4EAFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EAFF8u;
label_4eaff8:
    // 0x4eaff8: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x4EAFF8u;
    {
        const bool branch_taken_0x4eaff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EAFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EAFF8u;
        // 0x4eaffc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eaff8) {
            ctx->pc = 0x4EB07Cu;
            goto label_4eb07c;
        }
    }
    ctx->pc = 0x4EB000u;
label_4eb000:
    // 0x4eb000: 0xc13b45e  jal         func_4ED178
    ctx->pc = 0x4EB000u;
    SET_GPR_U32(ctx, 31, 0x4EB008u);
    ctx->pc = 0x4EB004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EB000u;
    // 0x4eb004: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ED178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ED178u, 0x4EB000u, 0x4EB008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EB008u;
label_4eb008:
    // 0x4eb008: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x4EB008u;
    {
        const bool branch_taken_0x4eb008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EB00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EB008u;
        // 0x4eb00c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eb008) {
            ctx->pc = 0x4EB07Cu;
            goto label_4eb07c;
        }
    }
    ctx->pc = 0x4EB010u;
label_4eb010:
    // 0x4eb010: 0xc13b46e  jal         func_4ED1B8
    ctx->pc = 0x4EB010u;
    SET_GPR_U32(ctx, 31, 0x4EB018u);
    ctx->pc = 0x4EB014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EB010u;
    // 0x4eb014: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ED1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ED1B8u, 0x4EB010u, 0x4EB018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EB018u;
label_4eb018:
    // 0x4eb018: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x4EB018u;
    {
        const bool branch_taken_0x4eb018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EB01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EB018u;
        // 0x4eb01c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eb018) {
            ctx->pc = 0x4EB07Cu;
            goto label_4eb07c;
        }
    }
    ctx->pc = 0x4EB020u;
label_4eb020:
    // 0x4eb020: 0xc13b4d6  jal         func_4ED358
    ctx->pc = 0x4EB020u;
    SET_GPR_U32(ctx, 31, 0x4EB028u);
    ctx->pc = 0x4EB024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EB020u;
    // 0x4eb024: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ED358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ED358u, 0x4EB020u, 0x4EB028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EB028u;
label_4eb028:
    // 0x4eb028: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x4EB028u;
    {
        const bool branch_taken_0x4eb028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EB02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EB028u;
        // 0x4eb02c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eb028) {
            ctx->pc = 0x4EB07Cu;
            goto label_4eb07c;
        }
    }
    ctx->pc = 0x4EB030u;
label_4eb030:
    // 0x4eb030: 0xc13b4e0  jal         func_4ED380
    ctx->pc = 0x4EB030u;
    SET_GPR_U32(ctx, 31, 0x4EB038u);
    ctx->pc = 0x4EB034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EB030u;
    // 0x4eb034: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ED380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ED380u, 0x4EB030u, 0x4EB038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EB038u;
label_4eb038:
    // 0x4eb038: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x4EB038u;
    {
        const bool branch_taken_0x4eb038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EB03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EB038u;
        // 0x4eb03c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eb038) {
            ctx->pc = 0x4EB07Cu;
            goto label_4eb07c;
        }
    }
    ctx->pc = 0x4EB040u;
label_4eb040:
    // 0x4eb040: 0xc13b4ea  jal         func_4ED3A8
    ctx->pc = 0x4EB040u;
    SET_GPR_U32(ctx, 31, 0x4EB048u);
    ctx->pc = 0x4EB044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EB040u;
    // 0x4eb044: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ED3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ED3A8u, 0x4EB040u, 0x4EB048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EB048u;
label_4eb048:
    // 0x4eb048: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4EB048u;
    {
        const bool branch_taken_0x4eb048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EB04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EB048u;
        // 0x4eb04c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eb048) {
            ctx->pc = 0x4EB07Cu;
            goto label_4eb07c;
        }
    }
    ctx->pc = 0x4EB050u;
label_4eb050:
    // 0x4eb050: 0xc13b4f4  jal         func_4ED3D0
    ctx->pc = 0x4EB050u;
    SET_GPR_U32(ctx, 31, 0x4EB058u);
    ctx->pc = 0x4EB054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EB050u;
    // 0x4eb054: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ED3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ED3D0u, 0x4EB050u, 0x4EB058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EB058u;
label_4eb058:
    // 0x4eb058: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4EB058u;
    {
        const bool branch_taken_0x4eb058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EB05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EB058u;
        // 0x4eb05c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eb058) {
            ctx->pc = 0x4EB07Cu;
            goto label_4eb07c;
        }
    }
    ctx->pc = 0x4EB060u;
label_4eb060:
    // 0x4eb060: 0xc13b536  jal         func_4ED4D8
    ctx->pc = 0x4EB060u;
    SET_GPR_U32(ctx, 31, 0x4EB068u);
    ctx->pc = 0x4EB064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EB060u;
    // 0x4eb064: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ED4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ED4D8u, 0x4EB060u, 0x4EB068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EB068u;
label_4eb068:
    // 0x4eb068: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4EB068u;
    {
        const bool branch_taken_0x4eb068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EB06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EB068u;
        // 0x4eb06c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eb068) {
            ctx->pc = 0x4EB07Cu;
            goto label_4eb07c;
        }
    }
    ctx->pc = 0x4EB070u;
label_4eb070:
    // 0x4eb070: 0xc13b466  jal         func_4ED198
    ctx->pc = 0x4EB070u;
    SET_GPR_U32(ctx, 31, 0x4EB078u);
    ctx->pc = 0x4EB074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EB070u;
    // 0x4eb074: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ED198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ED198u, 0x4EB070u, 0x4EB078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EB078u;
label_4eb078:
    // 0x4eb078: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4eb078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4eb07c:
    // 0x4eb07c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4eb07cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4eb080: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4eb080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4eb084: 0x813ac24  j           func_4EB090
    ctx->pc = 0x4EB084u;
    ctx->pc = 0x4EB088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EB084u;
    // 0x4eb088: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EB090u;
    goto label_4eb090;
    ctx->pc = 0x4EB08Cu;
    // 0x4eb08c: 0x0  nop
    ctx->pc = 0x4eb08cu;
    // NOP
label_4eb090:
    // 0x4eb090: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4eb090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4eb094: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4eb094u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4eb098: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4eb098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4eb09c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4eb09cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4eb0a0: 0x8c461208  lw          $a2, 0x1208($v0)
    ctx->pc = 0x4eb0a0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7F1208u));
    // 0x4eb0a4: 0x246911e8  addiu       $t1, $v1, 0x11E8
    ctx->pc = 0x4eb0a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 4584));
    // 0x4eb0a8: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x4eb0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F11E8u));
    // 0x4eb0ac: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x4eb0acu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x4eb0b0: 0x84c50160  lh          $a1, 0x160($a2)
    ctx->pc = 0x4eb0b0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 352)));
    // 0x4eb0b4: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4eb0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4eb0b8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4eb0b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4eb0bc: 0x246811ec  addiu       $t0, $v1, 0x11EC
    ctx->pc = 0x4eb0bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4588));
    // 0x4eb0c0: 0xaa2825  or          $a1, $a1, $t2
    ctx->pc = 0x4eb0c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 10));
    // 0x4eb0c4: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4eb0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F11ECu));
    // 0x4eb0c8: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4eb0c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4eb0cc: 0x120602d  daddu       $t4, $t1, $zero
    ctx->pc = 0x4eb0ccu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eb0d0: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x4eb0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x4eb0d4: 0x3446ffff  ori         $a2, $v0, 0xFFFF
    ctx->pc = 0x4eb0d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4eb0d8: 0x6a1824  and         $v1, $v1, $t2
    ctx->pc = 0x4eb0d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
    // 0x4eb0dc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x4eb0dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4eb0e0: 0x95250000  lhu         $a1, 0x0($t1)
    ctx->pc = 0x4eb0e0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4eb0e4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4eb0e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4eb0e8: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4eb0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x4eb0ec: 0x346bffff  ori         $t3, $v1, 0xFFFF
    ctx->pc = 0x4eb0ecu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4eb0f0: 0x30a50040  andi        $a1, $a1, 0x40
    ctx->pc = 0x4eb0f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)64);
    // 0x4eb0f4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x4eb0f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eb0f8: 0xaa2825  or          $a1, $a1, $t2
    ctx->pc = 0x4eb0f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 10));
    // 0x4eb0fc: 0xc53024  and         $a2, $a2, $a1
    ctx->pc = 0x4eb0fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x4eb100: 0xad260000  sw          $a2, 0x0($t1)
    ctx->pc = 0x4eb100u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 6));
    // 0x4eb104: 0x85220000  lh          $v0, 0x0($t1)
    ctx->pc = 0x4eb104u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4eb108: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4EB108u;
    {
        const bool branch_taken_0x4eb108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EB10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EB108u;
        // 0x4eb10c: 0x34c500ff  ori         $a1, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eb108) {
            ctx->pc = 0x4EB120u;
            goto label_4eb120;
        }
    }
    ctx->pc = 0x4EB110u;
    // 0x4eb110: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4eb110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4eb114: 0x813ac64  j           func_4EB190
    ctx->pc = 0x4EB114u;
    ctx->pc = 0x4EB118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EB114u;
    // 0x4eb118: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EB190u;
    sub_004EB190_0x4eb190(rdram, ctx, runtime); return;
    ctx->pc = 0x4EB11Cu;
    // 0x4eb11c: 0x0  nop
    ctx->pc = 0x4eb11cu;
    // NOP
label_4eb120:
    // 0x4eb120: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x4eb120u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4eb124: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x4eb124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x4eb128: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4eb128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4eb12c: 0x1621024  and         $v0, $t3, $v0
    ctx->pc = 0x4eb12cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & GPR_U64(ctx, 2));
    // 0x4eb130: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x4eb130u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x4eb134: 0x85030000  lh          $v1, 0x0($t0)
    ctx->pc = 0x4eb134u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4eb138: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4EB138u;
    {
        const bool branch_taken_0x4eb138 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4eb138) {
            ctx->pc = 0x4EB13Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EB138u;
            // 0x4eb13c: 0xad250000  sw          $a1, 0x0($t1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4EB14Cu;
            goto label_4eb14c;
        }
    }
    ctx->pc = 0x4EB140u;
    // 0x4eb140: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4eb140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4eb144: 0xc22824  and         $a1, $a2, $v0
    ctx->pc = 0x4eb144u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4eb148: 0xad250000  sw          $a1, 0x0($t1)
    ctx->pc = 0x4eb148u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 5));
label_4eb14c:
    // 0x4eb14c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4eb14cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4eb150: 0x95820000  lhu         $v0, 0x0($t4)
    ctx->pc = 0x4eb150u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4eb154: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x4eb154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4eb158: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4eb158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4eb15c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4eb15cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x4eb160: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4eb160u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4eb164: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4eb164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4eb168: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x4eb168u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
    // 0x4eb16c: 0x95820000  lhu         $v0, 0x0($t4)
    ctx->pc = 0x4eb16cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4eb170: 0x84e30148  lh          $v1, 0x148($a3)
    ctx->pc = 0x4eb170u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 328)));
    // 0x4eb174: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4EB174u;
    {
        const bool branch_taken_0x4eb174 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4EB178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EB174u;
        // 0x4eb178: 0xa4e2016a  sh          $v0, 0x16A($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 362), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eb174) {
            ctx->pc = 0x4EB184u;
            goto label_4eb184;
        }
    }
    ctx->pc = 0x4EB17Cu;
    // 0x4eb17c: 0xc13ac64  jal         func_4EB190
    ctx->pc = 0x4EB17Cu;
    SET_GPR_U32(ctx, 31, 0x4EB184u);
    ctx->pc = 0x4EB180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EB17Cu;
    // 0x4eb180: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EB190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EB190u, 0x4EB17Cu, 0x4EB184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EB184u;
label_4eb184:
    // 0x4eb184: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4eb184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4eb188: 0x3e00008  jr          $ra
    ctx->pc = 0x4EB188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EB18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EB188u;
        // 0x4eb18c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EB188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EB190u;
}
