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

// Function: sub_00506AF8
// Address: 0x506af8 - 0x506bc8
void sub_00506AF8_0x506af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00506AF8_0x506af8");
#endif

    switch (ctx->pc) {
        case 0x506b1cu: goto label_506b1c;
        case 0x506b38u: goto label_506b38;
        case 0x506b80u: goto label_506b80;
        case 0x506b90u: goto label_506b90;
        default: break;
    }

    ctx->pc = 0x506af8u;

    // 0x506af8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x506af8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x506afc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x506afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x506b00: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x506b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x506b04: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x506b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x506b08: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x506b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x506b0c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x506b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x506b10: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x506b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x506b14: 0xc144aa4  jal         func_512A90
    ctx->pc = 0x506B14u;
    SET_GPR_U32(ctx, 31, 0x506B1Cu);
    ctx->pc = 0x512A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512A90u, 0x506B14u, 0x506B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x506B1Cu;
label_506b1c:
    // 0x506b1c: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x506b1cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x506b20: 0x86220008  lh          $v0, 0x8($s1)
    ctx->pc = 0x506b20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x506b24: 0x4400020  bltz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x506B24u;
    {
        const bool branch_taken_0x506b24 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x506B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x506B24u;
        // 0x506b28: 0x3050ffff  andi        $s0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x506b24) {
            ctx->pc = 0x506BA8u;
            goto label_506ba8;
        }
    }
    ctx->pc = 0x506B2Cu;
    // 0x506b2c: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x506b2cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x506b30: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x506b30u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x506b34: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x506b34u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_506b38:
    // 0x506b38: 0x101400  sll         $v0, $s0, 16
    ctx->pc = 0x506b38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x506b3c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x506b3cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x506b40: 0x54540014  bnel        $v0, $s4, . + 4 + (0x14 << 2)
    ctx->pc = 0x506B40u;
    {
        const bool branch_taken_0x506b40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x506b40) {
            ctx->pc = 0x506B44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x506B40u;
            // 0x506b44: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x506B94u;
            goto label_506b94;
        }
    }
    ctx->pc = 0x506B48u;
    // 0x506b48: 0x86220118  lh          $v0, 0x118($s1)
    ctx->pc = 0x506b48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x506b4c: 0x3604ffff  ori         $a0, $s0, 0xFFFF
    ctx->pc = 0x506b4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x506b50: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x506b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x506b54: 0x828024  and         $s0, $a0, $v0
    ctx->pc = 0x506b54u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x506b58: 0x101c00  sll         $v1, $s0, 16
    ctx->pc = 0x506b58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x506b5c: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x506b5cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x506b60: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x506B60u;
    {
        const bool branch_taken_0x506b60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x506b60) {
            ctx->pc = 0x506B78u;
            goto label_506b78;
        }
    }
    ctx->pc = 0x506B68u;
    // 0x506b68: 0x10730007  beq         $v1, $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x506B68u;
    {
        const bool branch_taken_0x506b68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        if (branch_taken_0x506b68) {
            ctx->pc = 0x506B88u;
            goto label_506b88;
        }
    }
    ctx->pc = 0x506B70u;
    // 0x506b70: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x506B70u;
    {
        const bool branch_taken_0x506b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x506B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x506B70u;
        // 0x506b74: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x506b70) {
            ctx->pc = 0x506B94u;
            goto label_506b94;
        }
    }
    ctx->pc = 0x506B78u;
label_506b78:
    // 0x506b78: 0xc141a68  jal         func_5069A0
    ctx->pc = 0x506B78u;
    SET_GPR_U32(ctx, 31, 0x506B80u);
    ctx->pc = 0x506B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x506B78u;
    // 0x506b7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5069A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5069A0u, 0x506B78u, 0x506B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x506B80u;
label_506b80:
    // 0x506b80: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x506B80u;
    {
        const bool branch_taken_0x506b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x506B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x506B80u;
        // 0x506b84: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x506b80) {
            ctx->pc = 0x506B94u;
            goto label_506b94;
        }
    }
    ctx->pc = 0x506B88u;
label_506b88:
    // 0x506b88: 0xc141a9a  jal         func_506A68
    ctx->pc = 0x506B88u;
    SET_GPR_U32(ctx, 31, 0x506B90u);
    ctx->pc = 0x506B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x506B88u;
    // 0x506b8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x506A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x506A68u, 0x506B88u, 0x506B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x506B90u;
label_506b90:
    // 0x506b90: 0x8e310004  lw          $s1, 0x4($s1)
    ctx->pc = 0x506b90u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_506b94:
    // 0x506b94: 0x3604ffff  ori         $a0, $s0, 0xFFFF
    ctx->pc = 0x506b94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x506b98: 0x86230008  lh          $v1, 0x8($s1)
    ctx->pc = 0x506b98u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x506b9c: 0x721025  or          $v0, $v1, $s2
    ctx->pc = 0x506b9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x506ba0: 0x461ffe5  bgez        $v1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x506BA0u;
    {
        const bool branch_taken_0x506ba0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x506BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x506BA0u;
        // 0x506ba4: 0x828024  and         $s0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x506ba0) {
            ctx->pc = 0x506B38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_506b38;
        }
    }
    ctx->pc = 0x506BA8u;
label_506ba8:
    // 0x506ba8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x506ba8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x506bac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x506bacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x506bb0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x506bb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x506bb4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x506bb4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x506bb8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x506bb8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x506bbc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x506bbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x506bc0: 0x3e00008  jr          $ra
    ctx->pc = 0x506BC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x506BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x506BC0u;
        // 0x506bc4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x506BC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x506BC8u;
}
