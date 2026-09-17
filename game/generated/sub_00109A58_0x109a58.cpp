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

// Function: sub_00109A58
// Address: 0x109a58 - 0x109bf8
void sub_00109A58_0x109a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00109A58_0x109a58");
#endif

    switch (ctx->pc) {
        case 0x109a90u: goto label_109a90;
        case 0x109a98u: goto label_109a98;
        case 0x109aa0u: goto label_109aa0;
        case 0x109aacu: goto label_109aac;
        case 0x109ac8u: goto label_109ac8;
        case 0x109aecu: goto label_109aec;
        case 0x109afcu: goto label_109afc;
        case 0x109b08u: goto label_109b08;
        case 0x109b18u: goto label_109b18;
        case 0x109b28u: goto label_109b28;
        case 0x109b34u: goto label_109b34;
        case 0x109b40u: goto label_109b40;
        case 0x109b48u: goto label_109b48;
        case 0x109b54u: goto label_109b54;
        case 0x109b64u: goto label_109b64;
        case 0x109b84u: goto label_109b84;
        default: break;
    }

    ctx->pc = 0x109a58u;

    // 0x109a58: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x109a58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x109a5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x109a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x109a60: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x109a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x109a64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x109a64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109a68: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x109a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x109a6c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x109a6cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109a70: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x109a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x109a74: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x109a74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109a78: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x109a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x109a7c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x109a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x109a80: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x109a80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109a84: 0xae00012c  sw          $zero, 0x12C($s0)
    ctx->pc = 0x109a84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 0));
    // 0x109a88: 0xc042ada  jal         func_10AB68
    ctx->pc = 0x109A88u;
    SET_GPR_U32(ctx, 31, 0x109A90u);
    ctx->pc = 0x109A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109A88u;
    // 0x109a8c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10AB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10AB68u, 0x109A88u, 0x109A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109A90u;
label_109a90:
    // 0x109a90: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x109A90u;
    {
        const bool branch_taken_0x109a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109A90u;
        // 0x109a94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109a90) {
            ctx->pc = 0x109AA4u;
            goto label_109aa4;
        }
    }
    ctx->pc = 0x109A98u;
label_109a98:
    // 0x109a98: 0xc042a80  jal         func_10AA00
    ctx->pc = 0x109A98u;
    SET_GPR_U32(ctx, 31, 0x109AA0u);
    ctx->pc = 0x109A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109A98u;
    // 0x109a9c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10AA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10AA00u, 0x109A98u, 0x109AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109AA0u;
label_109aa0:
    // 0x109aa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x109aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_109aa4:
    // 0x109aa4: 0xc0421dc  jal         func_108770
    ctx->pc = 0x109AA4u;
    SET_GPR_U32(ctx, 31, 0x109AACu);
    ctx->pc = 0x109AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109AA4u;
    // 0x109aa8: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108770u, 0x109AA4u, 0x109AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109AACu;
label_109aac:
    // 0x109aac: 0x10520004  beq         $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x109AACu;
    {
        const bool branch_taken_0x109aac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x109AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109AACu;
        // 0x109ab0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109aac) {
            ctx->pc = 0x109AC0u;
            goto label_109ac0;
        }
    }
    ctx->pc = 0x109AB4u;
    // 0x109ab4: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x109ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
    // 0x109ab8: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x109AB8u;
    {
        const bool branch_taken_0x109ab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x109ab8) {
            ctx->pc = 0x109A98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109a98;
        }
    }
    ctx->pc = 0x109AC0u;
label_109ac0:
    // 0x109ac0: 0xc0421dc  jal         func_108770
    ctx->pc = 0x109AC0u;
    SET_GPR_U32(ctx, 31, 0x109AC8u);
    ctx->pc = 0x109AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109AC0u;
    // 0x109ac4: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108770u, 0x109AC0u, 0x109AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109AC8u;
label_109ac8:
    // 0x109ac8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x109ac8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109acc: 0x2642feff  addiu       $v0, $s2, -0x101
    ctx->pc = 0x109accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967039));
    // 0x109ad0: 0x2c4200af  sltiu       $v0, $v0, 0xAF
    ctx->pc = 0x109ad0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)175) ? 1 : 0);
    // 0x109ad4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x109AD4u;
    {
        const bool branch_taken_0x109ad4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x109AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109AD4u;
        // 0x109ad8: 0x3c050015  lui         $a1, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109ad4) {
            ctx->pc = 0x109AF4u;
            goto label_109af4;
        }
    }
    ctx->pc = 0x109ADCu;
    // 0x109adc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x109adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109ae0: 0x24a5dae8  addiu       $a1, $a1, -0x2518
    ctx->pc = 0x109ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957800));
    // 0x109ae4: 0xc0417f2  jal         func_105FC8
    ctx->pc = 0x109AE4u;
    SET_GPR_U32(ctx, 31, 0x109AECu);
    ctx->pc = 0x109AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109AE4u;
    // 0x109ae8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105FC8u, 0x109AE4u, 0x109AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109AECu;
label_109aec:
    // 0x109aec: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x109AECu;
    {
        const bool branch_taken_0x109aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109AECu;
        // 0x109af0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109aec) {
            ctx->pc = 0x109BD8u;
            goto label_109bd8;
        }
    }
    ctx->pc = 0x109AF4u;
label_109af4:
    // 0x109af4: 0xc042ad8  jal         func_10AB60
    ctx->pc = 0x109AF4u;
    SET_GPR_U32(ctx, 31, 0x109AFCu);
    ctx->pc = 0x109AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109AF4u;
    // 0x109af8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10AB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10AB60u, 0x109AF4u, 0x109AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109AFCu;
label_109afc:
    // 0x109afc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x109afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109b00: 0xc0421a2  jal         func_108688
    ctx->pc = 0x109B00u;
    SET_GPR_U32(ctx, 31, 0x109B08u);
    ctx->pc = 0x109B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109B00u;
    // 0x109b04: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108688u, 0x109B00u, 0x109B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109B08u;
label_109b08:
    // 0x109b08: 0xae0201c4  sw          $v0, 0x1C4($s0)
    ctx->pc = 0x109b08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 452), GPR_U32(ctx, 2));
    // 0x109b0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x109b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109b10: 0xc0421a2  jal         func_108688
    ctx->pc = 0x109B10u;
    SET_GPR_U32(ctx, 31, 0x109B18u);
    ctx->pc = 0x109B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109B10u;
    // 0x109b14: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108688u, 0x109B10u, 0x109B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109B18u;
label_109b18:
    // 0x109b18: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x109B18u;
    {
        const bool branch_taken_0x109b18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x109B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109B18u;
        // 0x109b1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109b18) {
            ctx->pc = 0x109B5Cu;
            goto label_109b5c;
        }
    }
    ctx->pc = 0x109B20u;
    // 0x109b20: 0xc0421a2  jal         func_108688
    ctx->pc = 0x109B20u;
    SET_GPR_U32(ctx, 31, 0x109B28u);
    ctx->pc = 0x109B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109B20u;
    // 0x109b24: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108688u, 0x109B20u, 0x109B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109B28u;
label_109b28:
    // 0x109b28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x109b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109b2c: 0xc042a80  jal         func_10AA00
    ctx->pc = 0x109B2Cu;
    SET_GPR_U32(ctx, 31, 0x109B34u);
    ctx->pc = 0x109B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109B2Cu;
    // 0x109b30: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10AA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10AA00u, 0x109B2Cu, 0x109B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109B34u;
label_109b34:
    // 0x109b34: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x109B34u;
    {
        const bool branch_taken_0x109b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109B34u;
        // 0x109b38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109b34) {
            ctx->pc = 0x109B4Cu;
            goto label_109b4c;
        }
    }
    ctx->pc = 0x109B3Cu;
    // 0x109b3c: 0x0  nop
    ctx->pc = 0x109b3cu;
    // NOP
label_109b40:
    // 0x109b40: 0xc042a80  jal         func_10AA00
    ctx->pc = 0x109B40u;
    SET_GPR_U32(ctx, 31, 0x109B48u);
    ctx->pc = 0x109B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109B40u;
    // 0x109b44: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10AA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10AA00u, 0x109B40u, 0x109B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109B48u;
label_109b48:
    // 0x109b48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x109b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_109b4c:
    // 0x109b4c: 0xc0421a2  jal         func_108688
    ctx->pc = 0x109B4Cu;
    SET_GPR_U32(ctx, 31, 0x109B54u);
    ctx->pc = 0x109B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109B4Cu;
    // 0x109b50: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108688u, 0x109B4Cu, 0x109B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109B54u;
label_109b54:
    // 0x109b54: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x109B54u;
    {
        const bool branch_taken_0x109b54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x109B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109B54u;
        // 0x109b58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109b54) {
            ctx->pc = 0x109B40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109b40;
        }
    }
    ctx->pc = 0x109B5Cu;
label_109b5c:
    // 0x109b5c: 0xc04208a  jal         func_108228
    ctx->pc = 0x109B5Cu;
    SET_GPR_U32(ctx, 31, 0x109B64u);
    ctx->pc = 0x109B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109B5Cu;
    // 0x109b60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108228u, 0x109B5Cu, 0x109B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109B64u;
label_109b64:
    // 0x109b64: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x109b64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109b68: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x109b68u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
    // 0x109b6c: 0x8e02012c  lw          $v0, 0x12C($s0)
    ctx->pc = 0x109b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
    // 0x109b70: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x109B70u;
    {
        const bool branch_taken_0x109b70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x109B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109B70u;
        // 0x109b74: 0x3c050015  lui         $a1, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109b70) {
            ctx->pc = 0x109B8Cu;
            goto label_109b8c;
        }
    }
    ctx->pc = 0x109B78u;
    // 0x109b78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x109b78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109b7c: 0xc0417dc  jal         func_105F70
    ctx->pc = 0x109B7Cu;
    SET_GPR_U32(ctx, 31, 0x109B84u);
    ctx->pc = 0x109B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109B7Cu;
    // 0x109b80: 0x24a5db10  addiu       $a1, $a1, -0x24F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105F70u, 0x109B7Cu, 0x109B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109B84u;
label_109b84:
    // 0x109b84: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x109B84u;
    {
        const bool branch_taken_0x109b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109B84u;
        // 0x109b88: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109b84) {
            ctx->pc = 0x109BD8u;
            goto label_109bd8;
        }
    }
    ctx->pc = 0x109B8Cu;
label_109b8c:
    // 0x109b8c: 0x8e02013c  lw          $v0, 0x13C($s0)
    ctx->pc = 0x109b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
    // 0x109b90: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x109b90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x109b94: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x109b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x109b98: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x109b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x109b9c: 0x622818  mult        $a1, $v1, $v0
    ctx->pc = 0x109b9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x109ba0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x109ba0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109ba4: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x109ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x109ba8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x109ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x109bac: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x109bacu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x109bb0: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x109bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x109bb4: 0xae0401c0  sw          $a0, 0x1C0($s0)
    ctx->pc = 0x109bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 4));
    // 0x109bb8: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x109bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x109bbc: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x109bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x109bc0: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x109bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x109bc4: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x109bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x109bc8: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x109bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x109bcc: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x109bccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x109bd0: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x109bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x109bd4: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x109bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_109bd8:
    // 0x109bd8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x109bd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x109bdc: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x109bdcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x109be0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x109be0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x109be4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x109be4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x109be8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x109be8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x109bec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x109becu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x109bf0: 0x3e00008  jr          $ra
    ctx->pc = 0x109BF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x109BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109BF0u;
        // 0x109bf4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109BF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x109BF8u;
}
