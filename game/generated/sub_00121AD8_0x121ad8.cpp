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

// Function: sub_00121AD8
// Address: 0x121ad8 - 0x121c28
void sub_00121AD8_0x121ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00121AD8_0x121ad8");
#endif

    switch (ctx->pc) {
        case 0x121ad8u: goto label_121ad8;
        case 0x121adcu: goto label_121adc;
        case 0x121ae0u: goto label_121ae0;
        case 0x121ae4u: goto label_121ae4;
        case 0x121ae8u: goto label_121ae8;
        case 0x121aecu: goto label_121aec;
        case 0x121af0u: goto label_121af0;
        case 0x121af4u: goto label_121af4;
        case 0x121af8u: goto label_121af8;
        case 0x121afcu: goto label_121afc;
        case 0x121b00u: goto label_121b00;
        case 0x121b04u: goto label_121b04;
        case 0x121b08u: goto label_121b08;
        case 0x121b0cu: goto label_121b0c;
        case 0x121b10u: goto label_121b10;
        case 0x121b14u: goto label_121b14;
        case 0x121b18u: goto label_121b18;
        case 0x121b1cu: goto label_121b1c;
        case 0x121b20u: goto label_121b20;
        case 0x121b24u: goto label_121b24;
        case 0x121b28u: goto label_121b28;
        case 0x121b2cu: goto label_121b2c;
        case 0x121b30u: goto label_121b30;
        case 0x121b34u: goto label_121b34;
        case 0x121b38u: goto label_121b38;
        case 0x121b3cu: goto label_121b3c;
        case 0x121b40u: goto label_121b40;
        case 0x121b44u: goto label_121b44;
        case 0x121b48u: goto label_121b48;
        case 0x121b4cu: goto label_121b4c;
        case 0x121b50u: goto label_121b50;
        case 0x121b54u: goto label_121b54;
        case 0x121b58u: goto label_121b58;
        case 0x121b5cu: goto label_121b5c;
        case 0x121b60u: goto label_121b60;
        case 0x121b64u: goto label_121b64;
        case 0x121b68u: goto label_121b68;
        case 0x121b6cu: goto label_121b6c;
        case 0x121b70u: goto label_121b70;
        case 0x121b74u: goto label_121b74;
        case 0x121b78u: goto label_121b78;
        case 0x121b7cu: goto label_121b7c;
        case 0x121b80u: goto label_121b80;
        case 0x121b84u: goto label_121b84;
        case 0x121b88u: goto label_121b88;
        case 0x121b8cu: goto label_121b8c;
        case 0x121b90u: goto label_121b90;
        case 0x121b94u: goto label_121b94;
        case 0x121b98u: goto label_121b98;
        case 0x121b9cu: goto label_121b9c;
        case 0x121ba0u: goto label_121ba0;
        case 0x121ba4u: goto label_121ba4;
        case 0x121ba8u: goto label_121ba8;
        case 0x121bacu: goto label_121bac;
        case 0x121bb0u: goto label_121bb0;
        case 0x121bb4u: goto label_121bb4;
        case 0x121bb8u: goto label_121bb8;
        case 0x121bbcu: goto label_121bbc;
        case 0x121bc0u: goto label_121bc0;
        case 0x121bc4u: goto label_121bc4;
        case 0x121bc8u: goto label_121bc8;
        case 0x121bccu: goto label_121bcc;
        case 0x121bd0u: goto label_121bd0;
        case 0x121bd4u: goto label_121bd4;
        case 0x121bd8u: goto label_121bd8;
        case 0x121bdcu: goto label_121bdc;
        case 0x121be0u: goto label_121be0;
        case 0x121be4u: goto label_121be4;
        case 0x121be8u: goto label_121be8;
        case 0x121becu: goto label_121bec;
        case 0x121bf0u: goto label_121bf0;
        case 0x121bf4u: goto label_121bf4;
        case 0x121bf8u: goto label_121bf8;
        case 0x121bfcu: goto label_121bfc;
        case 0x121c00u: goto label_121c00;
        case 0x121c04u: goto label_121c04;
        case 0x121c08u: goto label_121c08;
        case 0x121c0cu: goto label_121c0c;
        case 0x121c10u: goto label_121c10;
        case 0x121c14u: goto label_121c14;
        case 0x121c18u: goto label_121c18;
        case 0x121c1cu: goto label_121c1c;
        case 0x121c20u: goto label_121c20;
        case 0x121c24u: goto label_121c24;
        default: break;
    }

    ctx->pc = 0x121ad8u;

label_121ad8:
    // 0x121ad8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x121ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_121adc:
    // 0x121adc: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x121adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
label_121ae0:
    // 0x121ae0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x121ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_121ae4:
    // 0x121ae4: 0x24444374  addiu       $a0, $v0, 0x4374
    ctx->pc = 0x121ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 17268));
label_121ae8:
    // 0x121ae8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x121ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_121aec:
    // 0x121aec: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x121aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_121af0:
    // 0x121af0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x121af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_121af4:
    // 0x121af4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_121af8:
    if (ctx->pc == 0x121AF8u) {
        ctx->pc = 0x121AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121AF4u;
        // 0x121af8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121AFCu;
        goto label_121afc;
    }
    ctx->pc = 0x121AF4u;
    {
        const bool branch_taken_0x121af4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121AF4u;
        // 0x121af8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121af4) {
            ctx->pc = 0x121B24u;
            goto label_121b24;
        }
    }
    ctx->pc = 0x121AFCu;
label_121afc:
    // 0x121afc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x121afcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_121b00:
    // 0x121b00: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x121b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_121b04:
    // 0x121b04: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x121b04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_121b08:
    // 0x121b08: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x121b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_121b0c:
    // 0x121b0c: 0x60f809  jalr        $v1
label_121b10:
    if (ctx->pc == 0x121B10u) {
        ctx->pc = 0x121B14u;
        goto label_121b14;
    }
    ctx->pc = 0x121B0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x121B14u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121B0Cu, 0x121B14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x121B14u;
label_121b14:
    // 0x121b14: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x121b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_121b18:
    // 0x121b18: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x121b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_121b1c:
    // 0x121b1c: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_121b20:
    if (ctx->pc == 0x121B20u) {
        ctx->pc = 0x121B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121B1Cu;
        // 0x121b20: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121B24u;
        goto label_121b24;
    }
    ctx->pc = 0x121B1Cu;
    {
        const bool branch_taken_0x121b1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x121b1c) {
            ctx->pc = 0x121B20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x121B1Cu;
            // 0x121b20: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x121B00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_121b00;
        }
    }
    ctx->pc = 0x121B24u;
label_121b24:
    // 0x121b24: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x121b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
label_121b28:
    // 0x121b28: 0x24454378  addiu       $a1, $v0, 0x4378
    ctx->pc = 0x121b28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 17272));
label_121b2c:
    // 0x121b2c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x121b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_121b30:
    // 0x121b30: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_121b34:
    if (ctx->pc == 0x121B34u) {
        ctx->pc = 0x121B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121B30u;
        // 0x121b34: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121B38u;
        goto label_121b38;
    }
    ctx->pc = 0x121B30u;
    {
        const bool branch_taken_0x121b30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x121B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121B30u;
        // 0x121b34: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121b30) {
            ctx->pc = 0x121B58u;
            goto label_121b58;
        }
    }
    ctx->pc = 0x121B38u;
label_121b38:
    // 0x121b38: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x121b38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
label_121b3c:
    // 0x121b3c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x121b3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_121b40:
    // 0x121b40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x121b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_121b44:
    // 0x121b44: 0x24844d88  addiu       $a0, $a0, 0x4D88
    ctx->pc = 0x121b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19848));
label_121b48:
    // 0x121b48: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x121b48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_121b4c:
    // 0x121b4c: 0x804904e  j           func_124138
label_121b50:
    if (ctx->pc == 0x121B50u) {
        ctx->pc = 0x121B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121B4Cu;
        // 0x121b50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121B54u;
        goto label_121b54;
    }
    ctx->pc = 0x121B4Cu;
    ctx->pc = 0x121B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121B4Cu;
    // 0x121b50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124138u;
    sub_00124138_0x124138(rdram, ctx, runtime); return;
    ctx->pc = 0x121B54u;
label_121b54:
    // 0x121b54: 0x0  nop
    ctx->pc = 0x121b54u;
    // NOP
label_121b58:
    // 0x121b58: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x121b58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_121b5c:
    // 0x121b5c: 0x3e00008  jr          $ra
label_121b60:
    if (ctx->pc == 0x121B60u) {
        ctx->pc = 0x121B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121B5Cu;
        // 0x121b60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121B64u;
        goto label_121b64;
    }
    ctx->pc = 0x121B5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x121B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121B5Cu;
        // 0x121b60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121B5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x121B64u;
label_121b64:
    // 0x121b64: 0x0  nop
    ctx->pc = 0x121b64u;
    // NOP
label_121b68:
    // 0x121b68: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x121b68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
label_121b6c:
    // 0x121b6c: 0x3c05001f  lui         $a1, 0x1F
    ctx->pc = 0x121b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)31 << 16));
label_121b70:
    // 0x121b70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x121b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_121b74:
    // 0x121b74: 0x24844d88  addiu       $a0, $a0, 0x4D88
    ctx->pc = 0x121b74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19848));
label_121b78:
    // 0x121b78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x121b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_121b7c:
    // 0x121b7c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x121b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_121b80:
    // 0x121b80: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x121b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_121b84:
    // 0x121b84: 0xc049002  jal         func_124008
label_121b88:
    if (ctx->pc == 0x121B88u) {
        ctx->pc = 0x121B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121B84u;
        // 0x121b88: 0x24a5fad8  addiu       $a1, $a1, -0x528 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965976));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121B8Cu;
        goto label_121b8c;
    }
    ctx->pc = 0x121B84u;
    SET_GPR_U32(ctx, 31, 0x121B8Cu);
    ctx->pc = 0x121B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121B84u;
    // 0x121b88: 0x24a5fad8  addiu       $a1, $a1, -0x528 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124008u, 0x121B84u, 0x121B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121B8Cu;
label_121b8c:
    // 0x121b8c: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x121b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
label_121b90:
    // 0x121b90: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x121b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_121b94:
    // 0x121b94: 0x24450d04  addiu       $a1, $v0, 0xD04
    ctx->pc = 0x121b94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 3332));
label_121b98:
    // 0x121b98: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x121b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_121b9c:
    // 0x121b9c: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
label_121ba0:
    if (ctx->pc == 0x121BA0u) {
        ctx->pc = 0x121BA4u;
        goto label_121ba4;
    }
    ctx->pc = 0x121B9Cu;
    {
        const bool branch_taken_0x121b9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x121b9c) {
            ctx->pc = 0x121BD8u;
            goto label_121bd8;
        }
    }
    ctx->pc = 0x121BA4u;
label_121ba4:
    // 0x121ba4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x121ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_121ba8:
    // 0x121ba8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_121bac:
    if (ctx->pc == 0x121BACu) {
        ctx->pc = 0x121BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121BA8u;
        // 0x121bac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121BB0u;
        goto label_121bb0;
    }
    ctx->pc = 0x121BA8u;
    {
        const bool branch_taken_0x121ba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121BA8u;
        // 0x121bac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121ba8) {
            ctx->pc = 0x121BD8u;
            goto label_121bd8;
        }
    }
    ctx->pc = 0x121BB0u;
label_121bb0:
    // 0x121bb0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x121bb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_121bb4:
    // 0x121bb4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x121bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_121bb8:
    // 0x121bb8: 0x64a50004  daddiu      $a1, $a1, 0x4
    ctx->pc = 0x121bb8u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4);
label_121bbc:
    // 0x121bbc: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x121bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
label_121bc0:
    // 0x121bc0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x121bc0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_121bc4:
    // 0x121bc4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x121bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_121bc8:
    // 0x121bc8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x121bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_121bcc:
    // 0x121bcc: 0x0  nop
    ctx->pc = 0x121bccu;
    // NOP
label_121bd0:
    // 0x121bd0: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_121bd4:
    if (ctx->pc == 0x121BD4u) {
        ctx->pc = 0x121BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121BD0u;
        // 0x121bd4: 0x64840001  daddiu      $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x121BD8u;
        goto label_121bd8;
    }
    ctx->pc = 0x121BD0u;
    {
        const bool branch_taken_0x121bd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x121BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121BD0u;
        // 0x121bd4: 0x64840001  daddiu      $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x121bd0) {
            ctx->pc = 0x121BB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_121bb8;
        }
    }
    ctx->pc = 0x121BD8u;
label_121bd8:
    // 0x121bd8: 0x4803c  dsll32      $s0, $a0, 0
    ctx->pc = 0x121bd8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) << (32 + 0));
label_121bdc:
    // 0x121bdc: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x121bdcu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
label_121be0:
    // 0x121be0: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_121be4:
    if (ctx->pc == 0x121BE4u) {
        ctx->pc = 0x121BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121BE0u;
        // 0x121be4: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121BE8u;
        goto label_121be8;
    }
    ctx->pc = 0x121BE0u;
    {
        const bool branch_taken_0x121be0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x121BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121BE0u;
        // 0x121be4: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121be0) {
            ctx->pc = 0x121C0Cu;
            goto label_121c0c;
        }
    }
    ctx->pc = 0x121BE8u;
label_121be8:
    // 0x121be8: 0x3c110013  lui         $s1, 0x13
    ctx->pc = 0x121be8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)19 << 16));
label_121bec:
    // 0x121bec: 0x26310d04  addiu       $s1, $s1, 0xD04
    ctx->pc = 0x121becu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3332));
label_121bf0:
    // 0x121bf0: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x121bf0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_121bf4:
    // 0x121bf4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x121bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_121bf8:
    // 0x121bf8: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x121bf8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
label_121bfc:
    // 0x121bfc: 0x40f809  jalr        $v0
label_121c00:
    if (ctx->pc == 0x121C00u) {
        ctx->pc = 0x121C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121BFCu;
        // 0x121c00: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121C04u;
        goto label_121c04;
    }
    ctx->pc = 0x121BFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x121C04u);
        ctx->pc = 0x121C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121BFCu;
        // 0x121c00: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121BFCu, 0x121C04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x121C04u;
label_121c04:
    // 0x121c04: 0x5600fffc  bnel        $s0, $zero, . + 4 + (-0x4 << 2)
label_121c08:
    if (ctx->pc == 0x121C08u) {
        ctx->pc = 0x121C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121C04u;
        // 0x121c08: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121C0Cu;
        goto label_121c0c;
    }
    ctx->pc = 0x121C04u;
    {
        const bool branch_taken_0x121c04 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x121c04) {
            ctx->pc = 0x121C08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x121C04u;
            // 0x121c08: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x121BF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_121bf8;
        }
    }
    ctx->pc = 0x121C0Cu;
label_121c0c:
    // 0x121c0c: 0x3c040012  lui         $a0, 0x12
    ctx->pc = 0x121c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)18 << 16));
label_121c10:
    // 0x121c10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x121c10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_121c14:
    // 0x121c14: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x121c14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_121c18:
    // 0x121c18: 0x24841ad8  addiu       $a0, $a0, 0x1AD8
    ctx->pc = 0x121c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6872));
label_121c1c:
    // 0x121c1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x121c1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_121c20:
    // 0x121c20: 0x8049d50  j           func_127540
label_121c24:
    if (ctx->pc == 0x121C24u) {
        ctx->pc = 0x121C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121C20u;
        // 0x121c24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121C28u;
        goto label_fallthrough_0x121c20;
    }
    ctx->pc = 0x121C20u;
    ctx->pc = 0x121C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121C20u;
    // 0x121c24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127540u;
    sub_00127540_0x127540(rdram, ctx, runtime); return;
label_fallthrough_0x121c20:
    ctx->pc = 0x121C28u;
}
