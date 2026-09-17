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

// Function: sub_00340A00
// Address: 0x340a00 - 0x340a68
void sub_00340A00_0x340a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00340A00_0x340a00");
#endif

    switch (ctx->pc) {
        case 0x340a00u: goto label_340a00;
        case 0x340a04u: goto label_340a04;
        case 0x340a08u: goto label_340a08;
        case 0x340a0cu: goto label_340a0c;
        case 0x340a10u: goto label_340a10;
        case 0x340a14u: goto label_340a14;
        case 0x340a18u: goto label_340a18;
        case 0x340a1cu: goto label_340a1c;
        case 0x340a20u: goto label_340a20;
        case 0x340a24u: goto label_340a24;
        case 0x340a28u: goto label_340a28;
        case 0x340a2cu: goto label_340a2c;
        case 0x340a30u: goto label_340a30;
        case 0x340a34u: goto label_340a34;
        case 0x340a38u: goto label_340a38;
        case 0x340a3cu: goto label_340a3c;
        case 0x340a40u: goto label_340a40;
        case 0x340a44u: goto label_340a44;
        case 0x340a48u: goto label_340a48;
        case 0x340a4cu: goto label_340a4c;
        case 0x340a50u: goto label_340a50;
        case 0x340a54u: goto label_340a54;
        case 0x340a58u: goto label_340a58;
        case 0x340a5cu: goto label_340a5c;
        case 0x340a60u: goto label_340a60;
        case 0x340a64u: goto label_340a64;
        default: break;
    }

    ctx->pc = 0x340a00u;

label_340a00:
    // 0x340a00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x340a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_340a04:
    // 0x340a04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x340a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_340a08:
    // 0x340a08: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x340a08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_340a0c:
    // 0x340a0c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x340a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_340a10:
    // 0x340a10: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x340a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_340a14:
    // 0x340a14: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x340a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_340a18:
    // 0x340a18: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_340a1c:
    if (ctx->pc == 0x340A1Cu) {
        ctx->pc = 0x340A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340A18u;
        // 0x340a1c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340A20u;
        goto label_340a20;
    }
    ctx->pc = 0x340A18u;
    {
        const bool branch_taken_0x340a18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x340a18) {
            ctx->pc = 0x340A1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x340A18u;
            // 0x340a1c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x340A58u;
            goto label_340a58;
        }
    }
    ctx->pc = 0x340A20u;
label_340a20:
    // 0x340a20: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x340a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_340a24:
    // 0x340a24: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x340a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_340a28:
    // 0x340a28: 0x40f809  jalr        $v0
label_340a2c:
    if (ctx->pc == 0x340A2Cu) {
        ctx->pc = 0x340A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340A28u;
        // 0x340a2c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340A30u;
        goto label_340a30;
    }
    ctx->pc = 0x340A28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x340A30u);
        ctx->pc = 0x340A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340A28u;
        // 0x340a2c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x340A28u, 0x340A30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x340A30u;
label_340a30:
    // 0x340a30: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x340a30u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_340a34:
    // 0x340a34: 0x4620008  bltzl       $v1, . + 4 + (0x8 << 2)
label_340a38:
    if (ctx->pc == 0x340A38u) {
        ctx->pc = 0x340A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340A34u;
        // 0x340a38: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340A3Cu;
        goto label_340a3c;
    }
    ctx->pc = 0x340A34u;
    {
        const bool branch_taken_0x340a34 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x340a34) {
            ctx->pc = 0x340A38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x340A34u;
            // 0x340a38: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x340A58u;
            goto label_340a58;
        }
    }
    ctx->pc = 0x340A3Cu;
label_340a3c:
    // 0x340a3c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x340a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_340a40:
    // 0x340a40: 0x34440003  ori         $a0, $v0, 0x3
    ctx->pc = 0x340a40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
label_340a44:
    // 0x340a44: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x340a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_340a48:
    // 0x340a48: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_340a4c:
    if (ctx->pc == 0x340A4Cu) {
        ctx->pc = 0x340A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340A48u;
        // 0x340a4c: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340A50u;
        goto label_340a50;
    }
    ctx->pc = 0x340A48u;
    {
        const bool branch_taken_0x340a48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x340A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340A48u;
        // 0x340a4c: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340a48) {
            ctx->pc = 0x340A54u;
            goto label_340a54;
        }
    }
    ctx->pc = 0x340A50u;
label_340a50:
    // 0x340a50: 0xae040010  sw          $a0, 0x10($s0)
    ctx->pc = 0x340a50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
label_340a54:
    // 0x340a54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x340a54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_340a58:
    // 0x340a58: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x340a58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_340a5c:
    // 0x340a5c: 0x3e00008  jr          $ra
label_340a60:
    if (ctx->pc == 0x340A60u) {
        ctx->pc = 0x340A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340A5Cu;
        // 0x340a60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340A64u;
        goto label_340a64;
    }
    ctx->pc = 0x340A5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x340A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340A5Cu;
        // 0x340a60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x340A5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x340A64u;
label_340a64:
    // 0x340a64: 0x0  nop
    ctx->pc = 0x340a64u;
    // NOP
    ctx->pc = 0x340a68u;
}
