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

// Function: sub_002E00CC
// Address: 0x2e00cc - 0x2e01e8
void sub_002E00CC_0x2e00cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E00CC_0x2e00cc");
#endif

    switch (ctx->pc) {
        case 0x2e00f8u: goto label_2e00f8;
        case 0x2e0120u: goto label_2e0120;
        case 0x2e016cu: goto label_2e016c;
        case 0x2e0184u: goto label_2e0184;
        case 0x2e01a8u: goto label_2e01a8;
        default: break;
    }

    ctx->pc = 0x2e00ccu;

    // 0x2e00cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e00ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e00d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e00d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e00d4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2e00d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2e00d8: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x2e00d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x2e00dc: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x2e00dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x2e00e0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E00E0u;
    {
        const bool branch_taken_0x2e00e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E00E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E00E0u;
        // 0x2e00e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e00e0) {
            ctx->pc = 0x2E0108u;
            goto label_2e0108;
        }
    }
    ctx->pc = 0x2E00E8u;
    // 0x2e00e8: 0xae320054  sw          $s2, 0x54($s1)
    ctx->pc = 0x2e00e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 18));
    // 0x2e00ec: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2E00ECu;
    {
        const bool branch_taken_0x2e00ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E00F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E00ECu;
        // 0x2e00f0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e00ec) {
            ctx->pc = 0x2E0154u;
            goto label_2e0154;
        }
    }
    ctx->pc = 0x2E00F4u;
    // 0x2e00f4: 0x0  nop
    ctx->pc = 0x2e00f4u;
    // NOP
label_2e00f8:
    // 0x2e00f8: 0x2251021  addu        $v0, $s1, $a1
    ctx->pc = 0x2e00f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x2e00fc: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2E00FCu;
    {
        const bool branch_taken_0x2e00fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E00FCu;
        // 0x2e0100: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e00fc) {
            ctx->pc = 0x2E0154u;
            goto label_2e0154;
        }
    }
    ctx->pc = 0x2E0104u;
    // 0x2e0104: 0x0  nop
    ctx->pc = 0x2e0104u;
    // NOP
label_2e0108:
    // 0x2e0108: 0x26280004  addiu       $t0, $s1, 0x4
    ctx->pc = 0x2e0108u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2e010c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2e010cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0110: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x2e0110u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0114: 0x26650050  addiu       $a1, $s3, 0x50
    ctx->pc = 0x2e0114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
    // 0x2e0118: 0xe51021  addu        $v0, $a3, $a1
    ctx->pc = 0x2e0118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x2e011c: 0x0  nop
    ctx->pc = 0x2e011cu;
    // NOP
label_2e0120:
    // 0x2e0120: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2e0120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e0124: 0x1072fff4  beq         $v1, $s2, . + 4 + (-0xC << 2)
    ctx->pc = 0x2E0124u;
    {
        const bool branch_taken_0x2e0124 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x2E0128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0124u;
        // 0x2e0128: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0124) {
            ctx->pc = 0x2E00F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e00f8;
        }
    }
    ctx->pc = 0x2E012Cu;
    // 0x2e012c: 0x698c0  sll         $s3, $a2, 3
    ctx->pc = 0x2e012cu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2e0130: 0x28c20026  slti        $v0, $a2, 0x26
    ctx->pc = 0x2e0130u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)38) ? 1 : 0);
    // 0x2e0134: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E0134u;
    {
        const bool branch_taken_0x2e0134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0134u;
        // 0x2e0138: 0x26650050  addiu       $a1, $s3, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0134) {
            ctx->pc = 0x2E0154u;
            goto label_2e0154;
        }
    }
    ctx->pc = 0x2E013Cu;
    // 0x2e013c: 0x2251021  addu        $v0, $s1, $a1
    ctx->pc = 0x2e013cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x2e0140: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2e0140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e0144: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x2E0144u;
    {
        const bool branch_taken_0x2e0144 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E0148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0144u;
        // 0x2e0148: 0xe51021  addu        $v0, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0144) {
            ctx->pc = 0x2E0120u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e0120;
        }
    }
    ctx->pc = 0x2E014Cu;
    // 0x2e014c: 0x1051021  addu        $v0, $t0, $a1
    ctx->pc = 0x2e014cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x2e0150: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x2e0150u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
label_2e0154:
    // 0x2e0154: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E0154u;
    {
        const bool branch_taken_0x2e0154 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0154u;
        // 0x2e0158: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0154) {
            ctx->pc = 0x2E0178u;
            goto label_2e0178;
        }
    }
    ctx->pc = 0x2E015Cu;
    // 0x2e015c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2e015cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0160: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x2e0160u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0164: 0xc0b8098  jal         func_2E0260
    ctx->pc = 0x2E0164u;
    SET_GPR_U32(ctx, 31, 0x2E016Cu);
    ctx->pc = 0x2E0168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0164u;
    // 0x2e0168: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0260u, 0x2E0164u, 0x2E016Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E016Cu;
label_2e016c:
    // 0x2e016c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e016cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0170: 0x1480000f  bnez        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x2E0170u;
    {
        const bool branch_taken_0x2e0170 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E0174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0170u;
        // 0x2e0174: 0x2711021  addu        $v0, $s3, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0170) {
            ctx->pc = 0x2E01B0u;
            goto label_2e01b0;
        }
    }
    ctx->pc = 0x2E0178u;
label_2e0178:
    // 0x2e0178: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e0178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e017c: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2E017Cu;
    SET_GPR_U32(ctx, 31, 0x2E0184u);
    ctx->pc = 0x2E0180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E017Cu;
    // 0x2e0180: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2E017Cu, 0x2E0184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0184u;
label_2e0184:
    // 0x2e0184: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2e0184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0188: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e0188u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e018c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2e018cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0190: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e0190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0194: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x2e0194u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0198: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2e0198u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e019c: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x2e019cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e01a0: 0xc0b807a  jal         func_2E01E8
    ctx->pc = 0x2E01A0u;
    SET_GPR_U32(ctx, 31, 0x2E01A8u);
    ctx->pc = 0x2E01A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E01A0u;
    // 0x2e01a4: 0x2c0502d  daddu       $t2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E01E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E01E8u, 0x2E01A0u, 0x2E01A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E01A8u;
label_2e01a8:
    // 0x2e01a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e01a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e01ac: 0x2711021  addu        $v0, $s3, $s1
    ctx->pc = 0x2e01acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
label_2e01b0:
    // 0x2e01b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2e01b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e01b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e01b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e01b8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2e01b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e01bc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2e01bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e01c0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2e01c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e01c4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2e01c4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e01c8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2e01c8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e01cc: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x2e01ccu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e01d0: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x2e01d0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e01d4: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2e01d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e01d8: 0xac440050  sw          $a0, 0x50($v0)
    ctx->pc = 0x2e01d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 4));
    // 0x2e01dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2E01DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E01E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E01DCu;
        // 0x2e01e0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E01DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E01E4u;
    // 0x2e01e4: 0x0  nop
    ctx->pc = 0x2e01e4u;
    // NOP
    ctx->pc = 0x2e01e8u;
}
