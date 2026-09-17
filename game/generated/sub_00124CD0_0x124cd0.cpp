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

// Function: sub_00124CD0
// Address: 0x124cd0 - 0x124e88
void sub_00124CD0_0x124cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00124CD0_0x124cd0");
#endif

    switch (ctx->pc) {
        case 0x124cfcu: goto label_124cfc;
        case 0x124d10u: goto label_124d10;
        case 0x124d2cu: goto label_124d2c;
        case 0x124d60u: goto label_124d60;
        case 0x124d70u: goto label_124d70;
        case 0x124da0u: goto label_124da0;
        case 0x124dd8u: goto label_124dd8;
        case 0x124de8u: goto label_124de8;
        case 0x124e14u: goto label_124e14;
        default: break;
    }

    ctx->pc = 0x124cd0u;

    // 0x124cd0: 0x27bdfb10  addiu       $sp, $sp, -0x4F0
    ctx->pc = 0x124cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966032));
    // 0x124cd4: 0xffb204c0  sd          $s2, 0x4C0($sp)
    ctx->pc = 0x124cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1216), GPR_U64(ctx, 18));
    // 0x124cd8: 0xffb304c8  sd          $s3, 0x4C8($sp)
    ctx->pc = 0x124cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1224), GPR_U64(ctx, 19));
    // 0x124cdc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x124cdcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124ce0: 0xffb504d8  sd          $s5, 0x4D8($sp)
    ctx->pc = 0x124ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1240), GPR_U64(ctx, 21));
    // 0x124ce4: 0xffb004b0  sd          $s0, 0x4B0($sp)
    ctx->pc = 0x124ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1200), GPR_U64(ctx, 16));
    // 0x124ce8: 0xffb104b8  sd          $s1, 0x4B8($sp)
    ctx->pc = 0x124ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1208), GPR_U64(ctx, 17));
    // 0x124cec: 0xffb404d0  sd          $s4, 0x4D0($sp)
    ctx->pc = 0x124cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1232), GPR_U64(ctx, 20));
    // 0x124cf0: 0xffbf04e0  sd          $ra, 0x4E0($sp)
    ctx->pc = 0x124cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1248), GPR_U64(ctx, 31));
    // 0x124cf4: 0xc04912a  jal         func_1244A8
    ctx->pc = 0x124CF4u;
    SET_GPR_U32(ctx, 31, 0x124CFCu);
    ctx->pc = 0x124CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124CF4u;
    // 0x124cf8: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1244A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1244A8u, 0x124CF4u, 0x124CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124CFCu;
label_124cfc:
    // 0x124cfc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x124cfcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124d00: 0x12400058  beqz        $s2, . + 4 + (0x58 << 2)
    ctx->pc = 0x124D00u;
    {
        const bool branch_taken_0x124d00 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x124D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124D00u;
        // 0x124d04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124d00) {
            ctx->pc = 0x124E64u;
            goto label_124e64;
        }
    }
    ctx->pc = 0x124D08u;
    // 0x124d08: 0xc049194  jal         func_124650
    ctx->pc = 0x124D08u;
    SET_GPR_U32(ctx, 31, 0x124D10u);
    ctx->pc = 0x124D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124D08u;
    // 0x124d0c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124650u, 0x124D08u, 0x124D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124D10u;
label_124d10:
    // 0x124d10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x124d10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124d14: 0x12000053  beqz        $s0, . + 4 + (0x53 << 2)
    ctx->pc = 0x124D14u;
    {
        const bool branch_taken_0x124d14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x124D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124D14u;
        // 0x124d18: 0x27b40020  addiu       $s4, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124d14) {
            ctx->pc = 0x124E64u;
            goto label_124e64;
        }
    }
    ctx->pc = 0x124D1Cu;
    // 0x124d1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x124d1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124d20: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x124d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124d24: 0xc04a151  jal         func_128544
    ctx->pc = 0x124D24u;
    SET_GPR_U32(ctx, 31, 0x124D2Cu);
    ctx->pc = 0x124D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124D24u;
    // 0x124d28: 0x24060480  addiu       $a2, $zero, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x124D24u, 0x124D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124D2Cu;
label_124d2c:
    // 0x124d2c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x124d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x124d30: 0x97a40010  lhu         $a0, 0x10($sp)
    ctx->pc = 0x124d30u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x124d34: 0x2431823  subu        $v1, $s2, $v1
    ctx->pc = 0x124d34u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x124d38: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x124d38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x124d3c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x124d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x124d40: 0xa7a4041a  sh          $a0, 0x41A($sp)
    ctx->pc = 0x124d40u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 1050), (uint16_t)GPR_U32(ctx, 4));
    // 0x124d44: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x124d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x124d48: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x124d48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x124d4c: 0x24710004  addiu       $s1, $v1, 0x4
    ctx->pc = 0x124d4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x124d50: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x124d50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x124d54: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x124D54u;
    {
        const bool branch_taken_0x124d54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124D54u;
        // 0x124d58: 0xafa50024  sw          $a1, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124d54) {
            ctx->pc = 0x124D80u;
            goto label_124d80;
        }
    }
    ctx->pc = 0x124D5Cu;
    // 0x124d5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x124d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_124d60:
    // 0x124d60: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x124d60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124d64: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x124d64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124d68: 0xc049220  jal         func_124880
    ctx->pc = 0x124D68u;
    SET_GPR_U32(ctx, 31, 0x124D70u);
    ctx->pc = 0x124D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124D68u;
    // 0x124d6c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124880u, 0x124D68u, 0x124D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124D70u;
label_124d70:
    // 0x124d70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x124d70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124d74: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x124d74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x124d78: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x124D78u;
    {
        const bool branch_taken_0x124d78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x124D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124D78u;
        // 0x124d7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124d78) {
            ctx->pc = 0x124D60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_124d60;
        }
    }
    ctx->pc = 0x124D80u;
label_124d80:
    // 0x124d80: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x124d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x124d84: 0x2404007a  addiu       $a0, $zero, 0x7A
    ctx->pc = 0x124d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
    // 0x124d88: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x124d88u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x124d8c: 0x14640006  bne         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x124D8Cu;
    {
        const bool branch_taken_0x124d8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x124D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124D8Cu;
        // 0x124d90: 0x26500010  addiu       $s0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124d8c) {
            ctx->pc = 0x124DA8u;
            goto label_124da8;
        }
    }
    ctx->pc = 0x124D94u;
    // 0x124d94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x124d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124d98: 0xc048e3e  jal         func_1238F8
    ctx->pc = 0x124D98u;
    SET_GPR_U32(ctx, 31, 0x124DA0u);
    ctx->pc = 0x124D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124D98u;
    // 0x124d9c: 0x27a504a0  addiu       $a1, $sp, 0x4A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1238F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1238F8u, 0x124D98u, 0x124DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124DA0u;
label_124da0:
    // 0x124da0: 0x8fa304a0  lw          $v1, 0x4A0($sp)
    ctx->pc = 0x124da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1184)));
    // 0x124da4: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x124da4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_124da8:
    // 0x124da8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x124da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x124dac: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x124dacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x124db0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x124db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x124db4: 0x24510004  addiu       $s1, $v0, 0x4
    ctx->pc = 0x124db4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x124db8: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x124db8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x124dbc: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x124DBCu;
    {
        const bool branch_taken_0x124dbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124DBCu;
        // 0x124dc0: 0xafa504a4  sw          $a1, 0x4A4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1188), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124dbc) {
            ctx->pc = 0x124E08u;
            goto label_124e08;
        }
    }
    ctx->pc = 0x124DC4u;
    // 0x124dc4: 0x265102b  sltu        $v0, $s3, $a1
    ctx->pc = 0x124dc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x124dc8: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x124DC8u;
    {
        const bool branch_taken_0x124dc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x124DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124DC8u;
        // 0x124dcc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124dc8) {
            ctx->pc = 0x124E0Cu;
            goto label_124e0c;
        }
    }
    ctx->pc = 0x124DD0u;
    // 0x124dd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x124dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124dd4: 0x0  nop
    ctx->pc = 0x124dd4u;
    // NOP
label_124dd8:
    // 0x124dd8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x124dd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124ddc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x124ddcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124de0: 0xc049220  jal         func_124880
    ctx->pc = 0x124DE0u;
    SET_GPR_U32(ctx, 31, 0x124DE8u);
    ctx->pc = 0x124DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124DE0u;
    // 0x124de4: 0x27a704a4  addiu       $a3, $sp, 0x4A4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1188));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124880u, 0x124DE0u, 0x124DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124DE8u;
label_124de8:
    // 0x124de8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x124de8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124dec: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x124decu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x124df0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x124DF0u;
    {
        const bool branch_taken_0x124df0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124DF0u;
        // 0x124df4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124df0) {
            ctx->pc = 0x124E0Cu;
            goto label_124e0c;
        }
    }
    ctx->pc = 0x124DF8u;
    // 0x124df8: 0x8fa204a4  lw          $v0, 0x4A4($sp)
    ctx->pc = 0x124df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1188)));
    // 0x124dfc: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x124dfcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x124e00: 0x1040fff5  beqz        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x124E00u;
    {
        const bool branch_taken_0x124e00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124E00u;
        // 0x124e04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124e00) {
            ctx->pc = 0x124DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_124dd8;
        }
    }
    ctx->pc = 0x124E08u;
label_124e08:
    // 0x124e08: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x124e08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_124e0c:
    // 0x124e0c: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x124e0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124e10: 0x27a30480  addiu       $v1, $sp, 0x480
    ctx->pc = 0x124e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
label_124e14:
    // 0x124e14: 0xdc850000  ld          $a1, 0x0($a0)
    ctx->pc = 0x124e14u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x124e18: 0xdc860008  ld          $a2, 0x8($a0)
    ctx->pc = 0x124e18u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x124e1c: 0xdc870010  ld          $a3, 0x10($a0)
    ctx->pc = 0x124e1cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x124e20: 0xdc880018  ld          $t0, 0x18($a0)
    ctx->pc = 0x124e20u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x124e24: 0xfc450000  sd          $a1, 0x0($v0)
    ctx->pc = 0x124e24u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
    // 0x124e28: 0xfc460008  sd          $a2, 0x8($v0)
    ctx->pc = 0x124e28u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 6));
    // 0x124e2c: 0xfc470010  sd          $a3, 0x10($v0)
    ctx->pc = 0x124e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 7));
    // 0x124e30: 0xfc480018  sd          $t0, 0x18($v0)
    ctx->pc = 0x124e30u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 8));
    // 0x124e34: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x124e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x124e38: 0x0  nop
    ctx->pc = 0x124e38u;
    // NOP
    // 0x124e3c: 0x0  nop
    ctx->pc = 0x124e3cu;
    // NOP
    // 0x124e40: 0x1483fff4  bne         $a0, $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x124E40u;
    {
        const bool branch_taken_0x124e40 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x124E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124E40u;
        // 0x124e44: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124e40) {
            ctx->pc = 0x124E14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_124e14;
        }
    }
    ctx->pc = 0x124E48u;
    // 0x124e48: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x124e48u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x124e4c: 0xdc850008  ld          $a1, 0x8($a0)
    ctx->pc = 0x124e4cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x124e50: 0xdc860010  ld          $a2, 0x10($a0)
    ctx->pc = 0x124e50u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x124e54: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x124e54u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x124e58: 0xfc450008  sd          $a1, 0x8($v0)
    ctx->pc = 0x124e58u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 5));
    // 0x124e5c: 0xfc460010  sd          $a2, 0x10($v0)
    ctx->pc = 0x124e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 6));
    // 0x124e60: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x124e60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_124e64:
    // 0x124e64: 0xdfb004b0  ld          $s0, 0x4B0($sp)
    ctx->pc = 0x124e64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1200)));
    // 0x124e68: 0xdfb104b8  ld          $s1, 0x4B8($sp)
    ctx->pc = 0x124e68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1208)));
    // 0x124e6c: 0xdfb204c0  ld          $s2, 0x4C0($sp)
    ctx->pc = 0x124e6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 1216)));
    // 0x124e70: 0xdfb304c8  ld          $s3, 0x4C8($sp)
    ctx->pc = 0x124e70u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 1224)));
    // 0x124e74: 0xdfb404d0  ld          $s4, 0x4D0($sp)
    ctx->pc = 0x124e74u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 1232)));
    // 0x124e78: 0xdfb504d8  ld          $s5, 0x4D8($sp)
    ctx->pc = 0x124e78u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 1240)));
    // 0x124e7c: 0xdfbf04e0  ld          $ra, 0x4E0($sp)
    ctx->pc = 0x124e7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1248)));
    // 0x124e80: 0x3e00008  jr          $ra
    ctx->pc = 0x124E80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124E80u;
        // 0x124e84: 0x27bd04f0  addiu       $sp, $sp, 0x4F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1264));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124E80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x124E88u;
}
