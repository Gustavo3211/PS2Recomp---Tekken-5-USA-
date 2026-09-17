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

// Function: sub_00329D38
// Address: 0x329d38 - 0x329de8
void sub_00329D38_0x329d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00329D38_0x329d38");
#endif

    switch (ctx->pc) {
        case 0x329d38u: goto label_329d38;
        case 0x329d3cu: goto label_329d3c;
        case 0x329d40u: goto label_329d40;
        case 0x329d44u: goto label_329d44;
        case 0x329d48u: goto label_329d48;
        case 0x329d4cu: goto label_329d4c;
        case 0x329d50u: goto label_329d50;
        case 0x329d54u: goto label_329d54;
        case 0x329d58u: goto label_329d58;
        case 0x329d5cu: goto label_329d5c;
        case 0x329d60u: goto label_329d60;
        case 0x329d64u: goto label_329d64;
        case 0x329d68u: goto label_329d68;
        case 0x329d6cu: goto label_329d6c;
        case 0x329d70u: goto label_329d70;
        case 0x329d74u: goto label_329d74;
        case 0x329d78u: goto label_329d78;
        case 0x329d7cu: goto label_329d7c;
        case 0x329d80u: goto label_329d80;
        case 0x329d84u: goto label_329d84;
        case 0x329d88u: goto label_329d88;
        case 0x329d8cu: goto label_329d8c;
        case 0x329d90u: goto label_329d90;
        case 0x329d94u: goto label_329d94;
        case 0x329d98u: goto label_329d98;
        case 0x329d9cu: goto label_329d9c;
        case 0x329da0u: goto label_329da0;
        case 0x329da4u: goto label_329da4;
        case 0x329da8u: goto label_329da8;
        case 0x329dacu: goto label_329dac;
        case 0x329db0u: goto label_329db0;
        case 0x329db4u: goto label_329db4;
        case 0x329db8u: goto label_329db8;
        case 0x329dbcu: goto label_329dbc;
        case 0x329dc0u: goto label_329dc0;
        case 0x329dc4u: goto label_329dc4;
        case 0x329dc8u: goto label_329dc8;
        case 0x329dccu: goto label_329dcc;
        case 0x329dd0u: goto label_329dd0;
        case 0x329dd4u: goto label_329dd4;
        case 0x329dd8u: goto label_329dd8;
        case 0x329ddcu: goto label_329ddc;
        case 0x329de0u: goto label_329de0;
        case 0x329de4u: goto label_329de4;
        default: break;
    }

    ctx->pc = 0x329d38u;

label_329d38:
    // 0x329d38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x329d38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_329d3c:
    // 0x329d3c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x329d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_329d40:
    // 0x329d40: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x329d40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_329d44:
    // 0x329d44: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x329d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_329d48:
    // 0x329d48: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x329d48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_329d4c:
    // 0x329d4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x329d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_329d50:
    // 0x329d50: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x329d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_329d54:
    // 0x329d54: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x329d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_329d58:
    // 0x329d58: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x329d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_329d5c:
    // 0x329d5c: 0x222182b  sltu        $v1, $s1, $v0
    ctx->pc = 0x329d5cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_329d60:
    // 0x329d60: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_329d64:
    if (ctx->pc == 0x329D64u) {
        ctx->pc = 0x329D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329D60u;
        // 0x329d64: 0xae420020  sw          $v0, 0x20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329D68u;
        goto label_329d68;
    }
    ctx->pc = 0x329D60u;
    {
        const bool branch_taken_0x329d60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x329D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329D60u;
        // 0x329d64: 0xae420020  sw          $v0, 0x20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329d60) {
            ctx->pc = 0x329DA0u;
            goto label_329da0;
        }
    }
    ctx->pc = 0x329D68u;
label_329d68:
    // 0x329d68: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x329d68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_329d6c:
    // 0x329d6c: 0x528021  addu        $s0, $v0, $s2
    ctx->pc = 0x329d6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_329d70:
    // 0x329d70: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x329d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_329d74:
    // 0x329d74: 0x0  nop
    ctx->pc = 0x329d74u;
    // NOP
label_329d78:
    // 0x329d78: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x329d78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_329d7c:
    // 0x329d7c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x329d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_329d80:
    // 0x329d80: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x329d80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_329d84:
    // 0x329d84: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x329d84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_329d88:
    // 0x329d88: 0xc0ca77a  jal         func_329DE8
label_329d8c:
    if (ctx->pc == 0x329D8Cu) {
        ctx->pc = 0x329D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329D88u;
        // 0x329d8c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329D90u;
        goto label_329d90;
    }
    ctx->pc = 0x329D88u;
    SET_GPR_U32(ctx, 31, 0x329D90u);
    ctx->pc = 0x329D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329D88u;
    // 0x329d8c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329DE8u, 0x329D88u, 0x329D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329D90u;
label_329d90:
    // 0x329d90: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x329d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_329d94:
    // 0x329d94: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x329d94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_329d98:
    // 0x329d98: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_329d9c:
    if (ctx->pc == 0x329D9Cu) {
        ctx->pc = 0x329D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329D98u;
        // 0x329d9c: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329DA0u;
        goto label_329da0;
    }
    ctx->pc = 0x329D98u;
    {
        const bool branch_taken_0x329d98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x329d98) {
            ctx->pc = 0x329D9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x329D98u;
            // 0x329d9c: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329D78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_329d78;
        }
    }
    ctx->pc = 0x329DA0u;
label_329da0:
    // 0x329da0: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x329da0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_329da4:
    // 0x329da4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x329da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_329da8:
    // 0x329da8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x329da8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_329dac:
    // 0x329dac: 0x8e460024  lw          $a2, 0x24($s2)
    ctx->pc = 0x329dacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_329db0:
    // 0x329db0: 0x8e450020  lw          $a1, 0x20($s2)
    ctx->pc = 0x329db0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_329db4:
    // 0x329db4: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x329db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_329db8:
    // 0x329db8: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x329db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_329dbc:
    // 0x329dbc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x329dbcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_329dc0:
    // 0x329dc0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x329dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_329dc4:
    // 0x329dc4: 0x60f809  jalr        $v1
label_329dc8:
    if (ctx->pc == 0x329DC8u) {
        ctx->pc = 0x329DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329DC4u;
        // 0x329dc8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329DCCu;
        goto label_329dcc;
    }
    ctx->pc = 0x329DC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x329DCCu);
        ctx->pc = 0x329DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329DC4u;
        // 0x329dc8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329DC4u, 0x329DCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x329DCCu;
label_329dcc:
    // 0x329dcc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x329dccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_329dd0:
    // 0x329dd0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x329dd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_329dd4:
    // 0x329dd4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x329dd4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_329dd8:
    // 0x329dd8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x329dd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_329ddc:
    // 0x329ddc: 0x3e00008  jr          $ra
label_329de0:
    if (ctx->pc == 0x329DE0u) {
        ctx->pc = 0x329DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329DDCu;
        // 0x329de0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329DE4u;
        goto label_329de4;
    }
    ctx->pc = 0x329DDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x329DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329DDCu;
        // 0x329de0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329DDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x329DE4u;
label_329de4:
    // 0x329de4: 0x0  nop
    ctx->pc = 0x329de4u;
    // NOP
    ctx->pc = 0x329de8u;
}
