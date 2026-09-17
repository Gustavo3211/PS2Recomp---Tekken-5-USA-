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

// Function: sub_00323AF8
// Address: 0x323af8 - 0x323b80
void sub_00323AF8_0x323af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323AF8_0x323af8");
#endif

    switch (ctx->pc) {
        case 0x323af8u: goto label_323af8;
        case 0x323afcu: goto label_323afc;
        case 0x323b00u: goto label_323b00;
        case 0x323b04u: goto label_323b04;
        case 0x323b08u: goto label_323b08;
        case 0x323b0cu: goto label_323b0c;
        case 0x323b10u: goto label_323b10;
        case 0x323b14u: goto label_323b14;
        case 0x323b18u: goto label_323b18;
        case 0x323b1cu: goto label_323b1c;
        case 0x323b20u: goto label_323b20;
        case 0x323b24u: goto label_323b24;
        case 0x323b28u: goto label_323b28;
        case 0x323b2cu: goto label_323b2c;
        case 0x323b30u: goto label_323b30;
        case 0x323b34u: goto label_323b34;
        case 0x323b38u: goto label_323b38;
        case 0x323b3cu: goto label_323b3c;
        case 0x323b40u: goto label_323b40;
        case 0x323b44u: goto label_323b44;
        case 0x323b48u: goto label_323b48;
        case 0x323b4cu: goto label_323b4c;
        case 0x323b50u: goto label_323b50;
        case 0x323b54u: goto label_323b54;
        case 0x323b58u: goto label_323b58;
        case 0x323b5cu: goto label_323b5c;
        case 0x323b60u: goto label_323b60;
        case 0x323b64u: goto label_323b64;
        case 0x323b68u: goto label_323b68;
        case 0x323b6cu: goto label_323b6c;
        case 0x323b70u: goto label_323b70;
        case 0x323b74u: goto label_323b74;
        case 0x323b78u: goto label_323b78;
        case 0x323b7cu: goto label_323b7c;
        default: break;
    }

    ctx->pc = 0x323af8u;

label_323af8:
    // 0x323af8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x323af8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_323afc:
    // 0x323afc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x323afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_323b00:
    // 0x323b00: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x323b00u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
label_323b04:
    // 0x323b04: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x323b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_323b08:
    // 0x323b08: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x323b08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_323b0c:
    // 0x323b0c: 0x261008c0  addiu       $s0, $s0, 0x8C0
    ctx->pc = 0x323b0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2240));
label_323b10:
    // 0x323b10: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x323b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_323b14:
    // 0x323b14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x323b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_323b18:
    // 0x323b18: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x323b18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_323b1c:
    // 0x323b1c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x323b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_323b20:
    // 0x323b20: 0xc0cb224  jal         func_32C890
label_323b24:
    if (ctx->pc == 0x323B24u) {
        ctx->pc = 0x323B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323B20u;
        // 0x323b24: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323B28u;
        goto label_323b28;
    }
    ctx->pc = 0x323B20u;
    SET_GPR_U32(ctx, 31, 0x323B28u);
    ctx->pc = 0x323B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323B20u;
    // 0x323b24: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C890u, 0x323B20u, 0x323B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323B28u;
label_323b28:
    // 0x323b28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x323b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_323b2c:
    // 0x323b2c: 0xc0cb224  jal         func_32C890
label_323b30:
    if (ctx->pc == 0x323B30u) {
        ctx->pc = 0x323B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323B2Cu;
        // 0x323b30: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323B34u;
        goto label_323b34;
    }
    ctx->pc = 0x323B2Cu;
    SET_GPR_U32(ctx, 31, 0x323B34u);
    ctx->pc = 0x323B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323B2Cu;
    // 0x323b30: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C890u, 0x323B2Cu, 0x323B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323B34u;
label_323b34:
    // 0x323b34: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x323b34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_323b38:
    // 0x323b38: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x323b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_323b3c:
    // 0x323b3c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_323b40:
    if (ctx->pc == 0x323B40u) {
        ctx->pc = 0x323B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323B3Cu;
        // 0x323b40: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323B44u;
        goto label_323b44;
    }
    ctx->pc = 0x323B3Cu;
    {
        const bool branch_taken_0x323b3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x323B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323B3Cu;
        // 0x323b40: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323b3c) {
            ctx->pc = 0x323B68u;
            goto label_323b68;
        }
    }
    ctx->pc = 0x323B44u;
label_323b44:
    // 0x323b44: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x323b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_323b48:
    // 0x323b48: 0x34430100  ori         $v1, $v0, 0x100
    ctx->pc = 0x323b48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_323b4c:
    // 0x323b4c: 0x304200c0  andi        $v0, $v0, 0xC0
    ctx->pc = 0x323b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)192);
label_323b50:
    // 0x323b50: 0x50460001  beql        $v0, $a2, . + 4 + (0x1 << 2)
label_323b54:
    if (ctx->pc == 0x323B54u) {
        ctx->pc = 0x323B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323B50u;
        // 0x323b54: 0xac830010  sw          $v1, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323B58u;
        goto label_323b58;
    }
    ctx->pc = 0x323B50u;
    {
        const bool branch_taken_0x323b50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x323b50) {
            ctx->pc = 0x323B54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x323B50u;
            // 0x323b54: 0xac830010  sw          $v1, 0x10($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x323B58u;
            goto label_323b58;
        }
    }
    ctx->pc = 0x323B58u;
label_323b58:
    // 0x323b58: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x323b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_323b5c:
    // 0x323b5c: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x323b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_323b60:
    // 0x323b60: 0x40f809  jalr        $v0
label_323b64:
    if (ctx->pc == 0x323B64u) {
        ctx->pc = 0x323B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323B60u;
        // 0x323b64: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323B68u;
        goto label_323b68;
    }
    ctx->pc = 0x323B60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x323B68u);
        ctx->pc = 0x323B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323B60u;
        // 0x323b64: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323B60u, 0x323B68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x323B68u;
label_323b68:
    // 0x323b68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x323b68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_323b6c:
    // 0x323b6c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x323b6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_323b70:
    // 0x323b70: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x323b70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_323b74:
    // 0x323b74: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x323b74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_323b78:
    // 0x323b78: 0x3e00008  jr          $ra
label_323b7c:
    if (ctx->pc == 0x323B7Cu) {
        ctx->pc = 0x323B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323B78u;
        // 0x323b7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323B80u;
        goto label_fallthrough_0x323b78;
    }
    ctx->pc = 0x323B78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323B78u;
        // 0x323b7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323B78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x323b78:
    ctx->pc = 0x323B80u;
}
