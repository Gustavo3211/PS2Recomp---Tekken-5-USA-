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

// Function: sub_002B69B0
// Address: 0x2b69b0 - 0x2b6de0
void sub_002B69B0_0x2b69b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B69B0_0x2b69b0");
#endif

    switch (ctx->pc) {
        case 0x2b6a28u: goto label_2b6a28;
        case 0x2b6a30u: goto label_2b6a30;
        case 0x2b6a98u: goto label_2b6a98;
        case 0x2b6ae0u: goto label_2b6ae0;
        case 0x2b6c28u: goto label_2b6c28;
        case 0x2b6c30u: goto label_2b6c30;
        case 0x2b6c98u: goto label_2b6c98;
        case 0x2b6cc8u: goto label_2b6cc8;
        default: break;
    }

    ctx->pc = 0x2b69b0u;

    // 0x2b69b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2b69b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2b69b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b69b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b69b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b69b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b69bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b69bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b69c0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2b69c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b69c4: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x2b69c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x2b69c8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2b69c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2b69cc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2b69ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2b69d0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2b69d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2b69d4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2b69d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2b69d8: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2b69d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2b69dc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2b69dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2b69e0: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x2b69e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2b69e4: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x2b69e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2b69e8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2b69e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2b69ec: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x2b69ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2b69f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B69F0u;
    {
        const bool branch_taken_0x2b69f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B69F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B69F0u;
        // 0x2b69f4: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b69f0) {
            ctx->pc = 0x2B6A08u;
            goto label_2b6a08;
        }
    }
    ctx->pc = 0x2B69F8u;
    // 0x2b69f8: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x2b69f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2b69fc: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x2b69fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2b6a00: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B6A00u;
    {
        const bool branch_taken_0x2b6a00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6A00u;
        // 0x2b6a04: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6a00) {
            ctx->pc = 0x2B6A0Cu;
            goto label_2b6a0c;
        }
    }
    ctx->pc = 0x2B6A08u;
label_2b6a08:
    // 0x2b6a08: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b6a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b6a0c:
    // 0x2b6a0c: 0x1460005b  bnez        $v1, . + 4 + (0x5B << 2)
    ctx->pc = 0x2B6A0Cu;
    {
        const bool branch_taken_0x2b6a0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B6A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6A0Cu;
        // 0x2b6a10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6a0c) {
            ctx->pc = 0x2B6B7Cu;
            goto label_2b6b7c;
        }
    }
    ctx->pc = 0x2B6A14u;
    // 0x2b6a14: 0x24150020  addiu       $s5, $zero, 0x20
    ctx->pc = 0x2b6a14u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2b6a18: 0x2414000d  addiu       $s4, $zero, 0xD
    ctx->pc = 0x2b6a18u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2b6a1c: 0x24130009  addiu       $s3, $zero, 0x9
    ctx->pc = 0x2b6a1cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2b6a20: 0x2412000a  addiu       $s2, $zero, 0xA
    ctx->pc = 0x2b6a20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2b6a24: 0x2416002f  addiu       $s6, $zero, 0x2F
    ctx->pc = 0x2b6a24u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_2b6a28:
    // 0x2b6a28: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B6A28u;
    {
        const bool branch_taken_0x2b6a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6A28u;
        // 0x2b6a2c: 0x8e060028  lw          $a2, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6a28) {
            ctx->pc = 0x2B6A38u;
            goto label_2b6a38;
        }
    }
    ctx->pc = 0x2B6A30u;
label_2b6a30:
    // 0x2b6a30: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x2b6a30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x2b6a34: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b6a34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b6a38:
    // 0x2b6a38: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x2b6a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2b6a3c: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x2b6a3cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b6a40: 0x1055000a  beq         $v0, $s5, . + 4 + (0xA << 2)
    ctx->pc = 0x2B6A40u;
    {
        const bool branch_taken_0x2b6a40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        ctx->pc = 0x2B6A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6A40u;
        // 0x2b6a44: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6a40) {
            ctx->pc = 0x2B6A6Cu;
            goto label_2b6a6c;
        }
    }
    ctx->pc = 0x2B6A48u;
    // 0x2b6a48: 0x10540008  beq         $v0, $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B6A48u;
    {
        const bool branch_taken_0x2b6a48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        if (branch_taken_0x2b6a48) {
            ctx->pc = 0x2B6A6Cu;
            goto label_2b6a6c;
        }
    }
    ctx->pc = 0x2B6A50u;
    // 0x2b6a50: 0x10530006  beq         $v0, $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B6A50u;
    {
        const bool branch_taken_0x2b6a50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x2b6a50) {
            ctx->pc = 0x2B6A6Cu;
            goto label_2b6a6c;
        }
    }
    ctx->pc = 0x2B6A58u;
    // 0x2b6a58: 0x10520004  beq         $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B6A58u;
    {
        const bool branch_taken_0x2b6a58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x2b6a58) {
            ctx->pc = 0x2B6A6Cu;
            goto label_2b6a6c;
        }
    }
    ctx->pc = 0x2B6A60u;
    // 0x2b6a60: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B6A60u;
    {
        const bool branch_taken_0x2b6a60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B6A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6A60u;
        // 0x2b6a64: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6a60) {
            ctx->pc = 0x2B6A6Cu;
            goto label_2b6a6c;
        }
    }
    ctx->pc = 0x2B6A68u;
    // 0x2b6a68: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b6a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b6a6c:
    // 0x2b6a6c: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2B6A6Cu;
    {
        const bool branch_taken_0x2b6a6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B6A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6A6Cu;
        // 0x2b6a70: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6a6c) {
            ctx->pc = 0x2B6A30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b6a30;
        }
    }
    ctx->pc = 0x2B6A74u;
    // 0x2b6a74: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x2b6a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2b6a78: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x2b6a78u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b6a7c: 0x54760008  bnel        $v1, $s6, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B6A7Cu;
    {
        const bool branch_taken_0x2b6a7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 22));
        if (branch_taken_0x2b6a7c) {
            ctx->pc = 0x2B6A80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6A7Cu;
            // 0x2b6a80: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6AA0u;
            goto label_2b6aa0;
        }
    }
    ctx->pc = 0x2B6A84u;
    // 0x2b6a84: 0x80420001  lb          $v0, 0x1($v0)
    ctx->pc = 0x2b6a84u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x2b6a88: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B6A88u;
    {
        const bool branch_taken_0x2b6a88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b6a88) {
            ctx->pc = 0x2B6A8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6A88u;
            // 0x2b6a8c: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6AA0u;
            goto label_2b6aa0;
        }
    }
    ctx->pc = 0x2B6A90u;
    // 0x2b6a90: 0xc0adccc  jal         func_2B7330
    ctx->pc = 0x2B6A90u;
    SET_GPR_U32(ctx, 31, 0x2B6A98u);
    ctx->pc = 0x2B6A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6A90u;
    // 0x2b6a94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7330u, 0x2B6A90u, 0x2B6A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6A98u;
label_2b6a98:
    // 0x2b6a98: 0x1000ffe3  b           . + 4 + (-0x1D << 2)
    ctx->pc = 0x2B6A98u;
    {
        const bool branch_taken_0x2b6a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6A98u;
        // 0x2b6a9c: 0x8e050030  lw          $a1, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6a98) {
            ctx->pc = 0x2B6A28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b6a28;
        }
    }
    ctx->pc = 0x2B6AA0u;
label_2b6aa0:
    // 0x2b6aa0: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x2b6aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x2b6aa4: 0x8e060028  lw          $a2, 0x28($s0)
    ctx->pc = 0x2b6aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2b6aa8: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x2b6aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2b6aac: 0xc51821  addu        $v1, $a2, $a1
    ctx->pc = 0x2b6aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2b6ab0: 0x80640000  lb          $a0, 0x0($v1)
    ctx->pc = 0x2b6ab0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b6ab4: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B6AB4u;
    {
        const bool branch_taken_0x2b6ab4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B6AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6AB4u;
        // 0x2b6ab8: 0x240a0020  addiu       $t2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6ab4) {
            ctx->pc = 0x2B6ACCu;
            goto label_2b6acc;
        }
    }
    ctx->pc = 0x2B6ABCu;
    // 0x2b6abc: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x2b6abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2b6ac0: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x2b6ac0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b6ac4: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x2b6ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x2b6ac8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b6ac8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b6acc:
    // 0x2b6acc: 0x2409000d  addiu       $t1, $zero, 0xD
    ctx->pc = 0x2b6accu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2b6ad0: 0x24080009  addiu       $t0, $zero, 0x9
    ctx->pc = 0x2b6ad0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2b6ad4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2B6AD4u;
    {
        const bool branch_taken_0x2b6ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6AD4u;
        // 0x2b6ad8: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6ad4) {
            ctx->pc = 0x2B6B28u;
            goto label_2b6b28;
        }
    }
    ctx->pc = 0x2B6ADCu;
    // 0x2b6adc: 0x0  nop
    ctx->pc = 0x2b6adcu;
    // NOP
label_2b6ae0:
    // 0x2b6ae0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2b6ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2b6ae4: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x2b6ae4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2b6ae8: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2B6AE8u;
    {
        const bool branch_taken_0x2b6ae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b6ae8) {
            ctx->pc = 0x2B6B64u;
            goto label_2b6b64;
        }
    }
    ctx->pc = 0x2B6AF0u;
    // 0x2b6af0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2b6af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b6af4: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x2b6af4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2b6af8: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x2b6af8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2b6afc: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2b6afcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b6b00: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2b6b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b6b04: 0x2463ffd0  addiu       $v1, $v1, -0x30
    ctx->pc = 0x2b6b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x2b6b08: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2b6b08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2b6b0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b6b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b6b10: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2b6b10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2b6b14: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x2b6b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2b6b18: 0x8e060028  lw          $a2, 0x28($s0)
    ctx->pc = 0x2b6b18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2b6b1c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2b6b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2b6b20: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x2b6b20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
    // 0x2b6b24: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2b6b24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2b6b28:
    // 0x2b6b28: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x2b6b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2b6b2c: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x2b6b2cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b6b30: 0x104a000a  beq         $v0, $t2, . + 4 + (0xA << 2)
    ctx->pc = 0x2B6B30u;
    {
        const bool branch_taken_0x2b6b30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 10));
        ctx->pc = 0x2B6B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6B30u;
        // 0x2b6b34: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6b30) {
            ctx->pc = 0x2B6B5Cu;
            goto label_2b6b5c;
        }
    }
    ctx->pc = 0x2B6B38u;
    // 0x2b6b38: 0x10490008  beq         $v0, $t1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B6B38u;
    {
        const bool branch_taken_0x2b6b38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        if (branch_taken_0x2b6b38) {
            ctx->pc = 0x2B6B5Cu;
            goto label_2b6b5c;
        }
    }
    ctx->pc = 0x2B6B40u;
    // 0x2b6b40: 0x10480006  beq         $v0, $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B6B40u;
    {
        const bool branch_taken_0x2b6b40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        if (branch_taken_0x2b6b40) {
            ctx->pc = 0x2B6B5Cu;
            goto label_2b6b5c;
        }
    }
    ctx->pc = 0x2B6B48u;
    // 0x2b6b48: 0x10470004  beq         $v0, $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B6B48u;
    {
        const bool branch_taken_0x2b6b48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x2b6b48) {
            ctx->pc = 0x2B6B5Cu;
            goto label_2b6b5c;
        }
    }
    ctx->pc = 0x2B6B50u;
    // 0x2b6b50: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B6B50u;
    {
        const bool branch_taken_0x2b6b50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B6B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6B50u;
        // 0x2b6b54: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6b50) {
            ctx->pc = 0x2B6B5Cu;
            goto label_2b6b5c;
        }
    }
    ctx->pc = 0x2B6B58u;
    // 0x2b6b58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b6b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b6b5c:
    // 0x2b6b5c: 0x5060ffe0  beql        $v1, $zero, . + 4 + (-0x20 << 2)
    ctx->pc = 0x2B6B5Cu;
    {
        const bool branch_taken_0x2b6b5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b6b5c) {
            ctx->pc = 0x2B6B60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6B5Cu;
            // 0x2b6b60: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6AE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b6ae0;
        }
    }
    ctx->pc = 0x2B6B64u;
label_2b6b64:
    // 0x2b6b64: 0x12e00005  beqz        $s7, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B6B64u;
    {
        const bool branch_taken_0x2b6b64 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6B64u;
        // 0x2b6b68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6b64) {
            ctx->pc = 0x2B6B7Cu;
            goto label_2b6b7c;
        }
    }
    ctx->pc = 0x2B6B6Cu;
    // 0x2b6b6c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2b6b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b6b70: 0x21023  negu        $v0, $v0
    ctx->pc = 0x2b6b70u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x2b6b74: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2b6b74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2b6b78: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b6b78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b6b7c:
    // 0x2b6b7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b6b7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b6b80: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b6b80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6b84: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2b6b84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b6b88: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2b6b88u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b6b8c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2b6b8cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b6b90: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2b6b90u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2b6b94: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2b6b94u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b6b98: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x2b6b98u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2b6b9c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2b6b9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b6ba0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6BA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B6BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6BA0u;
        // 0x2b6ba4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6BA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B6BA8u;
    // 0x2b6ba8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2b6ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2b6bac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b6bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b6bb0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b6bb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6bb4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b6bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b6bb8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2b6bb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6bbc: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x2b6bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x2b6bc0: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2b6bc0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6bc4: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x2b6bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x2b6bc8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2b6bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2b6bcc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2b6bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2b6bd0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2b6bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2b6bd4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2b6bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2b6bd8: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2b6bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2b6bdc: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x2b6bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x2b6be0: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x2b6be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2b6be4: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x2b6be4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2b6be8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2b6be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2b6bec: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x2b6becu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2b6bf0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B6BF0u;
    {
        const bool branch_taken_0x2b6bf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6BF0u;
        // 0x2b6bf4: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6bf0) {
            ctx->pc = 0x2B6C08u;
            goto label_2b6c08;
        }
    }
    ctx->pc = 0x2B6BF8u;
    // 0x2b6bf8: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x2b6bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2b6bfc: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x2b6bfcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2b6c00: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B6C00u;
    {
        const bool branch_taken_0x2b6c00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6C00u;
        // 0x2b6c04: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6c00) {
            ctx->pc = 0x2B6C0Cu;
            goto label_2b6c0c;
        }
    }
    ctx->pc = 0x2B6C08u;
label_2b6c08:
    // 0x2b6c08: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b6c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b6c0c:
    // 0x2b6c0c: 0x14600068  bnez        $v1, . + 4 + (0x68 << 2)
    ctx->pc = 0x2B6C0Cu;
    {
        const bool branch_taken_0x2b6c0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B6C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6C0Cu;
        // 0x2b6c10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6c0c) {
            ctx->pc = 0x2B6DB0u;
            goto label_2b6db0;
        }
    }
    ctx->pc = 0x2B6C14u;
    // 0x2b6c14: 0x24150020  addiu       $s5, $zero, 0x20
    ctx->pc = 0x2b6c14u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2b6c18: 0x2414000d  addiu       $s4, $zero, 0xD
    ctx->pc = 0x2b6c18u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2b6c1c: 0x24130009  addiu       $s3, $zero, 0x9
    ctx->pc = 0x2b6c1cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2b6c20: 0x2412000a  addiu       $s2, $zero, 0xA
    ctx->pc = 0x2b6c20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2b6c24: 0x2416002f  addiu       $s6, $zero, 0x2F
    ctx->pc = 0x2b6c24u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_2b6c28:
    // 0x2b6c28: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B6C28u;
    {
        const bool branch_taken_0x2b6c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6C28u;
        // 0x2b6c2c: 0x8e060028  lw          $a2, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6c28) {
            ctx->pc = 0x2B6C38u;
            goto label_2b6c38;
        }
    }
    ctx->pc = 0x2B6C30u;
label_2b6c30:
    // 0x2b6c30: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x2b6c30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x2b6c34: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b6c34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b6c38:
    // 0x2b6c38: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x2b6c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2b6c3c: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x2b6c3cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b6c40: 0x1055000a  beq         $v0, $s5, . + 4 + (0xA << 2)
    ctx->pc = 0x2B6C40u;
    {
        const bool branch_taken_0x2b6c40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        ctx->pc = 0x2B6C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6C40u;
        // 0x2b6c44: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6c40) {
            ctx->pc = 0x2B6C6Cu;
            goto label_2b6c6c;
        }
    }
    ctx->pc = 0x2B6C48u;
    // 0x2b6c48: 0x10540008  beq         $v0, $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B6C48u;
    {
        const bool branch_taken_0x2b6c48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        if (branch_taken_0x2b6c48) {
            ctx->pc = 0x2B6C6Cu;
            goto label_2b6c6c;
        }
    }
    ctx->pc = 0x2B6C50u;
    // 0x2b6c50: 0x10530006  beq         $v0, $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B6C50u;
    {
        const bool branch_taken_0x2b6c50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x2b6c50) {
            ctx->pc = 0x2B6C6Cu;
            goto label_2b6c6c;
        }
    }
    ctx->pc = 0x2B6C58u;
    // 0x2b6c58: 0x10520004  beq         $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B6C58u;
    {
        const bool branch_taken_0x2b6c58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x2b6c58) {
            ctx->pc = 0x2B6C6Cu;
            goto label_2b6c6c;
        }
    }
    ctx->pc = 0x2B6C60u;
    // 0x2b6c60: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B6C60u;
    {
        const bool branch_taken_0x2b6c60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B6C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6C60u;
        // 0x2b6c64: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6c60) {
            ctx->pc = 0x2B6C6Cu;
            goto label_2b6c6c;
        }
    }
    ctx->pc = 0x2B6C68u;
    // 0x2b6c68: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b6c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b6c6c:
    // 0x2b6c6c: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2B6C6Cu;
    {
        const bool branch_taken_0x2b6c6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B6C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6C6Cu;
        // 0x2b6c70: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6c6c) {
            ctx->pc = 0x2B6C30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b6c30;
        }
    }
    ctx->pc = 0x2B6C74u;
    // 0x2b6c74: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x2b6c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2b6c78: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x2b6c78u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b6c7c: 0x14760009  bne         $v1, $s6, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B6C7Cu;
    {
        const bool branch_taken_0x2b6c7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 22));
        ctx->pc = 0x2B6C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6C7Cu;
        // 0x2b6c80: 0x2404002d  addiu       $a0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6c7c) {
            ctx->pc = 0x2B6CA4u;
            goto label_2b6ca4;
        }
    }
    ctx->pc = 0x2B6C84u;
    // 0x2b6c84: 0x80420001  lb          $v0, 0x1($v0)
    ctx->pc = 0x2b6c84u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x2b6c88: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B6C88u;
    {
        const bool branch_taken_0x2b6c88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b6c88) {
            ctx->pc = 0x2B6C8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6C88u;
            // 0x2b6c8c: 0xc51021  addu        $v0, $a2, $a1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6CA0u;
            goto label_2b6ca0;
        }
    }
    ctx->pc = 0x2B6C90u;
    // 0x2b6c90: 0xc0adccc  jal         func_2B7330
    ctx->pc = 0x2B6C90u;
    SET_GPR_U32(ctx, 31, 0x2B6C98u);
    ctx->pc = 0x2B6C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6C90u;
    // 0x2b6c94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7330u, 0x2B6C90u, 0x2B6C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6C98u;
label_2b6c98:
    // 0x2b6c98: 0x1000ffe3  b           . + 4 + (-0x1D << 2)
    ctx->pc = 0x2B6C98u;
    {
        const bool branch_taken_0x2b6c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6C98u;
        // 0x2b6c9c: 0x8e050030  lw          $a1, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6c98) {
            ctx->pc = 0x2B6C28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b6c28;
        }
    }
    ctx->pc = 0x2B6CA0u;
label_2b6ca0:
    // 0x2b6ca0: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x2b6ca0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2b6ca4:
    // 0x2b6ca4: 0x54640005  bnel        $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B6CA4u;
    {
        const bool branch_taken_0x2b6ca4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2b6ca4) {
            ctx->pc = 0x2B6CA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6CA4u;
            // 0x2b6ca8: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6CBCu;
            goto label_2b6cbc;
        }
    }
    ctx->pc = 0x2B6CACu;
    // 0x2b6cac: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x2b6cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2b6cb0: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x2b6cb0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b6cb4: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x2b6cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x2b6cb8: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2b6cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_2b6cbc:
    // 0x2b6cbc: 0xc7839098  lwc1        $f3, -0x6F68($gp)
    ctx->pc = 0x2b6cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b6cc0: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x2B6CC0u;
    {
        const bool branch_taken_0x2b6cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6CC0u;
        // 0x2b6cc4: 0x8e060028  lw          $a2, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6cc0) {
            ctx->pc = 0x2B6D58u;
            goto label_2b6d58;
        }
    }
    ctx->pc = 0x2B6CC8u;
label_2b6cc8:
    // 0x2b6cc8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2b6cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2b6ccc: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x2b6cccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2b6cd0: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2B6CD0u;
    {
        const bool branch_taken_0x2b6cd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6CD0u;
        // 0x2b6cd4: 0xc51021  addu        $v0, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6cd0) {
            ctx->pc = 0x2B6D9Cu;
            goto label_2b6d9c;
        }
    }
    ctx->pc = 0x2B6CD8u;
    // 0x2b6cd8: 0x2403002e  addiu       $v1, $zero, 0x2E
    ctx->pc = 0x2b6cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x2b6cdc: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x2b6cdcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b6ce0: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B6CE0u;
    {
        const bool branch_taken_0x2b6ce0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b6ce0) {
            ctx->pc = 0x2B6CF8u;
            goto label_2b6cf8;
        }
    }
    ctx->pc = 0x2B6CE8u;
    // 0x2b6ce8: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x2b6ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2b6cec: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2B6CECu;
    {
        const bool branch_taken_0x2b6cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6CECu;
        // 0x2b6cf0: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6cec) {
            ctx->pc = 0x2B6D54u;
            goto label_2b6d54;
        }
    }
    ctx->pc = 0x2B6CF4u;
    // 0x2b6cf4: 0x0  nop
    ctx->pc = 0x2b6cf4u;
    // NOP
label_2b6cf8:
    // 0x2b6cf8: 0x52e0000b  beql        $s7, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2B6CF8u;
    {
        const bool branch_taken_0x2b6cf8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b6cf8) {
            ctx->pc = 0x2B6CFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6CF8u;
            // 0x2b6cfc: 0xc6200000  lwc1        $f0, 0x0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6D28u;
            goto label_2b6d28;
        }
    }
    ctx->pc = 0x2B6D00u;
    // 0x2b6d00: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x2b6d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x2b6d04: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x2b6d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b6d08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b6d08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6d0c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2b6d0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2b6d10: 0xc782909c  lwc1        $f2, -0x6F64($gp)
    ctx->pc = 0x2b6d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b6d14: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x2b6d14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2b6d18: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x2b6d18u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2b6d1c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2b6d1cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2b6d20: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2B6D20u;
    {
        const bool branch_taken_0x2b6d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6D20u;
        // 0x2b6d24: 0xe6210000  swc1        $f1, 0x0($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6d20) {
            ctx->pc = 0x2B6D48u;
            goto label_2b6d48;
        }
    }
    ctx->pc = 0x2B6D28u;
label_2b6d28:
    // 0x2b6d28: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x2b6d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x2b6d2c: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2b6d2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x2b6d30: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2b6d30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b6d34: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2b6d34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b6d38: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2b6d38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2b6d3c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b6d3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b6d40: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2b6d40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2b6d44: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x2b6d44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_2b6d48:
    // 0x2b6d48: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2b6d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2b6d4c: 0x8e060028  lw          $a2, 0x28($s0)
    ctx->pc = 0x2b6d4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2b6d50: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b6d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2b6d54:
    // 0x2b6d54: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x2b6d54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_2b6d58:
    // 0x2b6d58: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x2b6d58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2b6d5c: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x2b6d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2b6d60: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x2b6d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2b6d64: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x2b6d64u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b6d68: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B6D68u;
    {
        const bool branch_taken_0x2b6d68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2B6D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6D68u;
        // 0x2b6d6c: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6d68) {
            ctx->pc = 0x2B6D90u;
            goto label_2b6d90;
        }
    }
    ctx->pc = 0x2B6D70u;
    // 0x2b6d70: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B6D70u;
    {
        const bool branch_taken_0x2b6d70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B6D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6D70u;
        // 0x2b6d74: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6d70) {
            ctx->pc = 0x2B6D90u;
            goto label_2b6d90;
        }
    }
    ctx->pc = 0x2B6D78u;
    // 0x2b6d78: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B6D78u;
    {
        const bool branch_taken_0x2b6d78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B6D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6D78u;
        // 0x2b6d7c: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6d78) {
            ctx->pc = 0x2B6D90u;
            goto label_2b6d90;
        }
    }
    ctx->pc = 0x2B6D80u;
    // 0x2b6d80: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B6D80u;
    {
        const bool branch_taken_0x2b6d80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B6D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6D80u;
        // 0x2b6d84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6d80) {
            ctx->pc = 0x2B6D94u;
            goto label_2b6d94;
        }
    }
    ctx->pc = 0x2B6D88u;
    // 0x2b6d88: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B6D88u;
    {
        const bool branch_taken_0x2b6d88 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B6D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6D88u;
        // 0x2b6d8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6d88) {
            ctx->pc = 0x2B6D94u;
            goto label_2b6d94;
        }
    }
    ctx->pc = 0x2B6D90u;
label_2b6d90:
    // 0x2b6d90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b6d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b6d94:
    // 0x2b6d94: 0x5040ffcc  beql        $v0, $zero, . + 4 + (-0x34 << 2)
    ctx->pc = 0x2B6D94u;
    {
        const bool branch_taken_0x2b6d94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b6d94) {
            ctx->pc = 0x2B6D98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6D94u;
            // 0x2b6d98: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6CC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b6cc8;
        }
    }
    ctx->pc = 0x2B6D9Cu;
label_2b6d9c:
    // 0x2b6d9c: 0x13c00004  beqz        $fp, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B6D9Cu;
    {
        const bool branch_taken_0x2b6d9c = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6D9Cu;
        // 0x2b6da0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6d9c) {
            ctx->pc = 0x2B6DB0u;
            goto label_2b6db0;
        }
    }
    ctx->pc = 0x2B6DA4u;
    // 0x2b6da4: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x2b6da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b6da8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2b6da8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2b6dac: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x2b6dacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_2b6db0:
    // 0x2b6db0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b6db0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b6db4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b6db4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6db8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2b6db8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b6dbc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2b6dbcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b6dc0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2b6dc0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b6dc4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2b6dc4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2b6dc8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2b6dc8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b6dcc: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x2b6dccu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2b6dd0: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x2b6dd0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b6dd4: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2b6dd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2b6dd8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6DD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B6DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6DD8u;
        // 0x2b6ddc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6DD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B6DE0u;
}
