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

// Function: sub_00218AE8
// Address: 0x218ae8 - 0x218bb8
void sub_00218AE8_0x218ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00218AE8_0x218ae8");
#endif

    switch (ctx->pc) {
        case 0x218b10u: goto label_218b10;
        case 0x218b1cu: goto label_218b1c;
        case 0x218b38u: goto label_218b38;
        case 0x218b40u: goto label_218b40;
        case 0x218b54u: goto label_218b54;
        case 0x218b60u: goto label_218b60;
        default: break;
    }

    ctx->pc = 0x218ae8u;

    // 0x218ae8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x218ae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x218aec: 0xaf80c924  sw          $zero, -0x36DC($gp)
    ctx->pc = 0x218aecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953252), GPR_U32(ctx, 0));
    // 0x218af0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x218af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x218af4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x218af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x218af8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x218af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x218afc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x218afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x218b00: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x218b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x218b04: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x218b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x218b08: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x218b08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218b0c: 0x0  nop
    ctx->pc = 0x218b0cu;
    // NOP
label_218b10:
    // 0x218b10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x218b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218b14: 0xc0862b2  jal         func_218AC8
    ctx->pc = 0x218B14u;
    SET_GPR_U32(ctx, 31, 0x218B1Cu);
    ctx->pc = 0x218B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218B14u;
    // 0x218b18: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218AC8u, 0x218B14u, 0x218B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218B1Cu;
label_218b1c:
    // 0x218b1c: 0x2a430020  slti        $v1, $s2, 0x20
    ctx->pc = 0x218b1cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x218b20: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x218B20u;
    {
        const bool branch_taken_0x218b20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x218B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218B20u;
        // 0x218b24: 0xa4400006  sh          $zero, 0x6($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218b20) {
            ctx->pc = 0x218B10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_218b10;
        }
    }
    ctx->pc = 0x218B28u;
    // 0x218b28: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x218b28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218b2c: 0x24140008  addiu       $s4, $zero, 0x8
    ctx->pc = 0x218b2cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x218b30: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x218b30u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x218b34: 0x0  nop
    ctx->pc = 0x218b34u;
    // NOP
label_218b38:
    // 0x218b38: 0xc0863b2  jal         func_218EC8
    ctx->pc = 0x218B38u;
    SET_GPR_U32(ctx, 31, 0x218B40u);
    ctx->pc = 0x218B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218B38u;
    // 0x218b3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218EC8u, 0x218B38u, 0x218B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218B40u;
label_218b40:
    // 0x218b40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x218b40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218b44: 0x3a02001f  xori        $v0, $s0, 0x1F
    ctx->pc = 0x218b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)31);
    // 0x218b48: 0x282800a  movz        $s0, $s4, $v0
    ctx->pc = 0x218b48u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 20));
    // 0x218b4c: 0xc0862b2  jal         func_218AC8
    ctx->pc = 0x218B4Cu;
    SET_GPR_U32(ctx, 31, 0x218B54u);
    ctx->pc = 0x218B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218B4Cu;
    // 0x218b50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218AC8u, 0x218B4Cu, 0x218B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218B54u;
label_218b54:
    // 0x218b54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x218b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218b58: 0xc0862ee  jal         func_218BB8
    ctx->pc = 0x218B58u;
    SET_GPR_U32(ctx, 31, 0x218B60u);
    ctx->pc = 0x218B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218B58u;
    // 0x218b5c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BB8u, 0x218B58u, 0x218B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218B60u;
label_218b60:
    // 0x218b60: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x218b60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x218b64: 0x2131804  sllv        $v1, $s3, $s0
    ctx->pc = 0x218b64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 16) & 0x1F));
    // 0x218b68: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x218B68u;
    {
        const bool branch_taken_0x218b68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x218B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218B68u;
        // 0x218b6c: 0x2a450050  slti        $a1, $s2, 0x50 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)80) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x218b68) {
            ctx->pc = 0x218B94u;
            goto label_218b94;
        }
    }
    ctx->pc = 0x218B70u;
    // 0x218b70: 0x8f82c924  lw          $v0, -0x36DC($gp)
    ctx->pc = 0x218b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953252)));
    // 0x218b74: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x218b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x218b78: 0xaf82c924  sw          $v0, -0x36DC($gp)
    ctx->pc = 0x218b78u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953252), GPR_U32(ctx, 2));
    // 0x218b7c: 0x96230006  lhu         $v1, 0x6($s1)
    ctx->pc = 0x218b7cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x218b80: 0x86220004  lh          $v0, 0x4($s1)
    ctx->pc = 0x218b80u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x218b84: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x218b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x218b88: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x218b88u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x218b8c: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x218B8Cu;
    {
        const bool branch_taken_0x218b8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x218b8c) {
            ctx->pc = 0x218B90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x218B8Cu;
            // 0x218b90: 0xa6240006  sh          $a0, 0x6($s1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x218B94u;
            goto label_218b94;
        }
    }
    ctx->pc = 0x218B94u;
label_218b94:
    // 0x218b94: 0x14a0ffe8  bnez        $a1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x218B94u;
    {
        const bool branch_taken_0x218b94 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x218B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218B94u;
        // 0x218b98: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218b94) {
            ctx->pc = 0x218B38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_218b38;
        }
    }
    ctx->pc = 0x218B9Cu;
    // 0x218b9c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x218b9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x218ba0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x218ba0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x218ba4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x218ba4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x218ba8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x218ba8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x218bac: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x218bacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x218bb0: 0x3e00008  jr          $ra
    ctx->pc = 0x218BB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x218BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218BB0u;
        // 0x218bb4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218BB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x218BB8u;
}
