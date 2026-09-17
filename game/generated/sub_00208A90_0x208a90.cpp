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

// Function: sub_00208A90
// Address: 0x208a90 - 0x208b98
void sub_00208A90_0x208a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00208A90_0x208a90");
#endif

    switch (ctx->pc) {
        case 0x208af0u: goto label_208af0;
        case 0x208b28u: goto label_208b28;
        case 0x208b30u: goto label_208b30;
        case 0x208b74u: goto label_208b74;
        case 0x208b7cu: goto label_208b7c;
        default: break;
    }

    ctx->pc = 0x208a90u;

    // 0x208a90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x208a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x208a94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x208a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x208a98: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x208a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x208a9c: 0x3c12003b  lui         $s2, 0x3B
    ctx->pc = 0x208a9cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)59 << 16));
    // 0x208aa0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x208aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x208aa4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x208aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x208aa8: 0x84840090  lh          $a0, 0x90($a0)
    ctx->pc = 0x208aa8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x208aac: 0x84a30090  lh          $v1, 0x90($a1)
    ctx->pc = 0x208aacu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 144)));
    // 0x208ab0: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x208ab0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x208ab4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x208AB4u;
    {
        const bool branch_taken_0x208ab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208AB4u;
        // 0x208ab8: 0x265083c0  addiu       $s0, $s2, -0x7C40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294935488));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208ab4) {
            ctx->pc = 0x208AD0u;
            goto label_208ad0;
        }
    }
    ctx->pc = 0x208ABCu;
    // 0x208abc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x208abcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208ac0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x208ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x208ac4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x208AC4u;
    {
        const bool branch_taken_0x208ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208AC4u;
        // 0x208ac8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208ac4) {
            ctx->pc = 0x208AFCu;
            goto label_208afc;
        }
    }
    ctx->pc = 0x208ACCu;
    // 0x208acc: 0x0  nop
    ctx->pc = 0x208accu;
    // NOP
label_208ad0:
    // 0x208ad0: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x208ad0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x208ad4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x208AD4u;
    {
        const bool branch_taken_0x208ad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208AD4u;
        // 0x208ad8: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208ad4) {
            ctx->pc = 0x208AE8u;
            goto label_208ae8;
        }
    }
    ctx->pc = 0x208ADCu;
    // 0x208adc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x208adcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208ae0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x208AE0u;
    {
        const bool branch_taken_0x208ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208AE0u;
        // 0x208ae4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208ae0) {
            ctx->pc = 0x208AFCu;
            goto label_208afc;
        }
    }
    ctx->pc = 0x208AE8u;
label_208ae8:
    // 0x208ae8: 0xc0822e6  jal         func_208B98
    ctx->pc = 0x208AE8u;
    SET_GPR_U32(ctx, 31, 0x208AF0u);
    ctx->pc = 0x208B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208B98u, 0x208AE8u, 0x208AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208AF0u;
label_208af0:
    // 0x208af0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x208af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x208af4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x208af4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208af8: 0x38450001  xori        $a1, $v0, 0x1
    ctx->pc = 0x208af8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_208afc:
    // 0x208afc: 0x9203002b  lbu         $v1, 0x2B($s0)
    ctx->pc = 0x208afcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 43)));
    // 0x208b00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x208b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x208b04: 0xa2040030  sb          $a0, 0x30($s0)
    ctx->pc = 0x208b04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 48), (uint8_t)GPR_U32(ctx, 4));
    // 0x208b08: 0xa2050032  sb          $a1, 0x32($s0)
    ctx->pc = 0x208b08u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 50), (uint8_t)GPR_U32(ctx, 5));
    // 0x208b0c: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x208B0Cu;
    {
        const bool branch_taken_0x208b0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x208B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208B0Cu;
        // 0x208b10: 0xa2110031  sb          $s1, 0x31($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 49), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208b0c) {
            ctx->pc = 0x208B30u;
            goto label_208b30;
        }
    }
    ctx->pc = 0x208B14u;
    // 0x208b14: 0x9202002d  lbu         $v0, 0x2D($s0)
    ctx->pc = 0x208b14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 45)));
    // 0x208b18: 0x12220006  beq         $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x208B18u;
    {
        const bool branch_taken_0x208b18 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x208B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208B18u;
        // 0x208b1c: 0x8e4283c0  lw          $v0, -0x7C40($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294935488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208b18) {
            ctx->pc = 0x208B34u;
            goto label_208b34;
        }
    }
    ctx->pc = 0x208B20u;
    // 0x208b20: 0xc0821ce  jal         func_208738
    ctx->pc = 0x208B20u;
    SET_GPR_U32(ctx, 31, 0x208B28u);
    ctx->pc = 0x208B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208B20u;
    // 0x208b24: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208738u, 0x208B20u, 0x208B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208B28u;
label_208b28:
    // 0x208b28: 0xc086f8e  jal         func_21BE38
    ctx->pc = 0x208B28u;
    SET_GPR_U32(ctx, 31, 0x208B30u);
    ctx->pc = 0x21BE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21BE38u, 0x208B28u, 0x208B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208B30u;
label_208b30:
    // 0x208b30: 0x8e4283c0  lw          $v0, -0x7C40($s2)
    ctx->pc = 0x208b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294935488)));
label_208b34:
    // 0x208b34: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x208B34u;
    {
        const bool branch_taken_0x208b34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x208b34) {
            ctx->pc = 0x208B38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208B34u;
            // 0x208b38: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208B80u;
            goto label_208b80;
        }
    }
    ctx->pc = 0x208B3Cu;
    // 0x208b3c: 0x92020028  lbu         $v0, 0x28($s0)
    ctx->pc = 0x208b3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x208b40: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x208b40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x208b44: 0x9203002b  lbu         $v1, 0x2B($s0)
    ctx->pc = 0x208b44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 43)));
    // 0x208b48: 0x1464000c  bne         $v1, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x208B48u;
    {
        const bool branch_taken_0x208b48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x208B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208B48u;
        // 0x208b4c: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208b48) {
            ctx->pc = 0x208B7Cu;
            goto label_208b7c;
        }
    }
    ctx->pc = 0x208B50u;
    // 0x208b50: 0x9202002d  lbu         $v0, 0x2D($s0)
    ctx->pc = 0x208b50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 45)));
    // 0x208b54: 0x5622000a  bnel        $s1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x208B54u;
    {
        const bool branch_taken_0x208b54 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x208b54) {
            ctx->pc = 0x208B58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208B54u;
            // 0x208b58: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208B80u;
            goto label_208b80;
        }
    }
    ctx->pc = 0x208B5Cu;
    // 0x208b5c: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x208b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x208b60: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x208b60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x208b64: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x208B64u;
    {
        const bool branch_taken_0x208b64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x208b64) {
            ctx->pc = 0x208B68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208B64u;
            // 0x208b68: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208B80u;
            goto label_208b80;
        }
    }
    ctx->pc = 0x208B6Cu;
    // 0x208b6c: 0xc0821ce  jal         func_208738
    ctx->pc = 0x208B6Cu;
    SET_GPR_U32(ctx, 31, 0x208B74u);
    ctx->pc = 0x208B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208B6Cu;
    // 0x208b70: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208738u, 0x208B6Cu, 0x208B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208B74u;
label_208b74:
    // 0x208b74: 0xc086f8e  jal         func_21BE38
    ctx->pc = 0x208B74u;
    SET_GPR_U32(ctx, 31, 0x208B7Cu);
    ctx->pc = 0x21BE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21BE38u, 0x208B74u, 0x208B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208B7Cu;
label_208b7c:
    // 0x208b7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x208b7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_208b80:
    // 0x208b80: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x208b80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x208b84: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x208b84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x208b88: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x208b88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x208b8c: 0x3e00008  jr          $ra
    ctx->pc = 0x208B8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208B8Cu;
        // 0x208b90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208B8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x208B94u;
    // 0x208b94: 0x0  nop
    ctx->pc = 0x208b94u;
    // NOP
    ctx->pc = 0x208b98u;
}
