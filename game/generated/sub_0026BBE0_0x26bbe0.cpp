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

// Function: sub_0026BBE0
// Address: 0x26bbe0 - 0x26bc90
void sub_0026BBE0_0x26bbe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026BBE0_0x26bbe0");
#endif

    switch (ctx->pc) {
        case 0x26bbe0u: goto label_26bbe0;
        case 0x26bbe4u: goto label_26bbe4;
        case 0x26bbe8u: goto label_26bbe8;
        case 0x26bbecu: goto label_26bbec;
        case 0x26bbf0u: goto label_26bbf0;
        case 0x26bbf4u: goto label_26bbf4;
        case 0x26bbf8u: goto label_26bbf8;
        case 0x26bbfcu: goto label_26bbfc;
        case 0x26bc00u: goto label_26bc00;
        case 0x26bc04u: goto label_26bc04;
        case 0x26bc08u: goto label_26bc08;
        case 0x26bc0cu: goto label_26bc0c;
        case 0x26bc10u: goto label_26bc10;
        case 0x26bc14u: goto label_26bc14;
        case 0x26bc18u: goto label_26bc18;
        case 0x26bc1cu: goto label_26bc1c;
        case 0x26bc20u: goto label_26bc20;
        case 0x26bc24u: goto label_26bc24;
        case 0x26bc28u: goto label_26bc28;
        case 0x26bc2cu: goto label_26bc2c;
        case 0x26bc30u: goto label_26bc30;
        case 0x26bc34u: goto label_26bc34;
        case 0x26bc38u: goto label_26bc38;
        case 0x26bc3cu: goto label_26bc3c;
        case 0x26bc40u: goto label_26bc40;
        case 0x26bc44u: goto label_26bc44;
        case 0x26bc48u: goto label_26bc48;
        case 0x26bc4cu: goto label_26bc4c;
        case 0x26bc50u: goto label_26bc50;
        case 0x26bc54u: goto label_26bc54;
        case 0x26bc58u: goto label_26bc58;
        case 0x26bc5cu: goto label_26bc5c;
        case 0x26bc60u: goto label_26bc60;
        case 0x26bc64u: goto label_26bc64;
        case 0x26bc68u: goto label_26bc68;
        case 0x26bc6cu: goto label_26bc6c;
        case 0x26bc70u: goto label_26bc70;
        case 0x26bc74u: goto label_26bc74;
        case 0x26bc78u: goto label_26bc78;
        case 0x26bc7cu: goto label_26bc7c;
        case 0x26bc80u: goto label_26bc80;
        case 0x26bc84u: goto label_26bc84;
        case 0x26bc88u: goto label_26bc88;
        case 0x26bc8cu: goto label_26bc8c;
        default: break;
    }

    ctx->pc = 0x26bbe0u;

label_26bbe0:
    // 0x26bbe0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26bbe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_26bbe4:
    // 0x26bbe4: 0x8f85aa78  lw          $a1, -0x5588($gp)
    ctx->pc = 0x26bbe4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
label_26bbe8:
    // 0x26bbe8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26bbe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_26bbec:
    // 0x26bbec: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x26bbecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
label_26bbf0:
    // 0x26bbf0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x26bbf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_26bbf4:
    // 0x26bbf4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x26bbf4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26bbf8:
    // 0x26bbf8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x26bbf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_26bbfc:
    // 0x26bbfc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x26bbfcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26bc00:
    // 0x26bc00: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x26bc00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_26bc04:
    // 0x26bc04: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x26bc04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26bc08:
    // 0x26bc08: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x26bc08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_26bc0c:
    // 0x26bc0c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x26bc0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_26bc10:
    // 0x26bc10: 0x8ca300a4  lw          $v1, 0xA4($a1)
    ctx->pc = 0x26bc10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 164)));
label_26bc14:
    // 0x26bc14: 0x18600011  blez        $v1, . + 4 + (0x11 << 2)
label_26bc18:
    if (ctx->pc == 0x26BC18u) {
        ctx->pc = 0x26BC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BC14u;
        // 0x26bc18: 0x2450f718  addiu       $s0, $v0, -0x8E8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965016));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BC1Cu;
        goto label_26bc1c;
    }
    ctx->pc = 0x26BC14u;
    {
        const bool branch_taken_0x26bc14 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x26BC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BC14u;
        // 0x26bc18: 0x2450f718  addiu       $s0, $v0, -0x8E8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965016));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bc14) {
            ctx->pc = 0x26BC5Cu;
            goto label_26bc5c;
        }
    }
    ctx->pc = 0x26BC1Cu;
label_26bc1c:
    // 0x26bc1c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x26bc1cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26bc20:
    // 0x26bc20: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x26bc20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_26bc24:
    // 0x26bc24: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_26bc28:
    if (ctx->pc == 0x26BC28u) {
        ctx->pc = 0x26BC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BC24u;
        // 0x26bc28: 0x8ca200a4  lw          $v0, 0xA4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BC2Cu;
        goto label_26bc2c;
    }
    ctx->pc = 0x26BC24u;
    {
        const bool branch_taken_0x26bc24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26bc24) {
            ctx->pc = 0x26BC28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26BC24u;
            // 0x26bc28: 0x8ca200a4  lw          $v0, 0xA4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 164)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26BC4Cu;
            goto label_26bc4c;
        }
    }
    ctx->pc = 0x26BC2Cu;
label_26bc2c:
    // 0x26bc2c: 0x260f809  jalr        $s3
label_26bc30:
    if (ctx->pc == 0x26BC30u) {
        ctx->pc = 0x26BC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BC2Cu;
        // 0x26bc30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BC34u;
        goto label_26bc34;
    }
    ctx->pc = 0x26BC2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x26BC34u);
        ctx->pc = 0x26BC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BC2Cu;
        // 0x26bc30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26BC2Cu, 0x26BC34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26BC34u;
label_26bc34:
    // 0x26bc34: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_26bc38:
    if (ctx->pc == 0x26BC38u) {
        ctx->pc = 0x26BC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BC34u;
        // 0x26bc38: 0x8f85aa78  lw          $a1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BC3Cu;
        goto label_26bc3c;
    }
    ctx->pc = 0x26BC34u;
    {
        const bool branch_taken_0x26bc34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BC34u;
        // 0x26bc38: 0x8f85aa78  lw          $a1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bc34) {
            ctx->pc = 0x26BC48u;
            goto label_26bc48;
        }
    }
    ctx->pc = 0x26BC3Cu;
label_26bc3c:
    // 0x26bc3c: 0xa6140000  sh          $s4, 0x0($s0)
    ctx->pc = 0x26bc3cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 20));
label_26bc40:
    // 0x26bc40: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x26bc40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_26bc44:
    // 0x26bc44: 0x8f85aa78  lw          $a1, -0x5588($gp)
    ctx->pc = 0x26bc44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
label_26bc48:
    // 0x26bc48: 0x8ca200a4  lw          $v0, 0xA4($a1)
    ctx->pc = 0x26bc48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 164)));
label_26bc4c:
    // 0x26bc4c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x26bc4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_26bc50:
    // 0x26bc50: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x26bc50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_26bc54:
    // 0x26bc54: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_26bc58:
    if (ctx->pc == 0x26BC58u) {
        ctx->pc = 0x26BC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BC54u;
        // 0x26bc58: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BC5Cu;
        goto label_26bc5c;
    }
    ctx->pc = 0x26BC54u;
    {
        const bool branch_taken_0x26bc54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26BC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BC54u;
        // 0x26bc58: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bc54) {
            ctx->pc = 0x26BC20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26bc20;
        }
    }
    ctx->pc = 0x26BC5Cu;
label_26bc5c:
    // 0x26bc5c: 0x8ca300a8  lw          $v1, 0xA8($a1)
    ctx->pc = 0x26bc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 168)));
label_26bc60:
    // 0x26bc60: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x26bc60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26bc64:
    // 0x26bc64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26bc64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_26bc68:
    // 0x26bc68: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x26bc68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_26bc6c:
    // 0x26bc6c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x26bc6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_26bc70:
    // 0x26bc70: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x26bc70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_26bc74:
    // 0x26bc74: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x26bc74u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_26bc78:
    // 0x26bc78: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x26bc78u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_26bc7c:
    // 0x26bc7c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x26bc7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_26bc80:
    // 0x26bc80: 0xaca300a8  sw          $v1, 0xA8($a1)
    ctx->pc = 0x26bc80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 168), GPR_U32(ctx, 3));
label_26bc84:
    // 0x26bc84: 0x3e00008  jr          $ra
label_26bc88:
    if (ctx->pc == 0x26BC88u) {
        ctx->pc = 0x26BC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BC84u;
        // 0x26bc88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BC8Cu;
        goto label_26bc8c;
    }
    ctx->pc = 0x26BC84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26BC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BC84u;
        // 0x26bc88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26BC84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26BC8Cu;
label_26bc8c:
    // 0x26bc8c: 0x0  nop
    ctx->pc = 0x26bc8cu;
    // NOP
    ctx->pc = 0x26bc90u;
}
