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

// Function: sub_0012EF28
// Address: 0x12ef28 - 0x12efe8
void sub_0012EF28_0x12ef28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012EF28_0x12ef28");
#endif

    ctx->pc = 0x12ef28u;

    // 0x12ef28: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x12ef28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12ef2c: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x12ef2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x12ef30: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x12EF30u;
    {
        const bool branch_taken_0x12ef30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EF30u;
        // 0x12ef34: 0x30a30001  andi        $v1, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ef30) {
            ctx->pc = 0x12EF68u;
            goto label_12ef68;
        }
    }
    ctx->pc = 0x12EF38u;
    // 0x12ef38: 0x14600028  bnez        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x12EF38u;
    {
        const bool branch_taken_0x12ef38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12EF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EF38u;
        // 0x12ef3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ef38) {
            ctx->pc = 0x12EFDCu;
            goto label_12efdc;
        }
    }
    ctx->pc = 0x12EF40u;
    // 0x12ef40: 0x30a20002  andi        $v0, $a1, 0x2
    ctx->pc = 0x12ef40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x12ef44: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12EF44u;
    {
        const bool branch_taken_0x12ef44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EF44u;
        // 0x12ef48: 0x51842  srl         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ef44) {
            ctx->pc = 0x12EF58u;
            goto label_12ef58;
        }
    }
    ctx->pc = 0x12EF4Cu;
    // 0x12ef4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12ef4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12ef50: 0x3e00008  jr          $ra
    ctx->pc = 0x12EF50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12EF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EF50u;
        // 0x12ef54: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12EF50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12EF58u;
label_12ef58:
    // 0x12ef58: 0x51882  srl         $v1, $a1, 2
    ctx->pc = 0x12ef58u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
    // 0x12ef5c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x12ef5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12ef60: 0x3e00008  jr          $ra
    ctx->pc = 0x12EF60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12EF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EF60u;
        // 0x12ef64: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12EF60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12EF68u;
label_12ef68:
    // 0x12ef68: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x12ef68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x12ef6c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12EF6Cu;
    {
        const bool branch_taken_0x12ef6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12EF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EF6Cu;
        // 0x12ef70: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ef6c) {
            ctx->pc = 0x12EF7Cu;
            goto label_12ef7c;
        }
    }
    ctx->pc = 0x12EF74u;
    // 0x12ef74: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x12ef74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12ef78: 0x52c02  srl         $a1, $a1, 16
    ctx->pc = 0x12ef78u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
label_12ef7c:
    // 0x12ef7c: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x12ef7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x12ef80: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12EF80u;
    {
        const bool branch_taken_0x12ef80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12EF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EF80u;
        // 0x12ef84: 0x30a2000f  andi        $v0, $a1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ef80) {
            ctx->pc = 0x12EF94u;
            goto label_12ef94;
        }
    }
    ctx->pc = 0x12EF88u;
    // 0x12ef88: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x12ef88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x12ef8c: 0x52a02  srl         $a1, $a1, 8
    ctx->pc = 0x12ef8cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x12ef90: 0x30a2000f  andi        $v0, $a1, 0xF
    ctx->pc = 0x12ef90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
label_12ef94:
    // 0x12ef94: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12EF94u;
    {
        const bool branch_taken_0x12ef94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12EF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EF94u;
        // 0x12ef98: 0x30a20003  andi        $v0, $a1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ef94) {
            ctx->pc = 0x12EFA8u;
            goto label_12efa8;
        }
    }
    ctx->pc = 0x12EF9Cu;
    // 0x12ef9c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x12ef9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x12efa0: 0x52902  srl         $a1, $a1, 4
    ctx->pc = 0x12efa0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 4));
    // 0x12efa4: 0x30a20003  andi        $v0, $a1, 0x3
    ctx->pc = 0x12efa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
label_12efa8:
    // 0x12efa8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12EFA8u;
    {
        const bool branch_taken_0x12efa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12EFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EFA8u;
        // 0x12efac: 0x30a20001  andi        $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12efa8) {
            ctx->pc = 0x12EFBCu;
            goto label_12efbc;
        }
    }
    ctx->pc = 0x12EFB0u;
    // 0x12efb0: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x12efb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x12efb4: 0x52882  srl         $a1, $a1, 2
    ctx->pc = 0x12efb4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
    // 0x12efb8: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x12efb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_12efbc:
    // 0x12efbc: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x12EFBCu;
    {
        const bool branch_taken_0x12efbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12efbc) {
            ctx->pc = 0x12EFC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12EFBCu;
            // 0x12efc0: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12EFD8u;
            goto label_12efd8;
        }
    }
    ctx->pc = 0x12EFC4u;
    // 0x12efc4: 0x52842  srl         $a1, $a1, 1
    ctx->pc = 0x12efc4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x12efc8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12efc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12efcc: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12EFCCu;
    {
        const bool branch_taken_0x12efcc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EFCCu;
        // 0x12efd0: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12efcc) {
            ctx->pc = 0x12EFDCu;
            goto label_12efdc;
        }
    }
    ctx->pc = 0x12EFD4u;
    // 0x12efd4: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x12efd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_12efd8:
    // 0x12efd8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x12efd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_12efdc:
    // 0x12efdc: 0x3e00008  jr          $ra
    ctx->pc = 0x12EFDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12EFDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12EFE4u;
    // 0x12efe4: 0x0  nop
    ctx->pc = 0x12efe4u;
    // NOP
    ctx->pc = 0x12efe8u;
}
