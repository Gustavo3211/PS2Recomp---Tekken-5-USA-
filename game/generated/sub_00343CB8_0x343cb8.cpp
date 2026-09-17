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

// Function: sub_00343CB8
// Address: 0x343cb8 - 0x343d58
void sub_00343CB8_0x343cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00343CB8_0x343cb8");
#endif

    switch (ctx->pc) {
        case 0x343cb8u: goto label_343cb8;
        case 0x343cbcu: goto label_343cbc;
        case 0x343cc0u: goto label_343cc0;
        case 0x343cc4u: goto label_343cc4;
        case 0x343cc8u: goto label_343cc8;
        case 0x343cccu: goto label_343ccc;
        case 0x343cd0u: goto label_343cd0;
        case 0x343cd4u: goto label_343cd4;
        case 0x343cd8u: goto label_343cd8;
        case 0x343cdcu: goto label_343cdc;
        case 0x343ce0u: goto label_343ce0;
        case 0x343ce4u: goto label_343ce4;
        case 0x343ce8u: goto label_343ce8;
        case 0x343cecu: goto label_343cec;
        case 0x343cf0u: goto label_343cf0;
        case 0x343cf4u: goto label_343cf4;
        case 0x343cf8u: goto label_343cf8;
        case 0x343cfcu: goto label_343cfc;
        case 0x343d00u: goto label_343d00;
        case 0x343d04u: goto label_343d04;
        case 0x343d08u: goto label_343d08;
        case 0x343d0cu: goto label_343d0c;
        case 0x343d10u: goto label_343d10;
        case 0x343d14u: goto label_343d14;
        case 0x343d18u: goto label_343d18;
        case 0x343d1cu: goto label_343d1c;
        case 0x343d20u: goto label_343d20;
        case 0x343d24u: goto label_343d24;
        case 0x343d28u: goto label_343d28;
        case 0x343d2cu: goto label_343d2c;
        case 0x343d30u: goto label_343d30;
        case 0x343d34u: goto label_343d34;
        case 0x343d38u: goto label_343d38;
        case 0x343d3cu: goto label_343d3c;
        case 0x343d40u: goto label_343d40;
        case 0x343d44u: goto label_343d44;
        case 0x343d48u: goto label_343d48;
        case 0x343d4cu: goto label_343d4c;
        case 0x343d50u: goto label_343d50;
        case 0x343d54u: goto label_343d54;
        default: break;
    }

    ctx->pc = 0x343cb8u;

label_343cb8:
    // 0x343cb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x343cb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_343cbc:
    // 0x343cbc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x343cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_343cc0:
    // 0x343cc0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x343cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_343cc4:
    // 0x343cc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x343cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_343cc8:
    // 0x343cc8: 0xc0c6878  jal         func_31A1E0
label_343ccc:
    if (ctx->pc == 0x343CCCu) {
        ctx->pc = 0x343CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343CC8u;
        // 0x343ccc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343CD0u;
        goto label_343cd0;
    }
    ctx->pc = 0x343CC8u;
    SET_GPR_U32(ctx, 31, 0x343CD0u);
    ctx->pc = 0x343CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343CC8u;
    // 0x343ccc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A1E0u, 0x343CC8u, 0x343CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343CD0u;
label_343cd0:
    // 0x343cd0: 0xc0d0ffc  jal         func_343FF0
label_343cd4:
    if (ctx->pc == 0x343CD4u) {
        ctx->pc = 0x343CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343CD0u;
        // 0x343cd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343CD8u;
        goto label_343cd8;
    }
    ctx->pc = 0x343CD0u;
    SET_GPR_U32(ctx, 31, 0x343CD8u);
    ctx->pc = 0x343CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343CD0u;
    // 0x343cd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343FF0u, 0x343CD0u, 0x343CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343CD8u;
label_343cd8:
    // 0x343cd8: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x343cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_343cdc:
    // 0x343cdc: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x343cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_343ce0:
    // 0x343ce0: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
label_343ce4:
    if (ctx->pc == 0x343CE4u) {
        ctx->pc = 0x343CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343CE0u;
        // 0x343ce4: 0x2402ffef  addiu       $v0, $zero, -0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343CE8u;
        goto label_343ce8;
    }
    ctx->pc = 0x343CE0u;
    {
        const bool branch_taken_0x343ce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x343ce0) {
            ctx->pc = 0x343CE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x343CE0u;
            // 0x343ce4: 0x2402ffef  addiu       $v0, $zero, -0x11 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
            ctx->in_delay_slot = false;
            ctx->pc = 0x343D34u;
            goto label_343d34;
        }
    }
    ctx->pc = 0x343CE8u;
label_343ce8:
    // 0x343ce8: 0xc0c8864  jal         func_322190
label_343cec:
    if (ctx->pc == 0x343CECu) {
        ctx->pc = 0x343CF0u;
        goto label_343cf0;
    }
    ctx->pc = 0x343CE8u;
    SET_GPR_U32(ctx, 31, 0x343CF0u);
    ctx->pc = 0x322190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322190u, 0x343CE8u, 0x343CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343CF0u;
label_343cf0:
    // 0x343cf0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x343cf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_343cf4:
    // 0x343cf4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x343cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_343cf8:
    // 0x343cf8: 0x246300b8  addiu       $v1, $v1, 0xB8
    ctx->pc = 0x343cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 184));
label_343cfc:
    // 0x343cfc: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x343cfcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_343d00:
    // 0x343d00: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x343d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_343d04:
    // 0x343d04: 0x40f809  jalr        $v0
label_343d08:
    if (ctx->pc == 0x343D08u) {
        ctx->pc = 0x343D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343D04u;
        // 0x343d08: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343D0Cu;
        goto label_343d0c;
    }
    ctx->pc = 0x343D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x343D0Cu);
        ctx->pc = 0x343D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343D04u;
        // 0x343d08: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x343D04u, 0x343D0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x343D0Cu;
label_343d0c:
    // 0x343d0c: 0xc0d0fb2  jal         func_343EC8
label_343d10:
    if (ctx->pc == 0x343D10u) {
        ctx->pc = 0x343D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343D0Cu;
        // 0x343d10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343D14u;
        goto label_343d14;
    }
    ctx->pc = 0x343D0Cu;
    SET_GPR_U32(ctx, 31, 0x343D14u);
    ctx->pc = 0x343D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343D0Cu;
    // 0x343d10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343EC8u, 0x343D0Cu, 0x343D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343D14u;
label_343d14:
    // 0x343d14: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x343d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_343d18:
    // 0x343d18: 0x246300b0  addiu       $v1, $v1, 0xB0
    ctx->pc = 0x343d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 176));
label_343d1c:
    // 0x343d1c: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x343d1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_343d20:
    // 0x343d20: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x343d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_343d24:
    // 0x343d24: 0x40f809  jalr        $v0
label_343d28:
    if (ctx->pc == 0x343D28u) {
        ctx->pc = 0x343D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343D24u;
        // 0x343d28: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343D2Cu;
        goto label_343d2c;
    }
    ctx->pc = 0x343D24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x343D2Cu);
        ctx->pc = 0x343D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343D24u;
        // 0x343d28: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x343D24u, 0x343D2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x343D2Cu;
label_343d2c:
    // 0x343d2c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x343d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_343d30:
    // 0x343d30: 0x2402ffef  addiu       $v0, $zero, -0x11
    ctx->pc = 0x343d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_343d34:
    // 0x343d34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x343d34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_343d38:
    // 0x343d38: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x343d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_343d3c:
    // 0x343d3c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x343d3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_343d40:
    // 0x343d40: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x343d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_343d44:
    // 0x343d44: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x343d44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_343d48:
    // 0x343d48: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x343d48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_343d4c:
    // 0x343d4c: 0x3e00008  jr          $ra
label_343d50:
    if (ctx->pc == 0x343D50u) {
        ctx->pc = 0x343D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343D4Cu;
        // 0x343d50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343D54u;
        goto label_343d54;
    }
    ctx->pc = 0x343D4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x343D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343D4Cu;
        // 0x343d50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x343D4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x343D54u;
label_343d54:
    // 0x343d54: 0x0  nop
    ctx->pc = 0x343d54u;
    // NOP
    ctx->pc = 0x343d58u;
}
