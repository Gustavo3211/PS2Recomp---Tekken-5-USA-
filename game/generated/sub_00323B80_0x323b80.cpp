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

// Function: sub_00323B80
// Address: 0x323b80 - 0x323c58
void sub_00323B80_0x323b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323B80_0x323b80");
#endif

    switch (ctx->pc) {
        case 0x323b80u: goto label_323b80;
        case 0x323b84u: goto label_323b84;
        case 0x323b88u: goto label_323b88;
        case 0x323b8cu: goto label_323b8c;
        case 0x323b90u: goto label_323b90;
        case 0x323b94u: goto label_323b94;
        case 0x323b98u: goto label_323b98;
        case 0x323b9cu: goto label_323b9c;
        case 0x323ba0u: goto label_323ba0;
        case 0x323ba4u: goto label_323ba4;
        case 0x323ba8u: goto label_323ba8;
        case 0x323bacu: goto label_323bac;
        case 0x323bb0u: goto label_323bb0;
        case 0x323bb4u: goto label_323bb4;
        case 0x323bb8u: goto label_323bb8;
        case 0x323bbcu: goto label_323bbc;
        case 0x323bc0u: goto label_323bc0;
        case 0x323bc4u: goto label_323bc4;
        case 0x323bc8u: goto label_323bc8;
        case 0x323bccu: goto label_323bcc;
        case 0x323bd0u: goto label_323bd0;
        case 0x323bd4u: goto label_323bd4;
        case 0x323bd8u: goto label_323bd8;
        case 0x323bdcu: goto label_323bdc;
        case 0x323be0u: goto label_323be0;
        case 0x323be4u: goto label_323be4;
        case 0x323be8u: goto label_323be8;
        case 0x323becu: goto label_323bec;
        case 0x323bf0u: goto label_323bf0;
        case 0x323bf4u: goto label_323bf4;
        case 0x323bf8u: goto label_323bf8;
        case 0x323bfcu: goto label_323bfc;
        case 0x323c00u: goto label_323c00;
        case 0x323c04u: goto label_323c04;
        case 0x323c08u: goto label_323c08;
        case 0x323c0cu: goto label_323c0c;
        case 0x323c10u: goto label_323c10;
        case 0x323c14u: goto label_323c14;
        case 0x323c18u: goto label_323c18;
        case 0x323c1cu: goto label_323c1c;
        case 0x323c20u: goto label_323c20;
        case 0x323c24u: goto label_323c24;
        case 0x323c28u: goto label_323c28;
        case 0x323c2cu: goto label_323c2c;
        case 0x323c30u: goto label_323c30;
        case 0x323c34u: goto label_323c34;
        case 0x323c38u: goto label_323c38;
        case 0x323c3cu: goto label_323c3c;
        case 0x323c40u: goto label_323c40;
        case 0x323c44u: goto label_323c44;
        case 0x323c48u: goto label_323c48;
        case 0x323c4cu: goto label_323c4c;
        case 0x323c50u: goto label_323c50;
        case 0x323c54u: goto label_323c54;
        default: break;
    }

    ctx->pc = 0x323b80u;

label_323b80:
    // 0x323b80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x323b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_323b84:
    // 0x323b84: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x323b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_323b88:
    // 0x323b88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x323b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_323b8c:
    // 0x323b8c: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x323b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_323b90:
    // 0x323b90: 0x34460100  ori         $a2, $v0, 0x100
    ctx->pc = 0x323b90u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_323b94:
    // 0x323b94: 0x304200c0  andi        $v0, $v0, 0xC0
    ctx->pc = 0x323b94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)192);
label_323b98:
    // 0x323b98: 0x50430001  beql        $v0, $v1, . + 4 + (0x1 << 2)
label_323b9c:
    if (ctx->pc == 0x323B9Cu) {
        ctx->pc = 0x323B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323B98u;
        // 0x323b9c: 0xac860010  sw          $a2, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323BA0u;
        goto label_323ba0;
    }
    ctx->pc = 0x323B98u;
    {
        const bool branch_taken_0x323b98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x323b98) {
            ctx->pc = 0x323B9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x323B98u;
            // 0x323b9c: 0xac860010  sw          $a2, 0x10($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x323BA0u;
            goto label_323ba0;
        }
    }
    ctx->pc = 0x323BA0u;
label_323ba0:
    // 0x323ba0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x323ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_323ba4:
    // 0x323ba4: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x323ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_323ba8:
    // 0x323ba8: 0x40f809  jalr        $v0
label_323bac:
    if (ctx->pc == 0x323BACu) {
        ctx->pc = 0x323BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323BA8u;
        // 0x323bac: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323BB0u;
        goto label_323bb0;
    }
    ctx->pc = 0x323BA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x323BB0u);
        ctx->pc = 0x323BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323BA8u;
        // 0x323bac: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323BA8u, 0x323BB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x323BB0u;
label_323bb0:
    // 0x323bb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x323bb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_323bb4:
    // 0x323bb4: 0x3e00008  jr          $ra
label_323bb8:
    if (ctx->pc == 0x323BB8u) {
        ctx->pc = 0x323BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323BB4u;
        // 0x323bb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323BBCu;
        goto label_323bbc;
    }
    ctx->pc = 0x323BB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323BB4u;
        // 0x323bb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323BB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323BBCu;
label_323bbc:
    // 0x323bbc: 0x0  nop
    ctx->pc = 0x323bbcu;
    // NOP
label_323bc0:
    // 0x323bc0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x323bc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_323bc4:
    // 0x323bc4: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x323bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
label_323bc8:
    // 0x323bc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x323bc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_323bcc:
    // 0x323bcc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x323bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_323bd0:
    // 0x323bd0: 0xc0cb224  jal         func_32C890
label_323bd4:
    if (ctx->pc == 0x323BD4u) {
        ctx->pc = 0x323BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323BD0u;
        // 0x323bd4: 0x248408c0  addiu       $a0, $a0, 0x8C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323BD8u;
        goto label_323bd8;
    }
    ctx->pc = 0x323BD0u;
    SET_GPR_U32(ctx, 31, 0x323BD8u);
    ctx->pc = 0x323BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323BD0u;
    // 0x323bd4: 0x248408c0  addiu       $a0, $a0, 0x8C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C890u, 0x323BD0u, 0x323BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323BD8u;
label_323bd8:
    // 0x323bd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x323bd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_323bdc:
    // 0x323bdc: 0x3e00008  jr          $ra
label_323be0:
    if (ctx->pc == 0x323BE0u) {
        ctx->pc = 0x323BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323BDCu;
        // 0x323be0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323BE4u;
        goto label_323be4;
    }
    ctx->pc = 0x323BDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323BDCu;
        // 0x323be0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323BDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323BE4u;
label_323be4:
    // 0x323be4: 0x0  nop
    ctx->pc = 0x323be4u;
    // NOP
label_323be8:
    // 0x323be8: 0x3e00008  jr          $ra
label_323bec:
    if (ctx->pc == 0x323BECu) {
        ctx->pc = 0x323BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323BE8u;
        // 0x323bec: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323BF0u;
        goto label_323bf0;
    }
    ctx->pc = 0x323BE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323BE8u;
        // 0x323bec: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323BE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323BF0u;
label_323bf0:
    // 0x323bf0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x323bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_323bf4:
    // 0x323bf4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x323bf4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_323bf8:
    // 0x323bf8: 0x24420d00  addiu       $v0, $v0, 0xD00
    ctx->pc = 0x323bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3328));
label_323bfc:
    // 0x323bfc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x323bfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_323c00:
    // 0x323c00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x323c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_323c04:
    // 0x323c04: 0xc0d01a6  jal         func_340698
label_323c08:
    if (ctx->pc == 0x323C08u) {
        ctx->pc = 0x323C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323C04u;
        // 0x323c08: 0x244400f0  addiu       $a0, $v0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323C0Cu;
        goto label_323c0c;
    }
    ctx->pc = 0x323C04u;
    SET_GPR_U32(ctx, 31, 0x323C0Cu);
    ctx->pc = 0x323C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323C04u;
    // 0x323c08: 0x244400f0  addiu       $a0, $v0, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340698u, 0x323C04u, 0x323C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323C0Cu;
label_323c0c:
    // 0x323c0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x323c0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_323c10:
    // 0x323c10: 0x3e00008  jr          $ra
label_323c14:
    if (ctx->pc == 0x323C14u) {
        ctx->pc = 0x323C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323C10u;
        // 0x323c14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323C18u;
        goto label_323c18;
    }
    ctx->pc = 0x323C10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323C10u;
        // 0x323c14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323C10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323C18u;
label_323c18:
    // 0x323c18: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x323c18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
label_323c1c:
    // 0x323c1c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x323c1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_323c20:
    // 0x323c20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x323c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_323c24:
    // 0x323c24: 0xc0c9244  jal         func_324910
label_323c28:
    if (ctx->pc == 0x323C28u) {
        ctx->pc = 0x323C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323C24u;
        // 0x323c28: 0x248408c0  addiu       $a0, $a0, 0x8C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323C2Cu;
        goto label_323c2c;
    }
    ctx->pc = 0x323C24u;
    SET_GPR_U32(ctx, 31, 0x323C2Cu);
    ctx->pc = 0x323C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323C24u;
    // 0x323c28: 0x248408c0  addiu       $a0, $a0, 0x8C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324910u, 0x323C24u, 0x323C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323C2Cu;
label_323c2c:
    // 0x323c2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x323c2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_323c30:
    // 0x323c30: 0x3e00008  jr          $ra
label_323c34:
    if (ctx->pc == 0x323C34u) {
        ctx->pc = 0x323C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323C30u;
        // 0x323c34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323C38u;
        goto label_323c38;
    }
    ctx->pc = 0x323C30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323C30u;
        // 0x323c34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323C30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323C38u;
label_323c38:
    // 0x323c38: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x323c38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
label_323c3c:
    // 0x323c3c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x323c3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_323c40:
    // 0x323c40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x323c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_323c44:
    // 0x323c44: 0xc0c9274  jal         func_3249D0
label_323c48:
    if (ctx->pc == 0x323C48u) {
        ctx->pc = 0x323C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323C44u;
        // 0x323c48: 0x248408c0  addiu       $a0, $a0, 0x8C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323C4Cu;
        goto label_323c4c;
    }
    ctx->pc = 0x323C44u;
    SET_GPR_U32(ctx, 31, 0x323C4Cu);
    ctx->pc = 0x323C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323C44u;
    // 0x323c48: 0x248408c0  addiu       $a0, $a0, 0x8C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3249D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3249D0u, 0x323C44u, 0x323C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323C4Cu;
label_323c4c:
    // 0x323c4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x323c4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_323c50:
    // 0x323c50: 0x3e00008  jr          $ra
label_323c54:
    if (ctx->pc == 0x323C54u) {
        ctx->pc = 0x323C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323C50u;
        // 0x323c54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323C58u;
        goto label_fallthrough_0x323c50;
    }
    ctx->pc = 0x323C50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323C50u;
        // 0x323c54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323C50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x323c50:
    ctx->pc = 0x323C58u;
}
