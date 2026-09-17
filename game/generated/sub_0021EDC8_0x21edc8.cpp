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

// Function: sub_0021EDC8
// Address: 0x21edc8 - 0x21ef38
void sub_0021EDC8_0x21edc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021EDC8_0x21edc8");
#endif

    switch (ctx->pc) {
        case 0x21edf0u: goto label_21edf0;
        case 0x21ee38u: goto label_21ee38;
        case 0x21ee50u: goto label_21ee50;
        case 0x21eeacu: goto label_21eeac;
        case 0x21eec0u: goto label_21eec0;
        case 0x21eed4u: goto label_21eed4;
        case 0x21eeecu: goto label_21eeec;
        case 0x21ef04u: goto label_21ef04;
        case 0x21ef1cu: goto label_21ef1c;
        default: break;
    }

    ctx->pc = 0x21edc8u;

    // 0x21edc8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21edc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21edcc: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x21edccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21edd0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21edd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21edd4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21edd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21edd8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21edd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21eddc: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x21eddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x21ede0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21ede0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21ede4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x21EDE4u;
    {
        const bool branch_taken_0x21ede4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EDE4u;
        // 0x21ede8: 0x90a30000  lbu         $v1, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ede4) {
            ctx->pc = 0x21EE14u;
            goto label_21ee14;
        }
    }
    ctx->pc = 0x21EDECu;
    // 0x21edec: 0x0  nop
    ctx->pc = 0x21edecu;
    // NOP
label_21edf0:
    // 0x21edf0: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x21edf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x21edf4: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x21edf4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21edf8: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x21edf8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x21edfc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x21edfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x21ee00: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x21EE00u;
    {
        const bool branch_taken_0x21ee00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x21EE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EE00u;
        // 0x21ee04: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ee00) {
            ctx->pc = 0x21EE24u;
            goto label_21ee24;
        }
    }
    ctx->pc = 0x21EE08u;
    // 0x21ee08: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x21ee08u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21ee0c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x21EE0Cu;
    {
        const bool branch_taken_0x21ee0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21EE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EE0Cu;
        // 0x21ee10: 0x90a30000  lbu         $v1, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ee0c) {
            ctx->pc = 0x21EDF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21edf0;
        }
    }
    ctx->pc = 0x21EE14u;
label_21ee14:
    // 0x21ee14: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x21ee14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21ee18: 0x24020054  addiu       $v0, $zero, 0x54
    ctx->pc = 0x21ee18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x21ee1c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21EE1Cu;
    {
        const bool branch_taken_0x21ee1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x21ee1c) {
            ctx->pc = 0x21EE30u;
            goto label_21ee30;
        }
    }
    ctx->pc = 0x21EE24u;
label_21ee24:
    // 0x21ee24: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x21EE24u;
    {
        const bool branch_taken_0x21ee24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EE24u;
        // 0x21ee28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ee24) {
            ctx->pc = 0x21EF24u;
            goto label_21ef24;
        }
    }
    ctx->pc = 0x21EE2Cu;
    // 0x21ee2c: 0x0  nop
    ctx->pc = 0x21ee2cu;
    // NOP
label_21ee30:
    // 0x21ee30: 0xc087a88  jal         func_21EA20
    ctx->pc = 0x21EE30u;
    SET_GPR_U32(ctx, 31, 0x21EE38u);
    ctx->pc = 0x21EA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21EA20u, 0x21EE30u, 0x21EE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EE38u;
label_21ee38:
    // 0x21ee38: 0x2790c940  addiu       $s0, $gp, -0x36C0
    ctx->pc = 0x21ee38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 28), 4294953280));
    // 0x21ee3c: 0x22338  dsll        $a0, $v0, 12
    ctx->pc = 0x21ee3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 12);
    // 0x21ee40: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x21ee40u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x21ee44: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x21ee44u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x21ee48: 0xc087abc  jal         func_21EAF0
    ctx->pc = 0x21EE48u;
    SET_GPR_U32(ctx, 31, 0x21EE50u);
    ctx->pc = 0x21EE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EE48u;
    // 0x21ee4c: 0x30840007  andi        $a0, $a0, 0x7 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    ctx->in_delay_slot = false;
    ctx->pc = 0x21EAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21EAF0u, 0x21EE48u, 0x21EE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EE50u;
label_21ee50:
    // 0x21ee50: 0xa2220011  sb          $v0, 0x11($s1)
    ctx->pc = 0x21ee50u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 17), (uint8_t)GPR_U32(ctx, 2));
    // 0x21ee54: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x21ee54u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21ee58: 0x21378  dsll        $v0, $v0, 13
    ctx->pc = 0x21ee58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 13);
    // 0x21ee5c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x21ee5cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x21ee60: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x21ee60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x21ee64: 0xa2220010  sb          $v0, 0x10($s1)
    ctx->pc = 0x21ee64u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x21ee68: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x21ee68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21ee6c: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x21ee6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x21ee70: 0xa2230012  sb          $v1, 0x12($s1)
    ctx->pc = 0x21ee70u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 18), (uint8_t)GPR_U32(ctx, 3));
    // 0x21ee74: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x21ee74u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21ee78: 0x216f8  dsll        $v0, $v0, 27
    ctx->pc = 0x21ee78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 27);
    // 0x21ee7c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x21ee7cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x21ee80: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x21ee80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x21ee84: 0xa2220013  sb          $v0, 0x13($s1)
    ctx->pc = 0x21ee84u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 19), (uint8_t)GPR_U32(ctx, 2));
    // 0x21ee88: 0xde030000  ld          $v1, 0x0($s0)
    ctx->pc = 0x21ee88u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21ee8c: 0x31d38  dsll        $v1, $v1, 20
    ctx->pc = 0x21ee8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 20);
    // 0x21ee90: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x21ee90u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x21ee94: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x21ee94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x21ee98: 0xa2230014  sb          $v1, 0x14($s1)
    ctx->pc = 0x21ee98u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 20), (uint8_t)GPR_U32(ctx, 3));
    // 0x21ee9c: 0xde040000  ld          $a0, 0x0($s0)
    ctx->pc = 0x21ee9cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21eea0: 0x423be  dsrl32      $a0, $a0, 14
    ctx->pc = 0x21eea0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 14));
    // 0x21eea4: 0xc093564  jal         func_24D590
    ctx->pc = 0x21EEA4u;
    SET_GPR_U32(ctx, 31, 0x21EEACu);
    ctx->pc = 0x21EEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EEA4u;
    // 0x21eea8: 0x3084003f  andi        $a0, $a0, 0x3F (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D590u, 0x21EEA4u, 0x21EEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EEACu;
label_21eeac:
    // 0x21eeac: 0xa2220001  sb          $v0, 0x1($s1)
    ctx->pc = 0x21eeacu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x21eeb0: 0xde040000  ld          $a0, 0x0($s0)
    ctx->pc = 0x21eeb0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21eeb4: 0x4223e  dsrl32      $a0, $a0, 8
    ctx->pc = 0x21eeb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 8));
    // 0x21eeb8: 0xc093564  jal         func_24D590
    ctx->pc = 0x21EEB8u;
    SET_GPR_U32(ctx, 31, 0x21EEC0u);
    ctx->pc = 0x21EEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EEB8u;
    // 0x21eebc: 0x3084003f  andi        $a0, $a0, 0x3F (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D590u, 0x21EEB8u, 0x21EEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EEC0u;
label_21eec0:
    // 0x21eec0: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x21eec0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x21eec4: 0xde040000  ld          $a0, 0x0($s0)
    ctx->pc = 0x21eec4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21eec8: 0x420fe  dsrl32      $a0, $a0, 3
    ctx->pc = 0x21eec8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 3));
    // 0x21eecc: 0xc093564  jal         func_24D590
    ctx->pc = 0x21EECCu;
    SET_GPR_U32(ctx, 31, 0x21EED4u);
    ctx->pc = 0x21EED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EECCu;
    // 0x21eed0: 0x3084001f  andi        $a0, $a0, 0x1F (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D590u, 0x21EECCu, 0x21EED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EED4u;
label_21eed4:
    // 0x21eed4: 0xa2220003  sb          $v0, 0x3($s1)
    ctx->pc = 0x21eed4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x21eed8: 0xde040000  ld          $a0, 0x0($s0)
    ctx->pc = 0x21eed8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21eedc: 0x42278  dsll        $a0, $a0, 9
    ctx->pc = 0x21eedcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 9);
    // 0x21eee0: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x21eee0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x21eee4: 0xc093564  jal         func_24D590
    ctx->pc = 0x21EEE4u;
    SET_GPR_U32(ctx, 31, 0x21EEECu);
    ctx->pc = 0x21EEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EEE4u;
    // 0x21eee8: 0x3084001f  andi        $a0, $a0, 0x1F (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D590u, 0x21EEE4u, 0x21EEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EEECu;
label_21eeec:
    // 0x21eeec: 0xa2220004  sb          $v0, 0x4($s1)
    ctx->pc = 0x21eeecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x21eef0: 0xde040000  ld          $a0, 0x0($s0)
    ctx->pc = 0x21eef0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21eef4: 0x42138  dsll        $a0, $a0, 4
    ctx->pc = 0x21eef4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 4);
    // 0x21eef8: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x21eef8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x21eefc: 0xc093564  jal         func_24D590
    ctx->pc = 0x21EEFCu;
    SET_GPR_U32(ctx, 31, 0x21EF04u);
    ctx->pc = 0x21EF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EEFCu;
    // 0x21ef00: 0x3084000f  andi        $a0, $a0, 0xF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D590u, 0x21EEFCu, 0x21EF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EF04u;
label_21ef04:
    // 0x21ef04: 0xa2220005  sb          $v0, 0x5($s1)
    ctx->pc = 0x21ef04u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x21ef08: 0x9e040004  lwu         $a0, 0x4($s0)
    ctx->pc = 0x21ef08u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x21ef0c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x21ef0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x21ef10: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x21ef10u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x21ef14: 0xc093564  jal         func_24D590
    ctx->pc = 0x21EF14u;
    SET_GPR_U32(ctx, 31, 0x21EF1Cu);
    ctx->pc = 0x21EF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EF14u;
    // 0x21ef18: 0x30840007  andi        $a0, $a0, 0x7 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D590u, 0x21EF14u, 0x21EF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EF1Cu;
label_21ef1c:
    // 0x21ef1c: 0xa6220006  sh          $v0, 0x6($s1)
    ctx->pc = 0x21ef1cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x21ef20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21ef20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21ef24:
    // 0x21ef24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21ef24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21ef28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21ef28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21ef2c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21ef2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21ef30: 0x3e00008  jr          $ra
    ctx->pc = 0x21EF30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21EF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EF30u;
        // 0x21ef34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21EF30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21EF38u;
}
