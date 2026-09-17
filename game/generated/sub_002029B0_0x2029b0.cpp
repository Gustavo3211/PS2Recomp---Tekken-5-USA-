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

// Function: sub_002029B0
// Address: 0x2029b0 - 0x202c10
void sub_002029B0_0x2029b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002029B0_0x2029b0");
#endif

    switch (ctx->pc) {
        case 0x2029d0u: goto label_2029d0;
        case 0x202a88u: goto label_202a88;
        default: break;
    }

    ctx->pc = 0x2029b0u;

    // 0x2029b0: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x2029b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2029b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2029b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2029b8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2029b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2029bc: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2029BCu;
    {
        const bool branch_taken_0x2029bc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2029C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2029BCu;
        // 0x2029c0: 0x2ca90015  sltiu       $t1, $a1, 0x15 (Delay Slot)
        SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2029bc) {
            ctx->pc = 0x2029D0u;
            goto label_2029d0;
        }
    }
    ctx->pc = 0x2029C4u;
    // 0x2029c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2029C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2029C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2029C4u;
        // 0x2029c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2029C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2029CCu;
    // 0x2029cc: 0x0  nop
    ctx->pc = 0x2029ccu;
    // NOP
label_2029d0:
    // 0x2029d0: 0x1120008f  beqz        $t1, . + 4 + (0x8F << 2)
    ctx->pc = 0x2029D0u;
    {
        const bool branch_taken_0x2029d0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x2029D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2029D0u;
        // 0x2029d4: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2029d0) {
            ctx->pc = 0x202C10u;
            return;
        }
    }
    ctx->pc = 0x2029D8u;
    // 0x2029d8: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x2029d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x2029dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2029dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2029e0: 0x8c633d10  lw          $v1, 0x3D10($v1)
    ctx->pc = 0x2029e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15632)));
    // 0x2029e4: 0x600008  jr          $v1
    ctx->pc = 0x2029E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2029F0u: goto label_2029f0;
            case 0x202A48u: goto label_202a48;
            case 0x202A70u: goto label_202a70;
            case 0x202A98u: goto label_202a98;
            case 0x202AC8u: goto label_202ac8;
            case 0x202AF8u: goto label_202af8;
            case 0x202B28u: goto label_202b28;
            case 0x202B30u: goto label_202b30;
            case 0x202B40u: goto label_202b40;
            case 0x202B58u: goto label_202b58;
            case 0x202B70u: goto label_202b70;
            case 0x202B88u: goto label_202b88;
            case 0x202BA0u: goto label_202ba0;
            case 0x202BD0u: goto label_202bd0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2029E4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2029ECu;
    // 0x2029ec: 0x0  nop
    ctx->pc = 0x2029ecu;
    // NOP
label_2029f0:
    // 0x2029f0: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x2029f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2029f4: 0x28620056  slti        $v0, $v1, 0x56
    ctx->pc = 0x2029f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)86) ? 1 : 0);
    // 0x2029f8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2029F8u;
    {
        const bool branch_taken_0x2029f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2029FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2029F8u;
        // 0x2029fc: 0x2862006b  slti        $v0, $v1, 0x6B (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)107) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2029f8) {
            ctx->pc = 0x202A38u;
            goto label_202a38;
        }
    }
    ctx->pc = 0x202A00u;
    // 0x202a00: 0x28620051  slti        $v0, $v1, 0x51
    ctx->pc = 0x202a00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)81) ? 1 : 0);
    // 0x202a04: 0x50400089  beql        $v0, $zero, . + 4 + (0x89 << 2)
    ctx->pc = 0x202A04u;
    {
        const bool branch_taken_0x202a04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x202a04) {
            ctx->pc = 0x202A08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202A04u;
            // 0x202a08: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x202C2Cu;
            return;
        }
    }
    ctx->pc = 0x202A0Cu;
    // 0x202a0c: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x202a0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x202a10: 0x54400083  bnel        $v0, $zero, . + 4 + (0x83 << 2)
    ctx->pc = 0x202A10u;
    {
        const bool branch_taken_0x202a10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x202a10) {
            ctx->pc = 0x202A14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202A10u;
            // 0x202a14: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x202C20u;
            return;
        }
    }
    ctx->pc = 0x202A18u;
    // 0x202a18: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x202a18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x202a1c: 0x54400083  bnel        $v0, $zero, . + 4 + (0x83 << 2)
    ctx->pc = 0x202A1Cu;
    {
        const bool branch_taken_0x202a1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x202a1c) {
            ctx->pc = 0x202A20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202A1Cu;
            // 0x202a20: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x202C2Cu;
            return;
        }
    }
    ctx->pc = 0x202A24u;
    // 0x202a24: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x202a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x202a28: 0x50620080  beql        $v1, $v0, . + 4 + (0x80 << 2)
    ctx->pc = 0x202A28u;
    {
        const bool branch_taken_0x202a28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x202a28) {
            ctx->pc = 0x202A2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202A28u;
            // 0x202a2c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x202C2Cu;
            return;
        }
    }
    ctx->pc = 0x202A30u;
    // 0x202a30: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x202A30u;
    {
        const bool branch_taken_0x202a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202A30u;
        // 0x202a34: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202a30) {
            ctx->pc = 0x202C20u;
            return;
        }
    }
    ctx->pc = 0x202A38u;
label_202a38:
    // 0x202a38: 0x50400079  beql        $v0, $zero, . + 4 + (0x79 << 2)
    ctx->pc = 0x202A38u;
    {
        const bool branch_taken_0x202a38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x202a38) {
            ctx->pc = 0x202A3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202A38u;
            // 0x202a3c: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x202C20u;
            return;
        }
    }
    ctx->pc = 0x202A40u;
    // 0x202a40: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x202A40u;
    {
        const bool branch_taken_0x202a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202A40u;
        // 0x202a44: 0x28620058  slti        $v0, $v1, 0x58 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)88) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x202a40) {
            ctx->pc = 0x202BFCu;
            goto label_202bfc;
        }
    }
    ctx->pc = 0x202A48u;
label_202a48:
    // 0x202a48: 0x90860000  lbu         $a2, 0x0($a0)
    ctx->pc = 0x202a48u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x202a4c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x202a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x202a50: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x202a50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x202a54: 0x50620075  beql        $v1, $v0, . + 4 + (0x75 << 2)
    ctx->pc = 0x202A54u;
    {
        const bool branch_taken_0x202a54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x202a54) {
            ctx->pc = 0x202A58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202A54u;
            // 0x202a58: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x202C2Cu;
            return;
        }
    }
    ctx->pc = 0x202A5Cu;
    // 0x202a5c: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x202a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x202a60: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x202A60u;
    {
        const bool branch_taken_0x202a60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x202a60) {
            ctx->pc = 0x202A64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202A60u;
            // 0x202a64: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x202A7Cu;
            goto label_202a7c;
        }
    }
    ctx->pc = 0x202A68u;
    // 0x202a68: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x202A68u;
    {
        const bool branch_taken_0x202a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202A68u;
        // 0x202a6c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202a68) {
            ctx->pc = 0x202C2Cu;
            return;
        }
    }
    ctx->pc = 0x202A70u;
label_202a70:
    // 0x202a70: 0x90860000  lbu         $a2, 0x0($a0)
    ctx->pc = 0x202a70u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x202a74: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x202a74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x202a78: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x202a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_202a7c:
    // 0x202a7c: 0x5062006b  beql        $v1, $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x202A7Cu;
    {
        const bool branch_taken_0x202a7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x202a7c) {
            ctx->pc = 0x202A80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202A7Cu;
            // 0x202a80: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x202C2Cu;
            return;
        }
    }
    ctx->pc = 0x202A84u;
    // 0x202a84: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x202a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_202a88:
    // 0x202a88: 0x54620065  bnel        $v1, $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x202A88u;
    {
        const bool branch_taken_0x202a88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x202a88) {
            ctx->pc = 0x202A8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202A88u;
            // 0x202a8c: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x202C20u;
            return;
        }
    }
    ctx->pc = 0x202A90u;
    // 0x202a90: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x202A90u;
    {
        const bool branch_taken_0x202a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202A90u;
        // 0x202a94: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202a90) {
            ctx->pc = 0x202C2Cu;
            return;
        }
    }
    ctx->pc = 0x202A98u;
label_202a98:
    // 0x202a98: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x202a98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x202a9c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x202a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x202aa0: 0x50620062  beql        $v1, $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x202AA0u;
    {
        const bool branch_taken_0x202aa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x202aa0) {
            ctx->pc = 0x202AA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202AA0u;
            // 0x202aa4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x202C2Cu;
            return;
        }
    }
    ctx->pc = 0x202AA8u;
    // 0x202aa8: 0x2862000c  slti        $v0, $v1, 0xC
    ctx->pc = 0x202aa8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x202aac: 0x5440005c  bnel        $v0, $zero, . + 4 + (0x5C << 2)
    ctx->pc = 0x202AACu;
    {
        const bool branch_taken_0x202aac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x202aac) {
            ctx->pc = 0x202AB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202AACu;
            // 0x202ab0: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x202C20u;
            return;
        }
    }
    ctx->pc = 0x202AB4u;
    // 0x202ab4: 0x28620051  slti        $v0, $v1, 0x51
    ctx->pc = 0x202ab4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)81) ? 1 : 0);
    // 0x202ab8: 0x50400059  beql        $v0, $zero, . + 4 + (0x59 << 2)
    ctx->pc = 0x202AB8u;
    {
        const bool branch_taken_0x202ab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x202ab8) {
            ctx->pc = 0x202ABCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202AB8u;
            // 0x202abc: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x202C20u;
            return;
        }
    }
    ctx->pc = 0x202AC0u;
    // 0x202ac0: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x202AC0u;
    {
        const bool branch_taken_0x202ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202AC0u;
        // 0x202ac4: 0x28620042  slti        $v0, $v1, 0x42 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)66) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x202ac0) {
            ctx->pc = 0x202BFCu;
            goto label_202bfc;
        }
    }
    ctx->pc = 0x202AC8u;
label_202ac8:
    // 0x202ac8: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x202ac8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x202acc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x202accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x202ad0: 0x50620056  beql        $v1, $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x202AD0u;
    {
        const bool branch_taken_0x202ad0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x202ad0) {
            ctx->pc = 0x202AD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202AD0u;
            // 0x202ad4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x202C2Cu;
            return;
        }
    }
    ctx->pc = 0x202AD8u;
    // 0x202ad8: 0x28620008  slti        $v0, $v1, 0x8
    ctx->pc = 0x202ad8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x202adc: 0x54400050  bnel        $v0, $zero, . + 4 + (0x50 << 2)
    ctx->pc = 0x202ADCu;
    {
        const bool branch_taken_0x202adc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x202adc) {
            ctx->pc = 0x202AE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202ADCu;
            // 0x202ae0: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x202C20u;
            return;
        }
    }
    ctx->pc = 0x202AE4u;
    // 0x202ae4: 0x28620042  slti        $v0, $v1, 0x42
    ctx->pc = 0x202ae4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)66) ? 1 : 0);
    // 0x202ae8: 0x5040004d  beql        $v0, $zero, . + 4 + (0x4D << 2)
    ctx->pc = 0x202AE8u;
    {
        const bool branch_taken_0x202ae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x202ae8) {
            ctx->pc = 0x202AECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202AE8u;
            // 0x202aec: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x202C20u;
            return;
        }
    }
    ctx->pc = 0x202AF0u;
    // 0x202af0: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x202AF0u;
    {
        const bool branch_taken_0x202af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202AF0u;
        // 0x202af4: 0x28620033  slti        $v0, $v1, 0x33 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)51) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x202af0) {
            ctx->pc = 0x202BFCu;
            goto label_202bfc;
        }
    }
    ctx->pc = 0x202AF8u;
label_202af8:
    // 0x202af8: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x202af8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x202afc: 0x50600048  beql        $v1, $zero, . + 4 + (0x48 << 2)
    ctx->pc = 0x202AFCu;
    {
        const bool branch_taken_0x202afc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x202afc) {
            ctx->pc = 0x202B00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202AFCu;
            // 0x202b00: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x202C20u;
            return;
        }
    }
    ctx->pc = 0x202B04u;
    // 0x202b04: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x202b04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x202b08: 0x54400048  bnel        $v0, $zero, . + 4 + (0x48 << 2)
    ctx->pc = 0x202B08u;
    {
        const bool branch_taken_0x202b08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x202b08) {
            ctx->pc = 0x202B0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202B08u;
            // 0x202b0c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x202C2Cu;
            return;
        }
    }
    ctx->pc = 0x202B10u;
    // 0x202b10: 0x2862001f  slti        $v0, $v1, 0x1F
    ctx->pc = 0x202b10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x202b14: 0x50400042  beql        $v0, $zero, . + 4 + (0x42 << 2)
    ctx->pc = 0x202B14u;
    {
        const bool branch_taken_0x202b14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x202b14) {
            ctx->pc = 0x202B18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202B14u;
            // 0x202b18: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x202C20u;
            return;
        }
    }
    ctx->pc = 0x202B1Cu;
    // 0x202b1c: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x202B1Cu;
    {
        const bool branch_taken_0x202b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202B1Cu;
        // 0x202b20: 0x2862001b  slti        $v0, $v1, 0x1B (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)27) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x202b1c) {
            ctx->pc = 0x202BFCu;
            goto label_202bfc;
        }
    }
    ctx->pc = 0x202B24u;
    // 0x202b24: 0x0  nop
    ctx->pc = 0x202b24u;
    // NOP
label_202b28:
    // 0x202b28: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x202B28u;
    {
        const bool branch_taken_0x202b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202B28u;
        // 0x202b2c: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202b28) {
            ctx->pc = 0x202BFCu;
            goto label_202bfc;
        }
    }
    ctx->pc = 0x202B30u;
label_202b30:
    // 0x202b30: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x202b30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x202b34: 0x1000ffd4  b           . + 4 + (-0x2C << 2)
    ctx->pc = 0x202B34u;
    {
        const bool branch_taken_0x202b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202B34u;
        // 0x202b38: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202b34) {
            ctx->pc = 0x202A88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202a88;
        }
    }
    ctx->pc = 0x202B3Cu;
    // 0x202b3c: 0x0  nop
    ctx->pc = 0x202b3cu;
    // NOP
label_202b40:
    // 0x202b40: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x202b40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x202b44: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x202b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x202b48: 0x50620038  beql        $v1, $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x202B48u;
    {
        const bool branch_taken_0x202b48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x202b48) {
            ctx->pc = 0x202B4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202B48u;
            // 0x202b4c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x202C2Cu;
            return;
        }
    }
    ctx->pc = 0x202B50u;
    // 0x202b50: 0x1000ffcd  b           . + 4 + (-0x33 << 2)
    ctx->pc = 0x202B50u;
    {
        const bool branch_taken_0x202b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202B50u;
        // 0x202b54: 0x24020031  addiu       $v0, $zero, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202b50) {
            ctx->pc = 0x202A88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202a88;
        }
    }
    ctx->pc = 0x202B58u;
label_202b58:
    // 0x202b58: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x202b58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x202b5c: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x202b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x202b60: 0x50620032  beql        $v1, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x202B60u;
    {
        const bool branch_taken_0x202b60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x202b60) {
            ctx->pc = 0x202B64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202B60u;
            // 0x202b64: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x202C2Cu;
            return;
        }
    }
    ctx->pc = 0x202B68u;
    // 0x202b68: 0x1000ffc7  b           . + 4 + (-0x39 << 2)
    ctx->pc = 0x202B68u;
    {
        const bool branch_taken_0x202b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202B68u;
        // 0x202b6c: 0x2402002d  addiu       $v0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202b68) {
            ctx->pc = 0x202A88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202a88;
        }
    }
    ctx->pc = 0x202B70u;
label_202b70:
    // 0x202b70: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x202b70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x202b74: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x202b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x202b78: 0x5062002c  beql        $v1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x202B78u;
    {
        const bool branch_taken_0x202b78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x202b78) {
            ctx->pc = 0x202B7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202B78u;
            // 0x202b7c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x202C2Cu;
            return;
        }
    }
    ctx->pc = 0x202B80u;
    // 0x202b80: 0x1000ffc1  b           . + 4 + (-0x3F << 2)
    ctx->pc = 0x202B80u;
    {
        const bool branch_taken_0x202b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202B80u;
        // 0x202b84: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202b80) {
            ctx->pc = 0x202A88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202a88;
        }
    }
    ctx->pc = 0x202B88u;
label_202b88:
    // 0x202b88: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x202b88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x202b8c: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x202b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x202b90: 0x50620026  beql        $v1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x202B90u;
    {
        const bool branch_taken_0x202b90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x202b90) {
            ctx->pc = 0x202B94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202B90u;
            // 0x202b94: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x202C2Cu;
            return;
        }
    }
    ctx->pc = 0x202B98u;
    // 0x202b98: 0x1000ffbb  b           . + 4 + (-0x45 << 2)
    ctx->pc = 0x202B98u;
    {
        const bool branch_taken_0x202b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202B98u;
        // 0x202b9c: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202b98) {
            ctx->pc = 0x202A88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202a88;
        }
    }
    ctx->pc = 0x202BA0u;
label_202ba0:
    // 0x202ba0: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x202ba0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x202ba4: 0x28620014  slti        $v0, $v1, 0x14
    ctx->pc = 0x202ba4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x202ba8: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x202BA8u;
    {
        const bool branch_taken_0x202ba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x202ba8) {
            ctx->pc = 0x202BACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202BA8u;
            // 0x202bac: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x202C20u;
            return;
        }
    }
    ctx->pc = 0x202BB0u;
    // 0x202bb0: 0x28620016  slti        $v0, $v1, 0x16
    ctx->pc = 0x202bb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)22) ? 1 : 0);
    // 0x202bb4: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x202BB4u;
    {
        const bool branch_taken_0x202bb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x202bb4) {
            ctx->pc = 0x202BB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202BB4u;
            // 0x202bb8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x202C2Cu;
            return;
        }
    }
    ctx->pc = 0x202BBCu;
    // 0x202bbc: 0x2862001b  slti        $v0, $v1, 0x1B
    ctx->pc = 0x202bbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)27) ? 1 : 0);
    // 0x202bc0: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x202BC0u;
    {
        const bool branch_taken_0x202bc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x202bc0) {
            ctx->pc = 0x202BC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202BC0u;
            // 0x202bc4: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x202C20u;
            return;
        }
    }
    ctx->pc = 0x202BC8u;
    // 0x202bc8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x202BC8u;
    {
        const bool branch_taken_0x202bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202BC8u;
        // 0x202bcc: 0x28620019  slti        $v0, $v1, 0x19 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)25) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x202bc8) {
            ctx->pc = 0x202BFCu;
            goto label_202bfc;
        }
    }
    ctx->pc = 0x202BD0u;
label_202bd0:
    // 0x202bd0: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x202bd0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x202bd4: 0x28620010  slti        $v0, $v1, 0x10
    ctx->pc = 0x202bd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x202bd8: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x202BD8u;
    {
        const bool branch_taken_0x202bd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x202bd8) {
            ctx->pc = 0x202BDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202BD8u;
            // 0x202bdc: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x202C20u;
            return;
        }
    }
    ctx->pc = 0x202BE0u;
    // 0x202be0: 0x28620012  slti        $v0, $v1, 0x12
    ctx->pc = 0x202be0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)18) ? 1 : 0);
    // 0x202be4: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x202BE4u;
    {
        const bool branch_taken_0x202be4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x202be4) {
            ctx->pc = 0x202BE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202BE4u;
            // 0x202be8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x202C2Cu;
            return;
        }
    }
    ctx->pc = 0x202BECu;
    // 0x202bec: 0x28620019  slti        $v0, $v1, 0x19
    ctx->pc = 0x202becu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)25) ? 1 : 0);
    // 0x202bf0: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x202BF0u;
    {
        const bool branch_taken_0x202bf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x202bf0) {
            ctx->pc = 0x202BF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202BF0u;
            // 0x202bf4: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x202C20u;
            return;
        }
    }
    ctx->pc = 0x202BF8u;
    // 0x202bf8: 0x28620017  slti        $v0, $v1, 0x17
    ctx->pc = 0x202bf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)23) ? 1 : 0);
label_202bfc:
    // 0x202bfc: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x202BFCu;
    {
        const bool branch_taken_0x202bfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x202bfc) {
            ctx->pc = 0x202C00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202BFCu;
            // 0x202c00: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x202C20u;
            return;
        }
    }
    ctx->pc = 0x202C04u;
    // 0x202c04: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x202C04u;
    {
        const bool branch_taken_0x202c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202C04u;
        // 0x202c08: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202c04) {
            ctx->pc = 0x202C2Cu;
            return;
        }
    }
    ctx->pc = 0x202C0Cu;
    // 0x202c0c: 0x0  nop
    ctx->pc = 0x202c0cu;
    // NOP
    ctx->pc = 0x202c10u;
}
