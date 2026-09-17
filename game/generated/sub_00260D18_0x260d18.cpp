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

// Function: sub_00260D18
// Address: 0x260d18 - 0x260ec0
void sub_00260D18_0x260d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00260D18_0x260d18");
#endif

    switch (ctx->pc) {
        case 0x260d18u: goto label_260d18;
        case 0x260d1cu: goto label_260d1c;
        case 0x260d20u: goto label_260d20;
        case 0x260d24u: goto label_260d24;
        case 0x260d28u: goto label_260d28;
        case 0x260d2cu: goto label_260d2c;
        case 0x260d30u: goto label_260d30;
        case 0x260d34u: goto label_260d34;
        case 0x260d38u: goto label_260d38;
        case 0x260d3cu: goto label_260d3c;
        case 0x260d40u: goto label_260d40;
        case 0x260d44u: goto label_260d44;
        case 0x260d48u: goto label_260d48;
        case 0x260d4cu: goto label_260d4c;
        case 0x260d50u: goto label_260d50;
        case 0x260d54u: goto label_260d54;
        case 0x260d58u: goto label_260d58;
        case 0x260d5cu: goto label_260d5c;
        case 0x260d60u: goto label_260d60;
        case 0x260d64u: goto label_260d64;
        case 0x260d68u: goto label_260d68;
        case 0x260d6cu: goto label_260d6c;
        case 0x260d70u: goto label_260d70;
        case 0x260d74u: goto label_260d74;
        case 0x260d78u: goto label_260d78;
        case 0x260d7cu: goto label_260d7c;
        case 0x260d80u: goto label_260d80;
        case 0x260d84u: goto label_260d84;
        case 0x260d88u: goto label_260d88;
        case 0x260d8cu: goto label_260d8c;
        case 0x260d90u: goto label_260d90;
        case 0x260d94u: goto label_260d94;
        case 0x260d98u: goto label_260d98;
        case 0x260d9cu: goto label_260d9c;
        case 0x260da0u: goto label_260da0;
        case 0x260da4u: goto label_260da4;
        case 0x260da8u: goto label_260da8;
        case 0x260dacu: goto label_260dac;
        case 0x260db0u: goto label_260db0;
        case 0x260db4u: goto label_260db4;
        case 0x260db8u: goto label_260db8;
        case 0x260dbcu: goto label_260dbc;
        case 0x260dc0u: goto label_260dc0;
        case 0x260dc4u: goto label_260dc4;
        case 0x260dc8u: goto label_260dc8;
        case 0x260dccu: goto label_260dcc;
        case 0x260dd0u: goto label_260dd0;
        case 0x260dd4u: goto label_260dd4;
        case 0x260dd8u: goto label_260dd8;
        case 0x260ddcu: goto label_260ddc;
        case 0x260de0u: goto label_260de0;
        case 0x260de4u: goto label_260de4;
        case 0x260de8u: goto label_260de8;
        case 0x260decu: goto label_260dec;
        case 0x260df0u: goto label_260df0;
        case 0x260df4u: goto label_260df4;
        case 0x260df8u: goto label_260df8;
        case 0x260dfcu: goto label_260dfc;
        case 0x260e00u: goto label_260e00;
        case 0x260e04u: goto label_260e04;
        case 0x260e08u: goto label_260e08;
        case 0x260e0cu: goto label_260e0c;
        case 0x260e10u: goto label_260e10;
        case 0x260e14u: goto label_260e14;
        case 0x260e18u: goto label_260e18;
        case 0x260e1cu: goto label_260e1c;
        case 0x260e20u: goto label_260e20;
        case 0x260e24u: goto label_260e24;
        case 0x260e28u: goto label_260e28;
        case 0x260e2cu: goto label_260e2c;
        case 0x260e30u: goto label_260e30;
        case 0x260e34u: goto label_260e34;
        case 0x260e38u: goto label_260e38;
        case 0x260e3cu: goto label_260e3c;
        case 0x260e40u: goto label_260e40;
        case 0x260e44u: goto label_260e44;
        case 0x260e48u: goto label_260e48;
        case 0x260e4cu: goto label_260e4c;
        case 0x260e50u: goto label_260e50;
        case 0x260e54u: goto label_260e54;
        case 0x260e58u: goto label_260e58;
        case 0x260e5cu: goto label_260e5c;
        case 0x260e60u: goto label_260e60;
        case 0x260e64u: goto label_260e64;
        case 0x260e68u: goto label_260e68;
        case 0x260e6cu: goto label_260e6c;
        case 0x260e70u: goto label_260e70;
        case 0x260e74u: goto label_260e74;
        case 0x260e78u: goto label_260e78;
        case 0x260e7cu: goto label_260e7c;
        case 0x260e80u: goto label_260e80;
        case 0x260e84u: goto label_260e84;
        case 0x260e88u: goto label_260e88;
        case 0x260e8cu: goto label_260e8c;
        case 0x260e90u: goto label_260e90;
        case 0x260e94u: goto label_260e94;
        case 0x260e98u: goto label_260e98;
        case 0x260e9cu: goto label_260e9c;
        case 0x260ea0u: goto label_260ea0;
        case 0x260ea4u: goto label_260ea4;
        case 0x260ea8u: goto label_260ea8;
        case 0x260eacu: goto label_260eac;
        case 0x260eb0u: goto label_260eb0;
        case 0x260eb4u: goto label_260eb4;
        case 0x260eb8u: goto label_260eb8;
        case 0x260ebcu: goto label_260ebc;
        default: break;
    }

    ctx->pc = 0x260d18u;

label_260d18:
    // 0x260d18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x260d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_260d1c:
    // 0x260d1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x260d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_260d20:
    // 0x260d20: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x260d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_260d24:
    // 0x260d24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x260d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_260d28:
    // 0x260d28: 0xc07e232  jal         func_1F88C8
label_260d2c:
    if (ctx->pc == 0x260D2Cu) {
        ctx->pc = 0x260D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260D28u;
        // 0x260d2c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260D30u;
        goto label_260d30;
    }
    ctx->pc = 0x260D28u;
    SET_GPR_U32(ctx, 31, 0x260D30u);
    ctx->pc = 0x260D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260D28u;
    // 0x260d2c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F88C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F88C8u, 0x260D28u, 0x260D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260D30u;
label_260d30:
    // 0x260d30: 0x5440005e  bnel        $v0, $zero, . + 4 + (0x5E << 2)
label_260d34:
    if (ctx->pc == 0x260D34u) {
        ctx->pc = 0x260D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260D30u;
        // 0x260d34: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260D38u;
        goto label_260d38;
    }
    ctx->pc = 0x260D30u;
    {
        const bool branch_taken_0x260d30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x260d30) {
            ctx->pc = 0x260D34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x260D30u;
            // 0x260d34: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x260EACu;
            goto label_260eac;
        }
    }
    ctx->pc = 0x260D38u;
label_260d38:
    // 0x260d38: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x260d38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_260d3c:
    // 0x260d3c: 0x8e0500e0  lw          $a1, 0xE0($s0)
    ctx->pc = 0x260d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
label_260d40:
    // 0x260d40: 0x8cc30024  lw          $v1, 0x24($a2)
    ctx->pc = 0x260d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
label_260d44:
    // 0x260d44: 0x24630038  addiu       $v1, $v1, 0x38
    ctx->pc = 0x260d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 56));
label_260d48:
    // 0x260d48: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x260d48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_260d4c:
    // 0x260d4c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x260d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_260d50:
    // 0x260d50: 0x40f809  jalr        $v0
label_260d54:
    if (ctx->pc == 0x260D54u) {
        ctx->pc = 0x260D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260D50u;
        // 0x260d54: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260D58u;
        goto label_260d58;
    }
    ctx->pc = 0x260D50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x260D58u);
        ctx->pc = 0x260D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260D50u;
        // 0x260d54: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260D50u, 0x260D58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x260D58u;
label_260d58:
    // 0x260d58: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x260d58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_260d5c:
    // 0x260d5c: 0x12200049  beqz        $s1, . + 4 + (0x49 << 2)
label_260d60:
    if (ctx->pc == 0x260D60u) {
        ctx->pc = 0x260D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260D5Cu;
        // 0x260d60: 0x32220002  andi        $v0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x260D64u;
        goto label_260d64;
    }
    ctx->pc = 0x260D5Cu;
    {
        const bool branch_taken_0x260d5c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x260D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260D5Cu;
        // 0x260d60: 0x32220002  andi        $v0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x260d5c) {
            ctx->pc = 0x260E84u;
            goto label_260e84;
        }
    }
    ctx->pc = 0x260D64u;
label_260d64:
    // 0x260d64: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_260d68:
    if (ctx->pc == 0x260D68u) {
        ctx->pc = 0x260D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260D64u;
        // 0x260d68: 0x8e0300e0  lw          $v1, 0xE0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260D6Cu;
        goto label_260d6c;
    }
    ctx->pc = 0x260D64u;
    {
        const bool branch_taken_0x260d64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x260d64) {
            ctx->pc = 0x260D68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x260D64u;
            // 0x260d68: 0x8e0300e0  lw          $v1, 0xE0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x260D8Cu;
            goto label_260d8c;
        }
    }
    ctx->pc = 0x260D6Cu;
label_260d6c:
    // 0x260d6c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x260d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_260d70:
    // 0x260d70: 0x8ca20024  lw          $v0, 0x24($a1)
    ctx->pc = 0x260d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_260d74:
    // 0x260d74: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x260d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_260d78:
    // 0x260d78: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x260d78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_260d7c:
    // 0x260d7c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x260d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_260d80:
    // 0x260d80: 0x60f809  jalr        $v1
label_260d84:
    if (ctx->pc == 0x260D84u) {
        ctx->pc = 0x260D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260D80u;
        // 0x260d84: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260D88u;
        goto label_260d88;
    }
    ctx->pc = 0x260D80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x260D88u);
        ctx->pc = 0x260D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260D80u;
        // 0x260d84: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260D80u, 0x260D88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x260D88u;
label_260d88:
    // 0x260d88: 0x8e0300e0  lw          $v1, 0xE0($s0)
    ctx->pc = 0x260d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
label_260d8c:
    // 0x260d8c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x260d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_260d90:
    // 0x260d90: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
label_260d94:
    if (ctx->pc == 0x260D94u) {
        ctx->pc = 0x260D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260D90u;
        // 0x260d94: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x260D98u;
        goto label_260d98;
    }
    ctx->pc = 0x260D90u;
    {
        const bool branch_taken_0x260d90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x260D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260D90u;
        // 0x260d94: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x260d90) {
            ctx->pc = 0x260DE8u;
            goto label_260de8;
        }
    }
    ctx->pc = 0x260D98u;
label_260d98:
    // 0x260d98: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_260d9c:
    if (ctx->pc == 0x260D9Cu) {
        ctx->pc = 0x260D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260D98u;
        // 0x260d9c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260DA0u;
        goto label_260da0;
    }
    ctx->pc = 0x260D98u;
    {
        const bool branch_taken_0x260d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x260D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260D98u;
        // 0x260d9c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260d98) {
            ctx->pc = 0x260DB8u;
            goto label_260db8;
        }
    }
    ctx->pc = 0x260DA0u;
label_260da0:
    // 0x260da0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x260da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_260da4:
    // 0x260da4: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
label_260da8:
    if (ctx->pc == 0x260DA8u) {
        ctx->pc = 0x260DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260DA4u;
        // 0x260da8: 0x26060058  addiu       $a2, $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260DACu;
        goto label_260dac;
    }
    ctx->pc = 0x260DA4u;
    {
        const bool branch_taken_0x260da4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x260DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260DA4u;
        // 0x260da8: 0x26060058  addiu       $a2, $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260da4) {
            ctx->pc = 0x260DD0u;
            goto label_260dd0;
        }
    }
    ctx->pc = 0x260DACu;
label_260dac:
    // 0x260dac: 0x10000036  b           . + 4 + (0x36 << 2)
label_260db0:
    if (ctx->pc == 0x260DB0u) {
        ctx->pc = 0x260DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260DACu;
        // 0x260db0: 0xae0000e0  sw          $zero, 0xE0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260DB4u;
        goto label_260db4;
    }
    ctx->pc = 0x260DACu;
    {
        const bool branch_taken_0x260dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260DACu;
        // 0x260db0: 0xae0000e0  sw          $zero, 0xE0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260dac) {
            ctx->pc = 0x260E88u;
            goto label_260e88;
        }
    }
    ctx->pc = 0x260DB4u;
label_260db4:
    // 0x260db4: 0x0  nop
    ctx->pc = 0x260db4u;
    // NOP
label_260db8:
    // 0x260db8: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
label_260dbc:
    if (ctx->pc == 0x260DBCu) {
        ctx->pc = 0x260DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260DB8u;
        // 0x260dbc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260DC0u;
        goto label_260dc0;
    }
    ctx->pc = 0x260DB8u;
    {
        const bool branch_taken_0x260db8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x260DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260DB8u;
        // 0x260dbc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260db8) {
            ctx->pc = 0x260E30u;
            goto label_260e30;
        }
    }
    ctx->pc = 0x260DC0u;
label_260dc0:
    // 0x260dc0: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
label_260dc4:
    if (ctx->pc == 0x260DC4u) {
        ctx->pc = 0x260DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260DC0u;
        // 0x260dc4: 0x26060008  addiu       $a2, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260DC8u;
        goto label_260dc8;
    }
    ctx->pc = 0x260DC0u;
    {
        const bool branch_taken_0x260dc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x260DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260DC0u;
        // 0x260dc4: 0x26060008  addiu       $a2, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260dc0) {
            ctx->pc = 0x260E00u;
            goto label_260e00;
        }
    }
    ctx->pc = 0x260DC8u;
label_260dc8:
    // 0x260dc8: 0x1000002f  b           . + 4 + (0x2F << 2)
label_260dcc:
    if (ctx->pc == 0x260DCCu) {
        ctx->pc = 0x260DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260DC8u;
        // 0x260dcc: 0xae0000e0  sw          $zero, 0xE0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260DD0u;
        goto label_260dd0;
    }
    ctx->pc = 0x260DC8u;
    {
        const bool branch_taken_0x260dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260DC8u;
        // 0x260dcc: 0xae0000e0  sw          $zero, 0xE0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260dc8) {
            ctx->pc = 0x260E88u;
            goto label_260e88;
        }
    }
    ctx->pc = 0x260DD0u;
label_260dd0:
    // 0x260dd0: 0x32220004  andi        $v0, $s1, 0x4
    ctx->pc = 0x260dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4);
label_260dd4:
    // 0x260dd4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_260dd8:
    if (ctx->pc == 0x260DD8u) {
        ctx->pc = 0x260DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260DD4u;
        // 0x260dd8: 0xae060004  sw          $a2, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260DDCu;
        goto label_260ddc;
    }
    ctx->pc = 0x260DD4u;
    {
        const bool branch_taken_0x260dd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x260DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260DD4u;
        // 0x260dd8: 0xae060004  sw          $a2, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260dd4) {
            ctx->pc = 0x260E0Cu;
            goto label_260e0c;
        }
    }
    ctx->pc = 0x260DDCu;
label_260ddc:
    // 0x260ddc: 0x10000019  b           . + 4 + (0x19 << 2)
label_260de0:
    if (ctx->pc == 0x260DE0u) {
        ctx->pc = 0x260DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260DDCu;
        // 0x260de0: 0x8cc30024  lw          $v1, 0x24($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260DE4u;
        goto label_260de4;
    }
    ctx->pc = 0x260DDCu;
    {
        const bool branch_taken_0x260ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260DDCu;
        // 0x260de0: 0x8cc30024  lw          $v1, 0x24($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260ddc) {
            ctx->pc = 0x260E44u;
            goto label_260e44;
        }
    }
    ctx->pc = 0x260DE4u;
label_260de4:
    // 0x260de4: 0x0  nop
    ctx->pc = 0x260de4u;
    // NOP
label_260de8:
    // 0x260de8: 0x26060080  addiu       $a2, $s0, 0x80
    ctx->pc = 0x260de8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_260dec:
    // 0x260dec: 0x32220004  andi        $v0, $s1, 0x4
    ctx->pc = 0x260decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4);
label_260df0:
    // 0x260df0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_260df4:
    if (ctx->pc == 0x260DF4u) {
        ctx->pc = 0x260DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260DF0u;
        // 0x260df4: 0xae060004  sw          $a2, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260DF8u;
        goto label_260df8;
    }
    ctx->pc = 0x260DF0u;
    {
        const bool branch_taken_0x260df0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x260DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260DF0u;
        // 0x260df4: 0xae060004  sw          $a2, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260df0) {
            ctx->pc = 0x260E0Cu;
            goto label_260e0c;
        }
    }
    ctx->pc = 0x260DF8u;
label_260df8:
    // 0x260df8: 0x10000012  b           . + 4 + (0x12 << 2)
label_260dfc:
    if (ctx->pc == 0x260DFCu) {
        ctx->pc = 0x260DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260DF8u;
        // 0x260dfc: 0x8cc30024  lw          $v1, 0x24($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260E00u;
        goto label_260e00;
    }
    ctx->pc = 0x260DF8u;
    {
        const bool branch_taken_0x260df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260DF8u;
        // 0x260dfc: 0x8cc30024  lw          $v1, 0x24($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260df8) {
            ctx->pc = 0x260E44u;
            goto label_260e44;
        }
    }
    ctx->pc = 0x260E00u;
label_260e00:
    // 0x260e00: 0x32220004  andi        $v0, $s1, 0x4
    ctx->pc = 0x260e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4);
label_260e04:
    // 0x260e04: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_260e08:
    if (ctx->pc == 0x260E08u) {
        ctx->pc = 0x260E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260E04u;
        // 0x260e08: 0xae060004  sw          $a2, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260E0Cu;
        goto label_260e0c;
    }
    ctx->pc = 0x260E04u;
    {
        const bool branch_taken_0x260e04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x260E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260E04u;
        // 0x260e08: 0xae060004  sw          $a2, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260e04) {
            ctx->pc = 0x260E40u;
            goto label_260e40;
        }
    }
    ctx->pc = 0x260E0Cu;
label_260e0c:
    // 0x260e0c: 0x8cc20024  lw          $v0, 0x24($a2)
    ctx->pc = 0x260e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
label_260e10:
    // 0x260e10: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x260e10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_260e14:
    // 0x260e14: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x260e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_260e18:
    // 0x260e18: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x260e18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_260e1c:
    // 0x260e1c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x260e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_260e20:
    // 0x260e20: 0x60f809  jalr        $v1
label_260e24:
    if (ctx->pc == 0x260E24u) {
        ctx->pc = 0x260E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260E20u;
        // 0x260e24: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260E28u;
        goto label_260e28;
    }
    ctx->pc = 0x260E20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x260E28u);
        ctx->pc = 0x260E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260E20u;
        // 0x260e24: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260E20u, 0x260E28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x260E28u;
label_260e28:
    // 0x260e28: 0x10000017  b           . + 4 + (0x17 << 2)
label_260e2c:
    if (ctx->pc == 0x260E2Cu) {
        ctx->pc = 0x260E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260E28u;
        // 0x260e2c: 0xae0000e0  sw          $zero, 0xE0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260E30u;
        goto label_260e30;
    }
    ctx->pc = 0x260E28u;
    {
        const bool branch_taken_0x260e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260E28u;
        // 0x260e2c: 0xae0000e0  sw          $zero, 0xE0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260e28) {
            ctx->pc = 0x260E88u;
            goto label_260e88;
        }
    }
    ctx->pc = 0x260E30u;
label_260e30:
    // 0x260e30: 0x26060030  addiu       $a2, $s0, 0x30
    ctx->pc = 0x260e30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_260e34:
    // 0x260e34: 0x32220004  andi        $v0, $s1, 0x4
    ctx->pc = 0x260e34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4);
label_260e38:
    // 0x260e38: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_260e3c:
    if (ctx->pc == 0x260E3Cu) {
        ctx->pc = 0x260E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260E38u;
        // 0x260e3c: 0xae060004  sw          $a2, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260E40u;
        goto label_260e40;
    }
    ctx->pc = 0x260E38u;
    {
        const bool branch_taken_0x260e38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x260E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260E38u;
        // 0x260e3c: 0xae060004  sw          $a2, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260e38) {
            ctx->pc = 0x260E68u;
            goto label_260e68;
        }
    }
    ctx->pc = 0x260E40u;
label_260e40:
    // 0x260e40: 0x8cc30024  lw          $v1, 0x24($a2)
    ctx->pc = 0x260e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
label_260e44:
    // 0x260e44: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x260e44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_260e48:
    // 0x260e48: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x260e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_260e4c:
    // 0x260e4c: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x260e4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_260e50:
    // 0x260e50: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x260e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_260e54:
    // 0x260e54: 0x40f809  jalr        $v0
label_260e58:
    if (ctx->pc == 0x260E58u) {
        ctx->pc = 0x260E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260E54u;
        // 0x260e58: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260E5Cu;
        goto label_260e5c;
    }
    ctx->pc = 0x260E54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x260E5Cu);
        ctx->pc = 0x260E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260E54u;
        // 0x260e58: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260E54u, 0x260E5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x260E5Cu;
label_260e5c:
    // 0x260e5c: 0x1000000a  b           . + 4 + (0xA << 2)
label_260e60:
    if (ctx->pc == 0x260E60u) {
        ctx->pc = 0x260E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260E5Cu;
        // 0x260e60: 0xae0000e0  sw          $zero, 0xE0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260E64u;
        goto label_260e64;
    }
    ctx->pc = 0x260E5Cu;
    {
        const bool branch_taken_0x260e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260E5Cu;
        // 0x260e60: 0xae0000e0  sw          $zero, 0xE0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260e5c) {
            ctx->pc = 0x260E88u;
            goto label_260e88;
        }
    }
    ctx->pc = 0x260E64u;
label_260e64:
    // 0x260e64: 0x0  nop
    ctx->pc = 0x260e64u;
    // NOP
label_260e68:
    // 0x260e68: 0x8cc20024  lw          $v0, 0x24($a2)
    ctx->pc = 0x260e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
label_260e6c:
    // 0x260e6c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x260e6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_260e70:
    // 0x260e70: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x260e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_260e74:
    // 0x260e74: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x260e74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_260e78:
    // 0x260e78: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x260e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_260e7c:
    // 0x260e7c: 0x60f809  jalr        $v1
label_260e80:
    if (ctx->pc == 0x260E80u) {
        ctx->pc = 0x260E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260E7Cu;
        // 0x260e80: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260E84u;
        goto label_260e84;
    }
    ctx->pc = 0x260E7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x260E84u);
        ctx->pc = 0x260E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260E7Cu;
        // 0x260e80: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260E7Cu, 0x260E84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x260E84u;
label_260e84:
    // 0x260e84: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x260e84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
label_260e88:
    // 0x260e88: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x260e88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_260e8c:
    // 0x260e8c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x260e8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_260e90:
    // 0x260e90: 0x8cc20024  lw          $v0, 0x24($a2)
    ctx->pc = 0x260e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
label_260e94:
    // 0x260e94: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x260e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_260e98:
    // 0x260e98: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x260e98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_260e9c:
    // 0x260e9c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x260e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_260ea0:
    // 0x260ea0: 0x60f809  jalr        $v1
label_260ea4:
    if (ctx->pc == 0x260EA4u) {
        ctx->pc = 0x260EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260EA0u;
        // 0x260ea4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260EA8u;
        goto label_260ea8;
    }
    ctx->pc = 0x260EA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x260EA8u);
        ctx->pc = 0x260EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260EA0u;
        // 0x260ea4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260EA0u, 0x260EA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x260EA8u;
label_260ea8:
    // 0x260ea8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x260ea8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_260eac:
    // 0x260eac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x260eacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_260eb0:
    // 0x260eb0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x260eb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_260eb4:
    // 0x260eb4: 0x3e00008  jr          $ra
label_260eb8:
    if (ctx->pc == 0x260EB8u) {
        ctx->pc = 0x260EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260EB4u;
        // 0x260eb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260EBCu;
        goto label_260ebc;
    }
    ctx->pc = 0x260EB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x260EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260EB4u;
        // 0x260eb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260EB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x260EBCu;
label_260ebc:
    // 0x260ebc: 0x0  nop
    ctx->pc = 0x260ebcu;
    // NOP
    ctx->pc = 0x260ec0u;
}
