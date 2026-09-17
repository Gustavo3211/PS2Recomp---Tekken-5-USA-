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

// Function: sub_00488BA0
// Address: 0x488ba0 - 0x488c80
void sub_00488BA0_0x488ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00488BA0_0x488ba0");
#endif

    switch (ctx->pc) {
        case 0x488ba0u: goto label_488ba0;
        case 0x488ba4u: goto label_488ba4;
        case 0x488ba8u: goto label_488ba8;
        case 0x488bacu: goto label_488bac;
        case 0x488bb0u: goto label_488bb0;
        case 0x488bb4u: goto label_488bb4;
        case 0x488bb8u: goto label_488bb8;
        case 0x488bbcu: goto label_488bbc;
        case 0x488bc0u: goto label_488bc0;
        case 0x488bc4u: goto label_488bc4;
        case 0x488bc8u: goto label_488bc8;
        case 0x488bccu: goto label_488bcc;
        case 0x488bd0u: goto label_488bd0;
        case 0x488bd4u: goto label_488bd4;
        case 0x488bd8u: goto label_488bd8;
        case 0x488bdcu: goto label_488bdc;
        case 0x488be0u: goto label_488be0;
        case 0x488be4u: goto label_488be4;
        case 0x488be8u: goto label_488be8;
        case 0x488becu: goto label_488bec;
        case 0x488bf0u: goto label_488bf0;
        case 0x488bf4u: goto label_488bf4;
        case 0x488bf8u: goto label_488bf8;
        case 0x488bfcu: goto label_488bfc;
        case 0x488c00u: goto label_488c00;
        case 0x488c04u: goto label_488c04;
        case 0x488c08u: goto label_488c08;
        case 0x488c0cu: goto label_488c0c;
        case 0x488c10u: goto label_488c10;
        case 0x488c14u: goto label_488c14;
        case 0x488c18u: goto label_488c18;
        case 0x488c1cu: goto label_488c1c;
        case 0x488c20u: goto label_488c20;
        case 0x488c24u: goto label_488c24;
        case 0x488c28u: goto label_488c28;
        case 0x488c2cu: goto label_488c2c;
        case 0x488c30u: goto label_488c30;
        case 0x488c34u: goto label_488c34;
        case 0x488c38u: goto label_488c38;
        case 0x488c3cu: goto label_488c3c;
        case 0x488c40u: goto label_488c40;
        case 0x488c44u: goto label_488c44;
        case 0x488c48u: goto label_488c48;
        case 0x488c4cu: goto label_488c4c;
        case 0x488c50u: goto label_488c50;
        case 0x488c54u: goto label_488c54;
        case 0x488c58u: goto label_488c58;
        case 0x488c5cu: goto label_488c5c;
        case 0x488c60u: goto label_488c60;
        case 0x488c64u: goto label_488c64;
        case 0x488c68u: goto label_488c68;
        case 0x488c6cu: goto label_488c6c;
        case 0x488c70u: goto label_488c70;
        case 0x488c74u: goto label_488c74;
        case 0x488c78u: goto label_488c78;
        case 0x488c7cu: goto label_488c7c;
        default: break;
    }

    ctx->pc = 0x488ba0u;

label_488ba0:
    // 0x488ba0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x488ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_488ba4:
    // 0x488ba4: 0x3c03007c  lui         $v1, 0x7C
    ctx->pc = 0x488ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)124 << 16));
label_488ba8:
    // 0x488ba8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x488ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_488bac:
    // 0x488bac: 0x3c14007c  lui         $s4, 0x7C
    ctx->pc = 0x488bacu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)124 << 16));
label_488bb0:
    // 0x488bb0: 0x24635b14  addiu       $v1, $v1, 0x5B14
    ctx->pc = 0x488bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23316));
label_488bb4:
    // 0x488bb4: 0x26865800  addiu       $a2, $s4, 0x5800
    ctx->pc = 0x488bb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 22528));
label_488bb8:
    // 0x488bb8: 0x3c04007c  lui         $a0, 0x7C
    ctx->pc = 0x488bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)124 << 16));
label_488bbc:
    // 0x488bbc: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x488bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_488bc0:
    // 0x488bc0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x488bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_488bc4:
    // 0x488bc4: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x488bc4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
label_488bc8:
    // 0x488bc8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x488bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_488bcc:
    // 0x488bcc: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x488bccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_488bd0:
    // 0x488bd0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x488bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_488bd4:
    // 0x488bd4: 0x3c05007c  lui         $a1, 0x7C
    ctx->pc = 0x488bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)124 << 16));
label_488bd8:
    // 0x488bd8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x488bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_488bdc:
    // 0x488bdc: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x488bdcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_488be0:
    // 0x488be0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x488be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_488be4:
    // 0x488be4: 0x24b25b04  addiu       $s2, $a1, 0x5B04
    ctx->pc = 0x488be4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 23300));
label_488be8:
    // 0x488be8: 0xac825b10  sw          $v0, 0x5B10($a0)
    ctx->pc = 0x488be8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 23312), GPR_U32(ctx, 2));
label_488bec:
    // 0x488bec: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x488becu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
label_488bf0:
    // 0x488bf0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x488bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_488bf4:
    // 0x488bf4: 0x0  nop
    ctx->pc = 0x488bf4u;
    // NOP
label_488bf8:
    // 0x488bf8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x488bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_488bfc:
    // 0x488bfc: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x488bfcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_488c00:
    // 0x488c00: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x488c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_488c04:
    // 0x488c04: 0x902025  or          $a0, $a0, $s0
    ctx->pc = 0x488c04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 16));
label_488c08:
    // 0x488c08: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x488c08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_488c0c:
    // 0x488c0c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x488c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_488c10:
    // 0x488c10: 0x24650002  addiu       $a1, $v1, 0x2
    ctx->pc = 0x488c10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_488c14:
    // 0x488c14: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x488c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_488c18:
    // 0x488c18: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x488c18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_488c1c:
    // 0x488c1c: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x488c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
label_488c20:
    // 0x488c20: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x488c20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_488c24:
    // 0x488c24: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x488c24u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_488c28:
    // 0x488c28: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x488c28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
label_488c2c:
    // 0x488c2c: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x488c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
label_488c30:
    // 0x488c30: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x488c30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_488c34:
    // 0x488c34: 0x901824  and         $v1, $a0, $s0
    ctx->pc = 0x488c34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 16));
label_488c38:
    // 0x488c38: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x488c38u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
label_488c3c:
    // 0x488c3c: 0x10730006  beq         $v1, $s3, . + 4 + (0x6 << 2)
label_488c40:
    if (ctx->pc == 0x488C40u) {
        ctx->pc = 0x488C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488C3Cu;
        // 0x488c40: 0xae440000  sw          $a0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x488C44u;
        goto label_488c44;
    }
    ctx->pc = 0x488C3Cu;
    {
        const bool branch_taken_0x488c3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x488C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488C3Cu;
        // 0x488c40: 0xae440000  sw          $a0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x488c3c) {
            ctx->pc = 0x488C58u;
            goto label_488c58;
        }
    }
    ctx->pc = 0x488C44u;
label_488c44:
    // 0x488c44: 0x80f809  jalr        $a0
label_488c48:
    if (ctx->pc == 0x488C48u) {
        ctx->pc = 0x488C4Cu;
        goto label_488c4c;
    }
    ctx->pc = 0x488C44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        SET_GPR_U32(ctx, 31, 0x488C4Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x488C44u, 0x488C4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x488C4Cu;
label_488c4c:
    // 0x488c4c: 0x1000ffea  b           . + 4 + (-0x16 << 2)
label_488c50:
    if (ctx->pc == 0x488C50u) {
        ctx->pc = 0x488C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488C4Cu;
        // 0x488c50: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x488C54u;
        goto label_488c54;
    }
    ctx->pc = 0x488C4Cu;
    {
        const bool branch_taken_0x488c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x488C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488C4Cu;
        // 0x488c50: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x488c4c) {
            ctx->pc = 0x488BF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_488bf8;
        }
    }
    ctx->pc = 0x488C54u;
label_488c54:
    // 0x488c54: 0x0  nop
    ctx->pc = 0x488c54u;
    // NOP
label_488c58:
    // 0x488c58: 0xa6935800  sh          $s3, 0x5800($s4)
    ctx->pc = 0x488c58u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 22528), (uint16_t)GPR_U32(ctx, 19));
label_488c5c:
    // 0x488c5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x488c5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_488c60:
    // 0x488c60: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x488c60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_488c64:
    // 0x488c64: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x488c64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_488c68:
    // 0x488c68: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x488c68u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_488c6c:
    // 0x488c6c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x488c6cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_488c70:
    // 0x488c70: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x488c70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_488c74:
    // 0x488c74: 0x3e00008  jr          $ra
label_488c78:
    if (ctx->pc == 0x488C78u) {
        ctx->pc = 0x488C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488C74u;
        // 0x488c78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x488C7Cu;
        goto label_488c7c;
    }
    ctx->pc = 0x488C74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x488C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488C74u;
        // 0x488c78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x488C74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x488C7Cu;
label_488c7c:
    // 0x488c7c: 0x0  nop
    ctx->pc = 0x488c7cu;
    // NOP
    ctx->pc = 0x488c80u;
}
