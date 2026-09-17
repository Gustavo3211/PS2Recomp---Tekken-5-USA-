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

// Function: sub_00126AF8
// Address: 0x126af8 - 0x126b58
void sub_00126AF8_0x126af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126AF8_0x126af8");
#endif

    switch (ctx->pc) {
        case 0x126af8u: goto label_126af8;
        case 0x126afcu: goto label_126afc;
        case 0x126b00u: goto label_126b00;
        case 0x126b04u: goto label_126b04;
        case 0x126b08u: goto label_126b08;
        case 0x126b0cu: goto label_126b0c;
        case 0x126b10u: goto label_126b10;
        case 0x126b14u: goto label_126b14;
        case 0x126b18u: goto label_126b18;
        case 0x126b1cu: goto label_126b1c;
        case 0x126b20u: goto label_126b20;
        case 0x126b24u: goto label_126b24;
        case 0x126b28u: goto label_126b28;
        case 0x126b2cu: goto label_126b2c;
        case 0x126b30u: goto label_126b30;
        case 0x126b34u: goto label_126b34;
        case 0x126b38u: goto label_126b38;
        case 0x126b3cu: goto label_126b3c;
        case 0x126b40u: goto label_126b40;
        case 0x126b44u: goto label_126b44;
        case 0x126b48u: goto label_126b48;
        case 0x126b4cu: goto label_126b4c;
        case 0x126b50u: goto label_126b50;
        case 0x126b54u: goto label_126b54;
        default: break;
    }

    ctx->pc = 0x126af8u;

label_126af8:
    // 0x126af8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x126af8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_126afc:
    // 0x126afc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x126afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_126b00:
    // 0x126b00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x126b00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_126b04:
    // 0x126b04: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
label_126b08:
    if (ctx->pc == 0x126B08u) {
        ctx->pc = 0x126B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126B04u;
        // 0x126b08: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126B0Cu;
        goto label_126b0c;
    }
    ctx->pc = 0x126B04u;
    {
        const bool branch_taken_0x126b04 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x126B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126B04u;
        // 0x126b08: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126b04) {
            ctx->pc = 0x126B1Cu;
            goto label_126b1c;
        }
    }
    ctx->pc = 0x126B0Cu;
label_126b0c:
    // 0x126b0c: 0x84c40004  lh          $a0, 0x4($a2)
    ctx->pc = 0x126b0cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
label_126b10:
    // 0x126b10: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x126b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_126b14:
    // 0x126b14: 0x1483000c  bne         $a0, $v1, . + 4 + (0xC << 2)
label_126b18:
    if (ctx->pc == 0x126B18u) {
        ctx->pc = 0x126B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126B14u;
        // 0x126b18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126B1Cu;
        goto label_126b1c;
    }
    ctx->pc = 0x126B14u;
    {
        const bool branch_taken_0x126b14 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x126B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126B14u;
        // 0x126b18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126b14) {
            ctx->pc = 0x126B48u;
            goto label_126b48;
        }
    }
    ctx->pc = 0x126B1Cu;
label_126b1c:
    // 0x126b1c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x126b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_126b20:
    // 0x126b20: 0x10a30009  beq         $a1, $v1, . + 4 + (0x9 << 2)
label_126b24:
    if (ctx->pc == 0x126B24u) {
        ctx->pc = 0x126B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126B20u;
        // 0x126b24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126B28u;
        goto label_126b28;
    }
    ctx->pc = 0x126B20u;
    {
        const bool branch_taken_0x126b20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x126B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126B20u;
        // 0x126b24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126b20) {
            ctx->pc = 0x126B48u;
            goto label_126b48;
        }
    }
    ctx->pc = 0x126B28u;
label_126b28:
    // 0x126b28: 0xa0f809  jalr        $a1
label_126b2c:
    if (ctx->pc == 0x126B2Cu) {
        ctx->pc = 0x126B30u;
        goto label_126b30;
    }
    ctx->pc = 0x126B28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x126B30u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126B28u, 0x126B30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x126B30u;
label_126b30:
    // 0x126b30: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x126b30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_126b34:
    // 0x126b34: 0x8e060028  lw          $a2, 0x28($s0)
    ctx->pc = 0x126b34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_126b38:
    // 0x126b38: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x126b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_126b3c:
    // 0x126b3c: 0xc04972c  jal         func_125CB0
label_126b40:
    if (ctx->pc == 0x126B40u) {
        ctx->pc = 0x126B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126B3Cu;
        // 0x126b40: 0x26070008  addiu       $a3, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126B44u;
        goto label_126b44;
    }
    ctx->pc = 0x126B3Cu;
    SET_GPR_U32(ctx, 31, 0x126B44u);
    ctx->pc = 0x126B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126B3Cu;
    // 0x126b40: 0x26070008  addiu       $a3, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125CB0u, 0x126B3Cu, 0x126B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126B44u;
label_126b44:
    // 0x126b44: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x126b44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_126b48:
    // 0x126b48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x126b48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_126b4c:
    // 0x126b4c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x126b4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_126b50:
    // 0x126b50: 0x3e00008  jr          $ra
label_126b54:
    if (ctx->pc == 0x126B54u) {
        ctx->pc = 0x126B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126B50u;
        // 0x126b54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126B58u;
        goto label_fallthrough_0x126b50;
    }
    ctx->pc = 0x126B50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126B50u;
        // 0x126b54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126B50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x126b50:
    ctx->pc = 0x126B58u;
}
