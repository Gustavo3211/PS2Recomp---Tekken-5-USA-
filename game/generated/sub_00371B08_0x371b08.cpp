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

// Function: sub_00371B08
// Address: 0x371b08 - 0x371c40
void sub_00371B08_0x371b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00371B08_0x371b08");
#endif

    switch (ctx->pc) {
        case 0x371b2cu: goto label_371b2c;
        case 0x371b44u: goto label_371b44;
        default: break;
    }

    ctx->pc = 0x371b08u;

    // 0x371b08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x371b08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x371b0c: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x371b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x371b10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x371b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x371b14: 0x24507540  addiu       $s0, $v0, 0x7540
    ctx->pc = 0x371b14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 30016));
    // 0x371b18: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x371b18u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D7540u));
    // 0x371b1c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x371B1Cu;
    {
        const bool branch_taken_0x371b1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x371B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371B1Cu;
        // 0x371b20: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371b1c) {
            ctx->pc = 0x371B44u;
            goto label_371b44;
        }
    }
    ctx->pc = 0x371B24u;
    // 0x371b24: 0xc0db706  jal         func_36DC18
    ctx->pc = 0x371B24u;
    SET_GPR_U32(ctx, 31, 0x371B2Cu);
    ctx->pc = 0x36DC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36DC18u, 0x371B24u, 0x371B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371B2Cu;
label_371b2c:
    // 0x371b2c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x371b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x371b30: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x371b30u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x371b34: 0x24a50d20  addiu       $a1, $a1, 0xD20
    ctx->pc = 0x371b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3360));
    // 0x371b38: 0x24c67170  addiu       $a2, $a2, 0x7170
    ctx->pc = 0x371b38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29040));
    // 0x371b3c: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x371B3Cu;
    SET_GPR_U32(ctx, 31, 0x371B44u);
    ctx->pc = 0x371B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371B3Cu;
    // 0x371b40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x371B3Cu, 0x371B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371B44u;
label_371b44:
    // 0x371b44: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x371b44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371b48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x371b48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x371b4c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x371b4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x371b50: 0x3e00008  jr          $ra
    ctx->pc = 0x371B50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x371B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371B50u;
        // 0x371b54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371B50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x371B58u;
    // 0x371b58: 0x24840050  addiu       $a0, $a0, 0x50
    ctx->pc = 0x371b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x371b5c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x371b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x371b60: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x371B60u;
    {
        const bool branch_taken_0x371b60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x371B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371B60u;
        // 0x371b64: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371b60) {
            ctx->pc = 0x371B78u;
            goto label_371b78;
        }
    }
    ctx->pc = 0x371B68u;
    // 0x371b68: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x371b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x371b6c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x371b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x371b70: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x371B70u;
    {
        const bool branch_taken_0x371b70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x371b70) {
            ctx->pc = 0x371B84u;
            goto label_371b84;
        }
    }
    ctx->pc = 0x371B78u;
label_371b78:
    // 0x371b78: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x371b78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x371b7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x371b7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371b80: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x371b80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_371b84:
    // 0x371b84: 0x3e00008  jr          $ra
    ctx->pc = 0x371B84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x371B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371B84u;
        // 0x371b88: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371B84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x371B8Cu;
    // 0x371b8c: 0x0  nop
    ctx->pc = 0x371b8cu;
    // NOP
    // 0x371b90: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x371b90u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x371b94: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x371b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x371b98: 0x24840058  addiu       $a0, $a0, 0x58
    ctx->pc = 0x371b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 88));
    // 0x371b9c: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x371b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x371ba0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x371ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x371ba4: 0x3e00008  jr          $ra
    ctx->pc = 0x371BA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x371BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371BA4u;
        // 0x371ba8: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371BA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x371BACu;
    // 0x371bac: 0x0  nop
    ctx->pc = 0x371bacu;
    // NOP
    // 0x371bb0: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x371bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x371bb4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x371bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x371bb8: 0x24840058  addiu       $a0, $a0, 0x58
    ctx->pc = 0x371bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 88));
    // 0x371bbc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x371bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x371bc0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x371BC0u;
    {
        const bool branch_taken_0x371bc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x371BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371BC0u;
        // 0x371bc4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371bc0) {
            ctx->pc = 0x371BD8u;
            goto label_371bd8;
        }
    }
    ctx->pc = 0x371BC8u;
    // 0x371bc8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x371bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x371bcc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x371bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x371bd0: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x371BD0u;
    {
        const bool branch_taken_0x371bd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x371bd0) {
            ctx->pc = 0x371BE4u;
            goto label_371be4;
        }
    }
    ctx->pc = 0x371BD8u;
label_371bd8:
    // 0x371bd8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x371bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x371bdc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x371bdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371be0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x371be0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_371be4:
    // 0x371be4: 0x3e00008  jr          $ra
    ctx->pc = 0x371BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x371BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371BE4u;
        // 0x371be8: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371BE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x371BECu;
    // 0x371bec: 0x0  nop
    ctx->pc = 0x371becu;
    // NOP
    // 0x371bf0: 0x3e00008  jr          $ra
    ctx->pc = 0x371BF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x371BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371BF0u;
        // 0x371bf4: 0x8c820108  lw          $v0, 0x108($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 264)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371BF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x371BF8u;
    // 0x371bf8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x371bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x371bfc: 0x3e00008  jr          $ra
    ctx->pc = 0x371BFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x371C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371BFCu;
        // 0x371c00: 0xac820100  sw          $v0, 0x100($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371BFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x371C04u;
    // 0x371c04: 0x0  nop
    ctx->pc = 0x371c04u;
    // NOP
    // 0x371c08: 0x8c820100  lw          $v0, 0x100($a0)
    ctx->pc = 0x371c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 256)));
    // 0x371c0c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x371c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x371c10: 0x10430002  beq         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x371C10u;
    {
        const bool branch_taken_0x371c10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x371C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371C10u;
        // 0x371c14: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371c10) {
            ctx->pc = 0x371C1Cu;
            goto label_371c1c;
        }
    }
    ctx->pc = 0x371C18u;
    // 0x371c18: 0xac820100  sw          $v0, 0x100($a0)
    ctx->pc = 0x371c18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 256), GPR_U32(ctx, 2));
label_371c1c:
    // 0x371c1c: 0x3e00008  jr          $ra
    ctx->pc = 0x371C1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371C1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x371C24u;
    // 0x371c24: 0x0  nop
    ctx->pc = 0x371c24u;
    // NOP
    // 0x371c28: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x371c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x371c2c: 0x3e00008  jr          $ra
    ctx->pc = 0x371C2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x371C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371C2Cu;
        // 0x371c30: 0xac820100  sw          $v0, 0x100($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371C2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x371C34u;
    // 0x371c34: 0x0  nop
    ctx->pc = 0x371c34u;
    // NOP
    // 0x371c38: 0x3e00008  jr          $ra
    ctx->pc = 0x371C38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x371C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371C38u;
        // 0x371c3c: 0x8c82010c  lw          $v0, 0x10C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 268)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371C38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x371C40u;
}
