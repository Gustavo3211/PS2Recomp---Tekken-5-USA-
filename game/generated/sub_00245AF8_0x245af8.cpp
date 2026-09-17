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

// Function: sub_00245AF8
// Address: 0x245af8 - 0x245b98
void sub_00245AF8_0x245af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00245AF8_0x245af8");
#endif

    switch (ctx->pc) {
        case 0x245b48u: goto label_245b48;
        case 0x245b60u: goto label_245b60;
        case 0x245b78u: goto label_245b78;
        default: break;
    }

    ctx->pc = 0x245af8u;

    // 0x245af8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x245af8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x245afc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x245afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x245b00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x245b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x245b04: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x245b04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245b08: 0x10820013  beq         $a0, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x245B08u;
    {
        const bool branch_taken_0x245b08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x245B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245B08u;
        // 0x245b0c: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245b08) {
            ctx->pc = 0x245B58u;
            goto label_245b58;
        }
    }
    ctx->pc = 0x245B10u;
    // 0x245b10: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x245b10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x245b14: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x245B14u;
    {
        const bool branch_taken_0x245b14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x245B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245B14u;
        // 0x245b18: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245b14) {
            ctx->pc = 0x245B30u;
            goto label_245b30;
        }
    }
    ctx->pc = 0x245B1Cu;
    // 0x245b1c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x245B1Cu;
    {
        const bool branch_taken_0x245b1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x245B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245B1Cu;
        // 0x245b20: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245b1c) {
            ctx->pc = 0x245B40u;
            goto label_245b40;
        }
    }
    ctx->pc = 0x245B24u;
    // 0x245b24: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x245B24u;
    {
        const bool branch_taken_0x245b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245B24u;
        // 0x245b28: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245b24) {
            ctx->pc = 0x245B8Cu;
            goto label_245b8c;
        }
    }
    ctx->pc = 0x245B2Cu;
    // 0x245b2c: 0x0  nop
    ctx->pc = 0x245b2cu;
    // NOP
label_245b30:
    // 0x245b30: 0x1082000f  beq         $a0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x245B30u;
    {
        const bool branch_taken_0x245b30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x245B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245B30u;
        // 0x245b34: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245b30) {
            ctx->pc = 0x245B70u;
            goto label_245b70;
        }
    }
    ctx->pc = 0x245B38u;
    // 0x245b38: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x245B38u;
    {
        const bool branch_taken_0x245b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245B38u;
        // 0x245b3c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245b38) {
            ctx->pc = 0x245B8Cu;
            goto label_245b8c;
        }
    }
    ctx->pc = 0x245B40u;
label_245b40:
    // 0x245b40: 0xc089622  jal         func_225888
    ctx->pc = 0x245B40u;
    SET_GPR_U32(ctx, 31, 0x245B48u);
    ctx->pc = 0x245B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245B40u;
    // 0x245b44: 0x24040056  addiu       $a0, $zero, 0x56 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225888u, 0x245B40u, 0x245B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245B48u;
label_245b48:
    // 0x245b48: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x245B48u;
    {
        const bool branch_taken_0x245b48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x245B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245B48u;
        // 0x245b4c: 0x3c020016  lui         $v0, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245b48) {
            ctx->pc = 0x245B84u;
            goto label_245b84;
        }
    }
    ctx->pc = 0x245B50u;
    // 0x245b50: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x245B50u;
    {
        const bool branch_taken_0x245b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245B50u;
        // 0x245b54: 0x8c506900  lw          $s0, 0x6900($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 26880)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245b50) {
            ctx->pc = 0x245B84u;
            goto label_245b84;
        }
    }
    ctx->pc = 0x245B58u;
label_245b58:
    // 0x245b58: 0xc089622  jal         func_225888
    ctx->pc = 0x245B58u;
    SET_GPR_U32(ctx, 31, 0x245B60u);
    ctx->pc = 0x245B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245B58u;
    // 0x245b5c: 0x24040055  addiu       $a0, $zero, 0x55 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225888u, 0x245B58u, 0x245B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245B60u;
label_245b60:
    // 0x245b60: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x245B60u;
    {
        const bool branch_taken_0x245b60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x245B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245B60u;
        // 0x245b64: 0x3c020016  lui         $v0, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245b60) {
            ctx->pc = 0x245B84u;
            goto label_245b84;
        }
    }
    ctx->pc = 0x245B68u;
    // 0x245b68: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x245B68u;
    {
        const bool branch_taken_0x245b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245B68u;
        // 0x245b6c: 0x8c506904  lw          $s0, 0x6904($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 26884)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245b68) {
            ctx->pc = 0x245B84u;
            goto label_245b84;
        }
    }
    ctx->pc = 0x245B70u;
label_245b70:
    // 0x245b70: 0xc089622  jal         func_225888
    ctx->pc = 0x245B70u;
    SET_GPR_U32(ctx, 31, 0x245B78u);
    ctx->pc = 0x245B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245B70u;
    // 0x245b74: 0x2404004e  addiu       $a0, $zero, 0x4E (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225888u, 0x245B70u, 0x245B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245B78u;
label_245b78:
    // 0x245b78: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x245B78u;
    {
        const bool branch_taken_0x245b78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x245B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245B78u;
        // 0x245b7c: 0x3c020016  lui         $v0, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245b78) {
            ctx->pc = 0x245B84u;
            goto label_245b84;
        }
    }
    ctx->pc = 0x245B80u;
    // 0x245b80: 0x8c506908  lw          $s0, 0x6908($v0)
    ctx->pc = 0x245b80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 26888)));
label_245b84:
    // 0x245b84: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x245b84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245b88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x245b88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_245b8c:
    // 0x245b8c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x245b8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x245b90: 0x3e00008  jr          $ra
    ctx->pc = 0x245B90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x245B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245B90u;
        // 0x245b94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245B90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x245B98u;
}
