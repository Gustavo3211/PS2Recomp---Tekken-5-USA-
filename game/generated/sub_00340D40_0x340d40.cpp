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

// Function: sub_00340D40
// Address: 0x340d40 - 0x340df8
void sub_00340D40_0x340d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00340D40_0x340d40");
#endif

    switch (ctx->pc) {
        case 0x340d40u: goto label_340d40;
        case 0x340d44u: goto label_340d44;
        case 0x340d48u: goto label_340d48;
        case 0x340d4cu: goto label_340d4c;
        case 0x340d50u: goto label_340d50;
        case 0x340d54u: goto label_340d54;
        case 0x340d58u: goto label_340d58;
        case 0x340d5cu: goto label_340d5c;
        case 0x340d60u: goto label_340d60;
        case 0x340d64u: goto label_340d64;
        case 0x340d68u: goto label_340d68;
        case 0x340d6cu: goto label_340d6c;
        case 0x340d70u: goto label_340d70;
        case 0x340d74u: goto label_340d74;
        case 0x340d78u: goto label_340d78;
        case 0x340d7cu: goto label_340d7c;
        case 0x340d80u: goto label_340d80;
        case 0x340d84u: goto label_340d84;
        case 0x340d88u: goto label_340d88;
        case 0x340d8cu: goto label_340d8c;
        case 0x340d90u: goto label_340d90;
        case 0x340d94u: goto label_340d94;
        case 0x340d98u: goto label_340d98;
        case 0x340d9cu: goto label_340d9c;
        case 0x340da0u: goto label_340da0;
        case 0x340da4u: goto label_340da4;
        case 0x340da8u: goto label_340da8;
        case 0x340dacu: goto label_340dac;
        case 0x340db0u: goto label_340db0;
        case 0x340db4u: goto label_340db4;
        case 0x340db8u: goto label_340db8;
        case 0x340dbcu: goto label_340dbc;
        case 0x340dc0u: goto label_340dc0;
        case 0x340dc4u: goto label_340dc4;
        case 0x340dc8u: goto label_340dc8;
        case 0x340dccu: goto label_340dcc;
        case 0x340dd0u: goto label_340dd0;
        case 0x340dd4u: goto label_340dd4;
        case 0x340dd8u: goto label_340dd8;
        case 0x340ddcu: goto label_340ddc;
        case 0x340de0u: goto label_340de0;
        case 0x340de4u: goto label_340de4;
        case 0x340de8u: goto label_340de8;
        case 0x340decu: goto label_340dec;
        case 0x340df0u: goto label_340df0;
        case 0x340df4u: goto label_340df4;
        default: break;
    }

    ctx->pc = 0x340d40u;

label_340d40:
    // 0x340d40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x340d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_340d44:
    // 0x340d44: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x340d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_340d48:
    // 0x340d48: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x340d48u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_340d4c:
    // 0x340d4c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x340d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_340d50:
    // 0x340d50: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x340d50u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_340d54:
    // 0x340d54: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x340d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_340d58:
    // 0x340d58: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x340d58u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_340d5c:
    // 0x340d5c: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x340d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_340d60:
    // 0x340d60: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x340d60u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_340d64:
    // 0x340d64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x340d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_340d68:
    // 0x340d68: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x340d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_340d6c:
    // 0x340d6c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x340d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_340d70:
    // 0x340d70: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x340d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_340d74:
    // 0x340d74: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x340d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_340d78:
    // 0x340d78: 0x9695000a  lhu         $s5, 0xA($s4)
    ctx->pc = 0x340d78u;
    SET_GPR_ZE32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 10)));
label_340d7c:
    // 0x340d7c: 0x12a00012  beqz        $s5, . + 4 + (0x12 << 2)
label_340d80:
    if (ctx->pc == 0x340D80u) {
        ctx->pc = 0x340D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340D7Cu;
        // 0x340d80: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340D84u;
        goto label_340d84;
    }
    ctx->pc = 0x340D7Cu;
    {
        const bool branch_taken_0x340d7c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x340D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340D7Cu;
        // 0x340d80: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340d7c) {
            ctx->pc = 0x340DC8u;
            goto label_340dc8;
        }
    }
    ctx->pc = 0x340D84u;
label_340d84:
    // 0x340d84: 0x0  nop
    ctx->pc = 0x340d84u;
    // NOP
label_340d88:
    // 0x340d88: 0x8cb20004  lw          $s2, 0x4($a1)
    ctx->pc = 0x340d88u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_340d8c:
    // 0x340d8c: 0x24b00018  addiu       $s0, $a1, 0x18
    ctx->pc = 0x340d8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
label_340d90:
    // 0x340d90: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
label_340d94:
    if (ctx->pc == 0x340D94u) {
        ctx->pc = 0x340D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340D90u;
        // 0x340d94: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340D98u;
        goto label_340d98;
    }
    ctx->pc = 0x340D90u;
    {
        const bool branch_taken_0x340d90 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x340D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340D90u;
        // 0x340d94: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340d90) {
            ctx->pc = 0x340DB8u;
            goto label_340db8;
        }
    }
    ctx->pc = 0x340D98u;
label_340d98:
    // 0x340d98: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x340d98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_340d9c:
    // 0x340d9c: 0x26100028  addiu       $s0, $s0, 0x28
    ctx->pc = 0x340d9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
label_340da0:
    // 0x340da0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x340da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_340da4:
    // 0x340da4: 0x2c0f809  jalr        $s6
label_340da8:
    if (ctx->pc == 0x340DA8u) {
        ctx->pc = 0x340DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340DA4u;
        // 0x340da8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340DACu;
        goto label_340dac;
    }
    ctx->pc = 0x340DA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 22);
        SET_GPR_U32(ctx, 31, 0x340DACu);
        ctx->pc = 0x340DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340DA4u;
        // 0x340da8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x340DA4u, 0x340DACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x340DACu;
label_340dac:
    // 0x340dac: 0x232182b  sltu        $v1, $s1, $s2
    ctx->pc = 0x340dacu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_340db0:
    // 0x340db0: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_340db4:
    if (ctx->pc == 0x340DB4u) {
        ctx->pc = 0x340DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340DB0u;
        // 0x340db4: 0x2629821  addu        $s3, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340DB8u;
        goto label_340db8;
    }
    ctx->pc = 0x340DB0u;
    {
        const bool branch_taken_0x340db0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x340DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340DB0u;
        // 0x340db4: 0x2629821  addu        $s3, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340db0) {
            ctx->pc = 0x340D98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_340d98;
        }
    }
    ctx->pc = 0x340DB8u;
label_340db8:
    // 0x340db8: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x340db8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_340dbc:
    // 0x340dbc: 0x2f5102b  sltu        $v0, $s7, $s5
    ctx->pc = 0x340dbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_340dc0:
    // 0x340dc0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_340dc4:
    if (ctx->pc == 0x340DC4u) {
        ctx->pc = 0x340DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340DC0u;
        // 0x340dc4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340DC8u;
        goto label_340dc8;
    }
    ctx->pc = 0x340DC0u;
    {
        const bool branch_taken_0x340dc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x340DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340DC0u;
        // 0x340dc4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340dc0) {
            ctx->pc = 0x340D88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_340d88;
        }
    }
    ctx->pc = 0x340DC8u;
label_340dc8:
    // 0x340dc8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x340dc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_340dcc:
    // 0x340dcc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x340dccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_340dd0:
    // 0x340dd0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x340dd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_340dd4:
    // 0x340dd4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x340dd4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_340dd8:
    // 0x340dd8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x340dd8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_340ddc:
    // 0x340ddc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x340ddcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_340de0:
    // 0x340de0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x340de0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_340de4:
    // 0x340de4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x340de4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_340de8:
    // 0x340de8: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x340de8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_340dec:
    // 0x340dec: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x340decu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_340df0:
    // 0x340df0: 0x3e00008  jr          $ra
label_340df4:
    if (ctx->pc == 0x340DF4u) {
        ctx->pc = 0x340DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340DF0u;
        // 0x340df4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340DF8u;
        goto label_fallthrough_0x340df0;
    }
    ctx->pc = 0x340DF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x340DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340DF0u;
        // 0x340df4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x340DF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x340df0:
    ctx->pc = 0x340DF8u;
}
