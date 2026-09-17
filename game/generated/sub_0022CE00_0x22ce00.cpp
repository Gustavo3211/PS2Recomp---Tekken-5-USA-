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

// Function: sub_0022CE00
// Address: 0x22ce00 - 0x22cf88
void sub_0022CE00_0x22ce00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022CE00_0x22ce00");
#endif

    switch (ctx->pc) {
        case 0x22ce38u: goto label_22ce38;
        case 0x22ce60u: goto label_22ce60;
        case 0x22ce90u: goto label_22ce90;
        case 0x22cea8u: goto label_22cea8;
        case 0x22ced8u: goto label_22ced8;
        case 0x22cf00u: goto label_22cf00;
        case 0x22cf10u: goto label_22cf10;
        case 0x22cf3cu: goto label_22cf3c;
        default: break;
    }

    ctx->pc = 0x22ce00u;

    // 0x22ce00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x22ce00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x22ce04: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x22ce04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x22ce08: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x22ce08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x22ce0c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x22ce0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x22ce10: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x22ce10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x22ce14: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x22ce14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x22ce18: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x22ce18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x22ce1c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x22ce1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x22ce20: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x22ce20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x22ce24: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x22ce24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x22ce28: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x22ce28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x22ce2c: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x22ce2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x22ce30: 0xc08afec  jal         func_22BFB0
    ctx->pc = 0x22CE30u;
    SET_GPR_U32(ctx, 31, 0x22CE38u);
    ctx->pc = 0x22CE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CE30u;
    // 0x22ce34: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22BFB0u, 0x22CE30u, 0x22CE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CE38u;
label_22ce38:
    // 0x22ce38: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x22ce38u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ce3c: 0x50600046  beql        $v1, $zero, . + 4 + (0x46 << 2)
    ctx->pc = 0x22CE3Cu;
    {
        const bool branch_taken_0x22ce3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ce3c) {
            ctx->pc = 0x22CE40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22CE3Cu;
            // 0x22ce40: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22CF58u;
            goto label_22cf58;
        }
    }
    ctx->pc = 0x22CE44u;
    // 0x22ce44: 0x8c730050  lw          $s3, 0x50($v1)
    ctx->pc = 0x22ce44u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x22ce48: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x22ce48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x22ce4c: 0x8c630054  lw          $v1, 0x54($v1)
    ctx->pc = 0x22ce4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x22ce50: 0x8c5e9288  lw          $fp, -0x6D78($v0)
    ctx->pc = 0x22ce50u;
    SET_GPR_S32(ctx, 30, (int32_t)FAST_READ32(0x159288u));
    // 0x22ce54: 0x1a60003f  blez        $s3, . + 4 + (0x3F << 2)
    ctx->pc = 0x22CE54u;
    {
        const bool branch_taken_0x22ce54 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x22CE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CE54u;
        // 0x22ce58: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ce54) {
            ctx->pc = 0x22CF54u;
            goto label_22cf54;
        }
    }
    ctx->pc = 0x22CE5Cu;
    // 0x22ce5c: 0x0  nop
    ctx->pc = 0x22ce5cu;
    // NOP
label_22ce60:
    // 0x22ce60: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x22ce60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x22ce64: 0x8c470068  lw          $a3, 0x68($v0)
    ctx->pc = 0x22ce64u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x22ce68: 0x10e00035  beqz        $a3, . + 4 + (0x35 << 2)
    ctx->pc = 0x22CE68u;
    {
        const bool branch_taken_0x22ce68 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CE68u;
        // 0x22ce6c: 0x24f7000c  addiu       $s7, $a3, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ce68) {
            ctx->pc = 0x22CF40u;
            goto label_22cf40;
        }
    }
    ctx->pc = 0x22CE70u;
    // 0x22ce70: 0x8fc20028  lw          $v0, 0x28($fp)
    ctx->pc = 0x22ce70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
    // 0x22ce74: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x22CE74u;
    {
        const bool branch_taken_0x22ce74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CE74u;
        // 0x22ce78: 0x8cf60004  lw          $s6, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ce74) {
            ctx->pc = 0x22CF3Cu;
            goto label_22cf3c;
        }
    }
    ctx->pc = 0x22CE7Cu;
    // 0x22ce7c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x22ce7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ce80: 0x642002a  bltzl       $s2, . + 4 + (0x2A << 2)
    ctx->pc = 0x22CE80u;
    {
        const bool branch_taken_0x22ce80 = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x22ce80) {
            ctx->pc = 0x22CE84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22CE80u;
            // 0x22ce84: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22CF2Cu;
            goto label_22cf2c;
        }
    }
    ctx->pc = 0x22CE88u;
    // 0x22ce88: 0x256102a  slt         $v0, $s2, $s6
    ctx->pc = 0x22ce88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x22ce8c: 0x0  nop
    ctx->pc = 0x22ce8cu;
    // NOP
label_22ce90:
    // 0x22ce90: 0x50400023  beql        $v0, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x22CE90u;
    {
        const bool branch_taken_0x22ce90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ce90) {
            ctx->pc = 0x22CE94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22CE90u;
            // 0x22ce94: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22CF20u;
            goto label_22cf20;
        }
    }
    ctx->pc = 0x22CE98u;
    // 0x22ce98: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x22ce98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ce9c: 0x1a400009  blez        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x22CE9Cu;
    {
        const bool branch_taken_0x22ce9c = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x22CEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CE9Cu;
        // 0x22cea0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ce9c) {
            ctx->pc = 0x22CEC4u;
            goto label_22cec4;
        }
    }
    ctx->pc = 0x22CEA4u;
    // 0x22cea4: 0x0  nop
    ctx->pc = 0x22cea4u;
    // NOP
label_22cea8:
    // 0x22cea8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x22cea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x22ceac: 0x72102a  slt         $v0, $v1, $s2
    ctx->pc = 0x22ceacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x22ceb0: 0x0  nop
    ctx->pc = 0x22ceb0u;
    // NOP
    // 0x22ceb4: 0x0  nop
    ctx->pc = 0x22ceb4u;
    // NOP
    // 0x22ceb8: 0x0  nop
    ctx->pc = 0x22ceb8u;
    // NOP
    // 0x22cebc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x22CEBCu;
    {
        const bool branch_taken_0x22cebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22CEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CEBCu;
        // 0x22cec0: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cebc) {
            ctx->pc = 0x22CEA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22cea8;
        }
    }
    ctx->pc = 0x22CEC4u;
label_22cec4:
    // 0x22cec4: 0x8c910000  lw          $s1, 0x0($a0)
    ctx->pc = 0x22cec4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22cec8: 0x1a200014  blez        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x22CEC8u;
    {
        const bool branch_taken_0x22cec8 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x22CECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CEC8u;
        // 0x22cecc: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cec8) {
            ctx->pc = 0x22CF1Cu;
            goto label_22cf1c;
        }
    }
    ctx->pc = 0x22CED0u;
    // 0x22ced0: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x22ced0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22ced4: 0x24140003  addiu       $s4, $zero, 0x3
    ctx->pc = 0x22ced4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_22ced8:
    // 0x22ced8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x22ced8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22cedc: 0x50550006  beql        $v0, $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x22CEDCu;
    {
        const bool branch_taken_0x22cedc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        if (branch_taken_0x22cedc) {
            ctx->pc = 0x22CEE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22CEDCu;
            // 0x22cee0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22CEF8u;
            goto label_22cef8;
        }
    }
    ctx->pc = 0x22CEE4u;
    // 0x22cee4: 0x50540008  beql        $v0, $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x22CEE4u;
    {
        const bool branch_taken_0x22cee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        if (branch_taken_0x22cee4) {
            ctx->pc = 0x22CEE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22CEE4u;
            // 0x22cee8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22CF08u;
            goto label_22cf08;
        }
    }
    ctx->pc = 0x22CEECu;
    // 0x22ceec: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x22CEECu;
    {
        const bool branch_taken_0x22ceec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CEECu;
        // 0x22cef0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ceec) {
            ctx->pc = 0x22CF14u;
            goto label_22cf14;
        }
    }
    ctx->pc = 0x22CEF4u;
    // 0x22cef4: 0x0  nop
    ctx->pc = 0x22cef4u;
    // NOP
label_22cef8:
    // 0x22cef8: 0xc08b1ec  jal         func_22C7B0
    ctx->pc = 0x22CEF8u;
    SET_GPR_U32(ctx, 31, 0x22CF00u);
    ctx->pc = 0x22CEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CEF8u;
    // 0x22cefc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C7B0u, 0x22CEF8u, 0x22CF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CF00u;
label_22cf00:
    // 0x22cf00: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x22CF00u;
    {
        const bool branch_taken_0x22cf00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CF00u;
        // 0x22cf04: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cf00) {
            ctx->pc = 0x22CF14u;
            goto label_22cf14;
        }
    }
    ctx->pc = 0x22CF08u;
label_22cf08:
    // 0x22cf08: 0xc08b1ec  jal         func_22C7B0
    ctx->pc = 0x22CF08u;
    SET_GPR_U32(ctx, 31, 0x22CF10u);
    ctx->pc = 0x22CF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CF08u;
    // 0x22cf0c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C7B0u, 0x22CF08u, 0x22CF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CF10u;
label_22cf10:
    // 0x22cf10: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x22cf10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_22cf14:
    // 0x22cf14: 0x1e20fff0  bgtz        $s1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x22CF14u;
    {
        const bool branch_taken_0x22cf14 = (GPR_S32(ctx, 17) > 0);
        ctx->pc = 0x22CF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CF14u;
        // 0x22cf18: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cf14) {
            ctx->pc = 0x22CED8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22ced8;
        }
    }
    ctx->pc = 0x22CF1Cu;
label_22cf1c:
    // 0x22cf1c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x22cf1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_22cf20:
    // 0x22cf20: 0x641ffdb  bgez        $s2, . + 4 + (-0x25 << 2)
    ctx->pc = 0x22CF20u;
    {
        const bool branch_taken_0x22cf20 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x22CF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CF20u;
        // 0x22cf24: 0x256102a  slt         $v0, $s2, $s6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cf20) {
            ctx->pc = 0x22CE90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22ce90;
        }
    }
    ctx->pc = 0x22CF28u;
    // 0x22cf28: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x22cf28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_22cf2c:
    // 0x22cf2c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x22cf2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cf30: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x22cf30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cf34: 0xc08b344  jal         func_22CD10
    ctx->pc = 0x22CF34u;
    SET_GPR_U32(ctx, 31, 0x22CF3Cu);
    ctx->pc = 0x22CF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CF34u;
    // 0x22cf38: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CD10u, 0x22CF34u, 0x22CF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CF3Cu;
label_22cf3c:
    // 0x22cf3c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x22cf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_22cf40:
    // 0x22cf40: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x22cf40u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x22cf44: 0x27de0040  addiu       $fp, $fp, 0x40
    ctx->pc = 0x22cf44u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 64));
    // 0x22cf48: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x22cf48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x22cf4c: 0x1e60ffc4  bgtz        $s3, . + 4 + (-0x3C << 2)
    ctx->pc = 0x22CF4Cu;
    {
        const bool branch_taken_0x22cf4c = (GPR_S32(ctx, 19) > 0);
        ctx->pc = 0x22CF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CF4Cu;
        // 0x22cf50: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cf4c) {
            ctx->pc = 0x22CE60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22ce60;
        }
    }
    ctx->pc = 0x22CF54u;
label_22cf54:
    // 0x22cf54: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x22cf54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_22cf58:
    // 0x22cf58: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x22cf58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22cf5c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x22cf5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22cf60: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x22cf60u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22cf64: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x22cf64u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22cf68: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x22cf68u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22cf6c: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x22cf6cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22cf70: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x22cf70u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22cf74: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x22cf74u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22cf78: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x22cf78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22cf7c: 0x3e00008  jr          $ra
    ctx->pc = 0x22CF7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22CF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CF7Cu;
        // 0x22cf80: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22CF7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22CF84u;
    // 0x22cf84: 0x0  nop
    ctx->pc = 0x22cf84u;
    // NOP
    ctx->pc = 0x22cf88u;
}
