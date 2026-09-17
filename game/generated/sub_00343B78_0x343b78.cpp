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

// Function: sub_00343B78
// Address: 0x343b78 - 0x343c28
void sub_00343B78_0x343b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00343B78_0x343b78");
#endif

    switch (ctx->pc) {
        case 0x343b78u: goto label_343b78;
        case 0x343b7cu: goto label_343b7c;
        case 0x343b80u: goto label_343b80;
        case 0x343b84u: goto label_343b84;
        case 0x343b88u: goto label_343b88;
        case 0x343b8cu: goto label_343b8c;
        case 0x343b90u: goto label_343b90;
        case 0x343b94u: goto label_343b94;
        case 0x343b98u: goto label_343b98;
        case 0x343b9cu: goto label_343b9c;
        case 0x343ba0u: goto label_343ba0;
        case 0x343ba4u: goto label_343ba4;
        case 0x343ba8u: goto label_343ba8;
        case 0x343bacu: goto label_343bac;
        case 0x343bb0u: goto label_343bb0;
        case 0x343bb4u: goto label_343bb4;
        case 0x343bb8u: goto label_343bb8;
        case 0x343bbcu: goto label_343bbc;
        case 0x343bc0u: goto label_343bc0;
        case 0x343bc4u: goto label_343bc4;
        case 0x343bc8u: goto label_343bc8;
        case 0x343bccu: goto label_343bcc;
        case 0x343bd0u: goto label_343bd0;
        case 0x343bd4u: goto label_343bd4;
        case 0x343bd8u: goto label_343bd8;
        case 0x343bdcu: goto label_343bdc;
        case 0x343be0u: goto label_343be0;
        case 0x343be4u: goto label_343be4;
        case 0x343be8u: goto label_343be8;
        case 0x343becu: goto label_343bec;
        case 0x343bf0u: goto label_343bf0;
        case 0x343bf4u: goto label_343bf4;
        case 0x343bf8u: goto label_343bf8;
        case 0x343bfcu: goto label_343bfc;
        case 0x343c00u: goto label_343c00;
        case 0x343c04u: goto label_343c04;
        case 0x343c08u: goto label_343c08;
        case 0x343c0cu: goto label_343c0c;
        case 0x343c10u: goto label_343c10;
        case 0x343c14u: goto label_343c14;
        case 0x343c18u: goto label_343c18;
        case 0x343c1cu: goto label_343c1c;
        case 0x343c20u: goto label_343c20;
        case 0x343c24u: goto label_343c24;
        default: break;
    }

    ctx->pc = 0x343b78u;

label_343b78:
    // 0x343b78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x343b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_343b7c:
    // 0x343b7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x343b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_343b80:
    // 0x343b80: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x343b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_343b84:
    // 0x343b84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x343b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_343b88:
    // 0x343b88: 0xc0c8864  jal         func_322190
label_343b8c:
    if (ctx->pc == 0x343B8Cu) {
        ctx->pc = 0x343B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343B88u;
        // 0x343b8c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343B90u;
        goto label_343b90;
    }
    ctx->pc = 0x343B88u;
    SET_GPR_U32(ctx, 31, 0x343B90u);
    ctx->pc = 0x343B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343B88u;
    // 0x343b8c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322190u, 0x343B88u, 0x343B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343B90u;
label_343b90:
    // 0x343b90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x343b90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_343b94:
    // 0x343b94: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x343b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_343b98:
    // 0x343b98: 0x246300b8  addiu       $v1, $v1, 0xB8
    ctx->pc = 0x343b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 184));
label_343b9c:
    // 0x343b9c: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x343b9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_343ba0:
    // 0x343ba0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x343ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_343ba4:
    // 0x343ba4: 0x40f809  jalr        $v0
label_343ba8:
    if (ctx->pc == 0x343BA8u) {
        ctx->pc = 0x343BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343BA4u;
        // 0x343ba8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343BACu;
        goto label_343bac;
    }
    ctx->pc = 0x343BA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x343BACu);
        ctx->pc = 0x343BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343BA4u;
        // 0x343ba8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x343BA4u, 0x343BACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x343BACu;
label_343bac:
    // 0x343bac: 0xc0d0f60  jal         func_343D80
label_343bb0:
    if (ctx->pc == 0x343BB0u) {
        ctx->pc = 0x343BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343BACu;
        // 0x343bb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343BB4u;
        goto label_343bb4;
    }
    ctx->pc = 0x343BACu;
    SET_GPR_U32(ctx, 31, 0x343BB4u);
    ctx->pc = 0x343BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343BACu;
    // 0x343bb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343D80u, 0x343BACu, 0x343BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343BB4u;
label_343bb4:
    // 0x343bb4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_343bb8:
    if (ctx->pc == 0x343BB8u) {
        ctx->pc = 0x343BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343BB4u;
        // 0x343bb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343BBCu;
        goto label_343bbc;
    }
    ctx->pc = 0x343BB4u;
    {
        const bool branch_taken_0x343bb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x343BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343BB4u;
        // 0x343bb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343bb4) {
            ctx->pc = 0x343BD4u;
            goto label_343bd4;
        }
    }
    ctx->pc = 0x343BBCu;
label_343bbc:
    // 0x343bbc: 0xc0d0f98  jal         func_343E60
label_343bc0:
    if (ctx->pc == 0x343BC0u) {
        ctx->pc = 0x343BC4u;
        goto label_343bc4;
    }
    ctx->pc = 0x343BBCu;
    SET_GPR_U32(ctx, 31, 0x343BC4u);
    ctx->pc = 0x343E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343E60u, 0x343BBCu, 0x343BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343BC4u;
label_343bc4:
    // 0x343bc4: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_343bc8:
    if (ctx->pc == 0x343BC8u) {
        ctx->pc = 0x343BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343BC4u;
        // 0x343bc8: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343BCCu;
        goto label_343bcc;
    }
    ctx->pc = 0x343BC4u;
    {
        const bool branch_taken_0x343bc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x343bc4) {
            ctx->pc = 0x343BC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x343BC4u;
            // 0x343bc8: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x343BF8u;
            goto label_343bf8;
        }
    }
    ctx->pc = 0x343BCCu;
label_343bcc:
    // 0x343bcc: 0xc0d0f7c  jal         func_343DF0
label_343bd0:
    if (ctx->pc == 0x343BD0u) {
        ctx->pc = 0x343BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343BCCu;
        // 0x343bd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343BD4u;
        goto label_343bd4;
    }
    ctx->pc = 0x343BCCu;
    SET_GPR_U32(ctx, 31, 0x343BD4u);
    ctx->pc = 0x343BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343BCCu;
    // 0x343bd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343DF0u, 0x343BCCu, 0x343BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343BD4u;
label_343bd4:
    // 0x343bd4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x343bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_343bd8:
    // 0x343bd8: 0x246300b0  addiu       $v1, $v1, 0xB0
    ctx->pc = 0x343bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 176));
label_343bdc:
    // 0x343bdc: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x343bdcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_343be0:
    // 0x343be0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x343be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_343be4:
    // 0x343be4: 0x40f809  jalr        $v0
label_343be8:
    if (ctx->pc == 0x343BE8u) {
        ctx->pc = 0x343BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343BE4u;
        // 0x343be8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343BECu;
        goto label_343bec;
    }
    ctx->pc = 0x343BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x343BECu);
        ctx->pc = 0x343BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343BE4u;
        // 0x343be8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x343BE4u, 0x343BECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x343BECu;
label_343bec:
    // 0x343bec: 0x10000008  b           . + 4 + (0x8 << 2)
label_343bf0:
    if (ctx->pc == 0x343BF0u) {
        ctx->pc = 0x343BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343BECu;
        // 0x343bf0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343BF4u;
        goto label_343bf4;
    }
    ctx->pc = 0x343BECu;
    {
        const bool branch_taken_0x343bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x343BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343BECu;
        // 0x343bf0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343bec) {
            ctx->pc = 0x343C10u;
            goto label_343c10;
        }
    }
    ctx->pc = 0x343BF4u;
label_343bf4:
    // 0x343bf4: 0x0  nop
    ctx->pc = 0x343bf4u;
    // NOP
label_343bf8:
    // 0x343bf8: 0x246300b0  addiu       $v1, $v1, 0xB0
    ctx->pc = 0x343bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 176));
label_343bfc:
    // 0x343bfc: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x343bfcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_343c00:
    // 0x343c00: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x343c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_343c04:
    // 0x343c04: 0x40f809  jalr        $v0
label_343c08:
    if (ctx->pc == 0x343C08u) {
        ctx->pc = 0x343C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343C04u;
        // 0x343c08: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343C0Cu;
        goto label_343c0c;
    }
    ctx->pc = 0x343C04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x343C0Cu);
        ctx->pc = 0x343C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343C04u;
        // 0x343c08: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x343C04u, 0x343C0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x343C0Cu;
label_343c0c:
    // 0x343c0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x343c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_343c10:
    // 0x343c10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x343c10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_343c14:
    // 0x343c14: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x343c14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_343c18:
    // 0x343c18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x343c18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_343c1c:
    // 0x343c1c: 0x3e00008  jr          $ra
label_343c20:
    if (ctx->pc == 0x343C20u) {
        ctx->pc = 0x343C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343C1Cu;
        // 0x343c20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343C24u;
        goto label_343c24;
    }
    ctx->pc = 0x343C1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x343C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343C1Cu;
        // 0x343c20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x343C1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x343C24u;
label_343c24:
    // 0x343c24: 0x0  nop
    ctx->pc = 0x343c24u;
    // NOP
    ctx->pc = 0x343c28u;
}
