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

// Function: sub_00364C80
// Address: 0x364c80 - 0x364d78
void sub_00364C80_0x364c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00364C80_0x364c80");
#endif

    switch (ctx->pc) {
        case 0x364c88u: goto label_364c88;
        case 0x364cbcu: goto label_364cbc;
        case 0x364ce0u: goto label_364ce0;
        case 0x364d60u: goto label_364d60;
        default: break;
    }

    ctx->pc = 0x364c80u;

    // 0x364c80: 0x3e00008  jr          $ra
    ctx->pc = 0x364C80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x364C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364C80u;
        // 0x364c84: 0xac850010  sw          $a1, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x364C80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x364C88u;
label_364c88:
    // 0x364c88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x364c88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x364c8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x364c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x364c90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x364c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x364c94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x364c94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364c98: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x364c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x364c9c: 0xae050024  sw          $a1, 0x24($s0)
    ctx->pc = 0x364c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 5));
    // 0x364ca0: 0x14e20002  bne         $a3, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x364CA0u;
    {
        const bool branch_taken_0x364ca0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x364CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364CA0u;
        // 0x364ca4: 0xae060028  sw          $a2, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364ca0) {
            ctx->pc = 0x364CACu;
            goto label_364cac;
        }
    }
    ctx->pc = 0x364CA8u;
    // 0x364ca8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x364ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_364cac:
    // 0x364cac: 0xa602002c  sh          $v0, 0x2C($s0)
    ctx->pc = 0x364cacu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 44), (uint16_t)GPR_U32(ctx, 2));
    // 0x364cb0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x364cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x364cb4: 0xc0d6a5c  jal         func_35A970
    ctx->pc = 0x364CB4u;
    SET_GPR_U32(ctx, 31, 0x364CBCu);
    ctx->pc = 0x364CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364CB4u;
    // 0x364cb8: 0xae040004  sw          $a0, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A970u, 0x364CB4u, 0x364CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364CBCu;
label_364cbc:
    // 0x364cbc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x364cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x364cc0: 0xae020988  sw          $v0, 0x988($s0)
    ctx->pc = 0x364cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2440), GPR_U32(ctx, 2));
    // 0x364cc4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x364cc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364cc8: 0xa2030008  sb          $v1, 0x8($s0)
    ctx->pc = 0x364cc8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x364ccc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x364cccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x364cd0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x364cd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x364cd4: 0x3e00008  jr          $ra
    ctx->pc = 0x364CD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x364CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364CD4u;
        // 0x364cd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x364CD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x364CDCu;
    // 0x364cdc: 0x0  nop
    ctx->pc = 0x364cdcu;
    // NOP
label_364ce0:
    // 0x364ce0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x364ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x364ce4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x364ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x364ce8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x364ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x364cec: 0x80a20008  lb          $v0, 0x8($a1)
    ctx->pc = 0x364cecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x364cf0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x364CF0u;
    {
        const bool branch_taken_0x364cf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x364CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364CF0u;
        // 0x364cf4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364cf0) {
            ctx->pc = 0x364D04u;
            goto label_364d04;
        }
    }
    ctx->pc = 0x364CF8u;
    // 0x364cf8: 0x80c20008  lb          $v0, 0x8($a2)
    ctx->pc = 0x364cf8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x364cfc: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x364CFCu;
    {
        const bool branch_taken_0x364cfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x364cfc) {
            ctx->pc = 0x364D00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x364CFCu;
            // 0x364d00: 0x8cc20028  lw          $v0, 0x28($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x364D10u;
            goto label_364d10;
        }
    }
    ctx->pc = 0x364D04u;
label_364d04:
    // 0x364d04: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x364D04u;
    {
        const bool branch_taken_0x364d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x364D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364D04u;
        // 0x364d08: 0x3c028000  lui         $v0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364d04) {
            ctx->pc = 0x364D68u;
            goto label_364d68;
        }
    }
    ctx->pc = 0x364D0Cu;
    // 0x364d0c: 0x0  nop
    ctx->pc = 0x364d0cu;
    // NOP
label_364d10:
    // 0x364d10: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x364d10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x364d14: 0x8ca30028  lw          $v1, 0x28($a1)
    ctx->pc = 0x364d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x364d18: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x364d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x364d1c: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x364d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x364d20: 0x8cc30024  lw          $v1, 0x24($a2)
    ctx->pc = 0x364d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x364d24: 0x8ca20024  lw          $v0, 0x24($a1)
    ctx->pc = 0x364d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x364d28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x364d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x364d2c: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x364d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x364d30: 0x8ca30030  lw          $v1, 0x30($a1)
    ctx->pc = 0x364d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x364d34: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x364d34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
    // 0x364d38: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x364d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x364d3c: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x364d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x364d40: 0x84c30038  lh          $v1, 0x38($a2)
    ctx->pc = 0x364d40u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 56)));
    // 0x364d44: 0x84a20038  lh          $v0, 0x38($a1)
    ctx->pc = 0x364d44u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x364d48: 0xa603003a  sh          $v1, 0x3A($s0)
    ctx->pc = 0x364d48u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 58), (uint16_t)GPR_U32(ctx, 3));
    // 0x364d4c: 0xa6020038  sh          $v0, 0x38($s0)
    ctx->pc = 0x364d4cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 56), (uint16_t)GPR_U32(ctx, 2));
    // 0x364d50: 0xa2040008  sb          $a0, 0x8($s0)
    ctx->pc = 0x364d50u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 4));
    // 0x364d54: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x364d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x364d58: 0xc0d6a5c  jal         func_35A970
    ctx->pc = 0x364D58u;
    SET_GPR_U32(ctx, 31, 0x364D60u);
    ctx->pc = 0x364D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364D58u;
    // 0x364d5c: 0xae040004  sw          $a0, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A970u, 0x364D58u, 0x364D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364D60u;
label_364d60:
    // 0x364d60: 0xae020988  sw          $v0, 0x988($s0)
    ctx->pc = 0x364d60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2440), GPR_U32(ctx, 2));
    // 0x364d64: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x364d64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_364d68:
    // 0x364d68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x364d68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x364d6c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x364d6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x364d70: 0x3e00008  jr          $ra
    ctx->pc = 0x364D70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x364D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364D70u;
        // 0x364d74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x364D70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x364D78u;
}
