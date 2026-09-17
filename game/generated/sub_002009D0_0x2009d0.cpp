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

// Function: sub_002009D0
// Address: 0x2009d0 - 0x200af8
void sub_002009D0_0x2009d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002009D0_0x2009d0");
#endif

    switch (ctx->pc) {
        case 0x2009f8u: goto label_2009f8;
        case 0x200a04u: goto label_200a04;
        case 0x200a10u: goto label_200a10;
        case 0x200a18u: goto label_200a18;
        case 0x200a34u: goto label_200a34;
        case 0x200a40u: goto label_200a40;
        case 0x200a48u: goto label_200a48;
        case 0x200a60u: goto label_200a60;
        case 0x200a80u: goto label_200a80;
        case 0x200a8cu: goto label_200a8c;
        default: break;
    }

    ctx->pc = 0x2009d0u;

    // 0x2009d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2009d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2009d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2009d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2009d8: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x2009d8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    // 0x2009dc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2009dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2009e0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2009e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2009e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2009e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2009e8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2009e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2009ec: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2009ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2009f0: 0xc09d47e  jal         func_2751F8
    ctx->pc = 0x2009F0u;
    SET_GPR_U32(ctx, 31, 0x2009F8u);
    ctx->pc = 0x2009F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2009F0u;
    // 0x2009f4: 0x261088d0  addiu       $s0, $s0, -0x7730 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2751F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2751F8u, 0x2009F0u, 0x2009F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2009F8u;
label_2009f8:
    // 0x2009f8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2009f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2009fc: 0xc09d486  jal         func_275218
    ctx->pc = 0x2009FCu;
    SET_GPR_U32(ctx, 31, 0x200A04u);
    ctx->pc = 0x200A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2009FCu;
    // 0x200a00: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275218u, 0x2009FCu, 0x200A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200A04u;
label_200a04:
    // 0x200a04: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x200a04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x200a08: 0xc080224  jal         func_200890
    ctx->pc = 0x200A08u;
    SET_GPR_U32(ctx, 31, 0x200A10u);
    ctx->pc = 0x200A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200A08u;
    // 0x200a0c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200890u, 0x200A08u, 0x200A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200A10u;
label_200a10:
    // 0x200a10: 0xc080224  jal         func_200890
    ctx->pc = 0x200A10u;
    SET_GPR_U32(ctx, 31, 0x200A18u);
    ctx->pc = 0x200A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200A10u;
    // 0x200a14: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200890u, 0x200A10u, 0x200A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200A18u;
label_200a18:
    // 0x200a18: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x200a18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x200a1c: 0x8c448880  lw          $a0, -0x7780($v0)
    ctx->pc = 0x200a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A8880u));
    // 0x200a20: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x200a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x200a24: 0x10830012  beq         $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x200A24u;
    {
        const bool branch_taken_0x200a24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x200a24) {
            ctx->pc = 0x200A70u;
            goto label_200a70;
        }
    }
    ctx->pc = 0x200A2Cu;
    // 0x200a2c: 0xc09d47a  jal         func_2751E8
    ctx->pc = 0x200A2Cu;
    SET_GPR_U32(ctx, 31, 0x200A34u);
    ctx->pc = 0x200A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200A2Cu;
    // 0x200a30: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2751E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2751E8u, 0x200A2Cu, 0x200A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200A34u;
label_200a34:
    // 0x200a34: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x200a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200a38: 0xc09d480  jal         func_275200
    ctx->pc = 0x200A38u;
    SET_GPR_U32(ctx, 31, 0x200A40u);
    ctx->pc = 0x200A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200A38u;
    // 0x200a3c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275200u, 0x200A38u, 0x200A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200A40u;
label_200a40:
    // 0x200a40: 0x1a40000b  blez        $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x200A40u;
    {
        const bool branch_taken_0x200a40 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x200A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200A40u;
        // 0x200a44: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200a40) {
            ctx->pc = 0x200A70u;
            goto label_200a70;
        }
    }
    ctx->pc = 0x200A48u;
label_200a48:
    // 0x200a48: 0x8e020898  lw          $v0, 0x898($s0)
    ctx->pc = 0x200a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2200)));
    // 0x200a4c: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x200a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x200a50: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x200A50u;
    {
        const bool branch_taken_0x200a50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x200a50) {
            ctx->pc = 0x200A54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200A50u;
            // 0x200a54: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200A64u;
            goto label_200a64;
        }
    }
    ctx->pc = 0x200A58u;
    // 0x200a58: 0xc080224  jal         func_200890
    ctx->pc = 0x200A58u;
    SET_GPR_U32(ctx, 31, 0x200A60u);
    ctx->pc = 0x200A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200A58u;
    // 0x200a5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200890u, 0x200A58u, 0x200A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200A60u;
label_200a60:
    // 0x200a60: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x200a60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_200a64:
    // 0x200a64: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x200a64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x200a68: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x200A68u;
    {
        const bool branch_taken_0x200a68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x200A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200A68u;
        // 0x200a6c: 0x261008d0  addiu       $s0, $s0, 0x8D0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200a68) {
            ctx->pc = 0x200A48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_200a48;
        }
    }
    ctx->pc = 0x200A70u;
label_200a70:
    // 0x200a70: 0x1a800009  blez        $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x200A70u;
    {
        const bool branch_taken_0x200a70 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x200A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200A70u;
        // 0x200a74: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200a70) {
            ctx->pc = 0x200A98u;
            goto label_200a98;
        }
    }
    ctx->pc = 0x200A78u;
    // 0x200a78: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x200a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200a7c: 0x0  nop
    ctx->pc = 0x200a7cu;
    // NOP
label_200a80:
    // 0x200a80: 0x267308d0  addiu       $s3, $s3, 0x8D0
    ctx->pc = 0x200a80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2256));
    // 0x200a84: 0xc080224  jal         func_200890
    ctx->pc = 0x200A84u;
    SET_GPR_U32(ctx, 31, 0x200A8Cu);
    ctx->pc = 0x200A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200A84u;
    // 0x200a88: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200890u, 0x200A84u, 0x200A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200A8Cu;
label_200a8c:
    // 0x200a8c: 0x214102a  slt         $v0, $s0, $s4
    ctx->pc = 0x200a8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x200a90: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x200A90u;
    {
        const bool branch_taken_0x200a90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x200A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200A90u;
        // 0x200a94: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200a90) {
            ctx->pc = 0x200A80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_200a80;
        }
    }
    ctx->pc = 0x200A98u;
label_200a98:
    // 0x200a98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x200a98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x200a9c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x200a9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x200aa0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x200aa0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x200aa4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x200aa4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x200aa8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x200aa8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x200aac: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x200aacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x200ab0: 0x3e00008  jr          $ra
    ctx->pc = 0x200AB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200AB0u;
        // 0x200ab4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200AB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200AB8u;
    // 0x200ab8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x200ab8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200abc: 0x538c0  sll         $a3, $a1, 3
    ctx->pc = 0x200abcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x200ac0: 0x8cc30050  lw          $v1, 0x50($a2)
    ctx->pc = 0x200ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 80)));
    // 0x200ac4: 0x8c620234  lw          $v0, 0x234($v1)
    ctx->pc = 0x200ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 564)));
    // 0x200ac8: 0xa2282a  slt         $a1, $a1, $v0
    ctx->pc = 0x200ac8u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x200acc: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x200ACCu;
    {
        const bool branch_taken_0x200acc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x200AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200ACCu;
        // 0x200ad0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200acc) {
            ctx->pc = 0x200AECu;
            goto label_200aec;
        }
    }
    ctx->pc = 0x200AD4u;
    // 0x200ad4: 0x8c620230  lw          $v0, 0x230($v1)
    ctx->pc = 0x200ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 560)));
    // 0x200ad8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x200ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x200adc: 0xa4c300a6  sh          $v1, 0xA6($a2)
    ctx->pc = 0x200adcu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 166), (uint16_t)GPR_U32(ctx, 3));
    // 0x200ae0: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x200ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x200ae4: 0xa0c4019f  sb          $a0, 0x19F($a2)
    ctx->pc = 0x200ae4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 415), (uint8_t)GPR_U32(ctx, 4));
    // 0x200ae8: 0xacc20140  sw          $v0, 0x140($a2)
    ctx->pc = 0x200ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 320), GPR_U32(ctx, 2));
label_200aec:
    // 0x200aec: 0x3e00008  jr          $ra
    ctx->pc = 0x200AECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200AECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200AF4u;
    // 0x200af4: 0x0  nop
    ctx->pc = 0x200af4u;
    // NOP
    ctx->pc = 0x200af8u;
}
