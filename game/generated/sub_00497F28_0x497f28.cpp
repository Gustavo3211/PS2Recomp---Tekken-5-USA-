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

// Function: sub_00497F28
// Address: 0x497f28 - 0x4981d8
void sub_00497F28_0x497f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00497F28_0x497f28");
#endif

    switch (ctx->pc) {
        case 0x497fd8u: goto label_497fd8;
        case 0x498008u: goto label_498008;
        case 0x49802cu: goto label_49802c;
        case 0x498070u: goto label_498070;
        case 0x4980c4u: goto label_4980c4;
        case 0x498100u: goto label_498100;
        case 0x498128u: goto label_498128;
        case 0x498130u: goto label_498130;
        case 0x498160u: goto label_498160;
        case 0x498180u: goto label_498180;
        case 0x4981a0u: goto label_4981a0;
        case 0x4981b0u: goto label_4981b0;
        case 0x4981b8u: goto label_4981b8;
        case 0x4981c0u: goto label_4981c0;
        default: break;
    }

    ctx->pc = 0x497f28u;

    // 0x497f28: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x497f28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x497f2c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x497f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x497f30: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x497f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x497f34: 0x3c170073  lui         $s7, 0x73
    ctx->pc = 0x497f34u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)115 << 16));
    // 0x497f38: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x497f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x497f3c: 0x26f6d680  addiu       $s6, $s7, -0x2980
    ctx->pc = 0x497f3cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 23), 4294956672));
    // 0x497f40: 0x8ec22260  lw          $v0, 0x2260($s6)
    ctx->pc = 0x497f40u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x72F8E0u));
    // 0x497f44: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x497f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x497f48: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x497f48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x497f4c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x497f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x497f50: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x497f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x497f54: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x497f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x497f58: 0x26300014  addiu       $s0, $s1, 0x14
    ctx->pc = 0x497f58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x497f5c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x497f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x497f60: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x497f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x497f64: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x497f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x497f68: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x497f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x497f6c: 0x1044002d  beq         $v0, $a0, . + 4 + (0x2D << 2)
    ctx->pc = 0x497F6Cu;
    {
        const bool branch_taken_0x497f6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x497F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497F6Cu;
        // 0x497f70: 0xac710b18  sw          $s1, 0xB18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 2840), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497f6c) {
            ctx->pc = 0x498024u;
            goto label_498024;
        }
    }
    ctx->pc = 0x497F74u;
    // 0x497f74: 0x3c15007f  lui         $s5, 0x7F
    ctx->pc = 0x497f74u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)127 << 16));
    // 0x497f78: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x497f78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x497f7c: 0xa6a00b12  sh          $zero, 0xB12($s5)
    ctx->pc = 0x497f7cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7F0B12u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x7F0B12u, _value); } while (0);
    // 0x497f80: 0x24520b14  addiu       $s2, $v0, 0xB14
    ctx->pc = 0x497f80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 2836));
    // 0x497f84: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x497f84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x497f88: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x497f88u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
    // 0x497f8c: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x497f8cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x497f90: 0x24540b0c  addiu       $s4, $v0, 0xB0C
    ctx->pc = 0x497f90u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 2828));
    // 0x497f94: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x497f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x497f98: 0xa6430000  sh          $v1, 0x0($s2)
    ctx->pc = 0x497f98u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7F0B14u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x7F0B14u, _value); } while (0);
    // 0x497f9c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x497f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x497fa0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x497fa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x497fa4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x497fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x497fa8: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x497fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x497fac: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x497facu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x497fb0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x497fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x497fb4: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x497fb4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x497fb8: 0xa6830000  sh          $v1, 0x0($s4)
    ctx->pc = 0x497fb8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x497fbc: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x497fbcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x497fc0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x497fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x497fc4: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x497fc4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x497fc8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x497FC8u;
    {
        const bool branch_taken_0x497fc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x497FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497FC8u;
        // 0x497fcc: 0xa6420000  sh          $v0, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497fc8) {
            ctx->pc = 0x497FD8u;
            goto label_497fd8;
        }
    }
    ctx->pc = 0x497FD0u;
    // 0x497fd0: 0xc125f78  jal         func_497DE0
    ctx->pc = 0x497FD0u;
    SET_GPR_U32(ctx, 31, 0x497FD8u);
    ctx->pc = 0x497DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x497DE0u, 0x497FD0u, 0x497FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x497FD8u;
label_497fd8:
    // 0x497fd8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x497fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x497fdc: 0x731824  and         $v1, $v1, $s3
    ctx->pc = 0x497fdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 19));
    // 0x497fe0: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x497fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x497fe4: 0xa6830000  sh          $v1, 0x0($s4)
    ctx->pc = 0x497fe4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x497fe8: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x497fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x497fec: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x497fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x497ff0: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x497ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x497ff4: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x497ff4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x497ff8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x497FF8u;
    {
        const bool branch_taken_0x497ff8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x497FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497FF8u;
        // 0x497ffc: 0xa6420000  sh          $v0, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497ff8) {
            ctx->pc = 0x498010u;
            goto label_498010;
        }
    }
    ctx->pc = 0x498000u;
    // 0x498000: 0xc125f52  jal         func_497D48
    ctx->pc = 0x498000u;
    SET_GPR_U32(ctx, 31, 0x498008u);
    ctx->pc = 0x497D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x497D48u, 0x498000u, 0x498008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x498008u;
label_498008:
    // 0x498008: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x498008u;
    {
        const bool branch_taken_0x498008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49800Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498008u;
        // 0x49800c: 0x86a20b12  lh          $v0, 0xB12($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 2834)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498008) {
            ctx->pc = 0x49801Cu;
            goto label_49801c;
        }
    }
    ctx->pc = 0x498010u;
label_498010:
    // 0x498010: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x498010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x498014: 0xa6c222c8  sh          $v0, 0x22C8($s6)
    ctx->pc = 0x498014u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 8904), (uint16_t)GPR_U32(ctx, 2));
    // 0x498018: 0x86a20b12  lh          $v0, 0xB12($s5)
    ctx->pc = 0x498018u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 2834)));
label_49801c:
    // 0x49801c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x49801Cu;
    {
        const bool branch_taken_0x49801c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x498020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49801Cu;
        // 0x498020: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49801c) {
            ctx->pc = 0x498048u;
            goto label_498048;
        }
    }
    ctx->pc = 0x498024u;
label_498024:
    // 0x498024: 0xc123392  jal         func_48CE48
    ctx->pc = 0x498024u;
    SET_GPR_U32(ctx, 31, 0x49802Cu);
    ctx->pc = 0x498028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x498024u;
    // 0x498028: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CE48u, 0x498024u, 0x49802Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49802Cu;
label_49802c:
    // 0x49802c: 0x26e2d680  addiu       $v0, $s7, -0x2980
    ctx->pc = 0x49802cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294956672));
    // 0x498030: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x498030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x498034: 0xa4402218  sh          $zero, 0x2218($v0)
    ctx->pc = 0x498034u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8728), (uint16_t)GPR_U32(ctx, 0));
    // 0x498038: 0xac432260  sw          $v1, 0x2260($v0)
    ctx->pc = 0x498038u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8800), GPR_U32(ctx, 3));
    // 0x49803c: 0xa440221a  sh          $zero, 0x221A($v0)
    ctx->pc = 0x49803cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8730), (uint16_t)GPR_U32(ctx, 0));
    // 0x498040: 0xa440221c  sh          $zero, 0x221C($v0)
    ctx->pc = 0x498040u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8732), (uint16_t)GPR_U32(ctx, 0));
    // 0x498044: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x498044u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_498048:
    // 0x498048: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x498048u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x49804c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x49804cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x498050: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x498050u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x498054: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x498054u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x498058: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x498058u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x49805c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x49805cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x498060: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x498060u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x498064: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x498064u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x498068: 0x3e00008  jr          $ra
    ctx->pc = 0x498068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49806Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498068u;
        // 0x49806c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x498068u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x498070u;
label_498070:
    // 0x498070: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x498070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x498074: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x498074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x498078: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x498078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x49807c: 0x3603ffff  ori         $v1, $s0, 0xFFFF
    ctx->pc = 0x49807cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x498080: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x498080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x498084: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x498084u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x498088: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x498088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x49808c: 0x24040078  addiu       $a0, $zero, 0x78
    ctx->pc = 0x49808cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x498090: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x498090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x498094: 0x2453d680  addiu       $s3, $v0, -0x2980
    ctx->pc = 0x498094u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x498098: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x498098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x49809c: 0x26720018  addiu       $s2, $s3, 0x18
    ctx->pc = 0x49809cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x4980a0: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4980a0u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x72D698u));
    // 0x4980a4: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4980a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4980a8: 0x628024  and         $s0, $v1, $v0
    ctx->pc = 0x4980a8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4980ac: 0x101c00  sll         $v1, $s0, 16
    ctx->pc = 0x4980acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x4980b0: 0x31403  sra         $v0, $v1, 16
    ctx->pc = 0x4980b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4980b4: 0x5444000a  bnel        $v0, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x4980B4u;
    {
        const bool branch_taken_0x4980b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x4980b4) {
            ctx->pc = 0x4980B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4980B4u;
            // 0x4980b8: 0x3604ffff  ori         $a0, $s0, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4980E0u;
            goto label_4980e0;
        }
    }
    ctx->pc = 0x4980BCu;
    // 0x4980bc: 0xc127998  jal         func_49E660
    ctx->pc = 0x4980BCu;
    SET_GPR_U32(ctx, 31, 0x4980C4u);
    ctx->pc = 0x49E660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49E660u, 0x4980BCu, 0x4980C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4980C4u;
label_4980c4:
    // 0x4980c4: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4980c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4980c8: 0x3603ffff  ori         $v1, $s0, 0xFFFF
    ctx->pc = 0x4980c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x4980cc: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4980ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4980d0: 0x628024  and         $s0, $v1, $v0
    ctx->pc = 0x4980d0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4980d4: 0x101c00  sll         $v1, $s0, 16
    ctx->pc = 0x4980d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x4980d8: 0x31403  sra         $v0, $v1, 16
    ctx->pc = 0x4980d8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4980dc: 0x3604ffff  ori         $a0, $s0, 0xFFFF
    ctx->pc = 0x4980dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
label_4980e0:
    // 0x4980e0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4980e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4980e4: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4980e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4980e8: 0x828024  and         $s0, $a0, $v0
    ctx->pc = 0x4980e8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4980ec: 0x101c00  sll         $v1, $s0, 16
    ctx->pc = 0x4980ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x4980f0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x4980F0u;
    {
        const bool branch_taken_0x4980f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4980f0) {
            ctx->pc = 0x498120u;
            goto label_498120;
        }
    }
    ctx->pc = 0x4980F8u;
    // 0x4980f8: 0xc124c3c  jal         func_4930F0
    ctx->pc = 0x4980F8u;
    SET_GPR_U32(ctx, 31, 0x498100u);
    ctx->pc = 0x4980FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4980F8u;
    // 0x4980fc: 0xa6500000  sh          $s0, 0x0($s2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4930F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4930F0u, 0x4980F8u, 0x498100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x498100u;
label_498100:
    // 0x498100: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x498100u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x498104: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x498104u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x498108: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x498108u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49810c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x49810cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x498110: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x498110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x498114: 0x8124642  j           func_491908
    ctx->pc = 0x498114u;
    ctx->pc = 0x498118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x498114u;
    // 0x498118: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x491908u;
    sub_00491908_0x491908(rdram, ctx, runtime); return;
    ctx->pc = 0x49811Cu;
    // 0x49811c: 0x0  nop
    ctx->pc = 0x49811cu;
    // NOP
label_498120:
    // 0x498120: 0xc124910  jal         func_492440
    ctx->pc = 0x498120u;
    SET_GPR_U32(ctx, 31, 0x498128u);
    ctx->pc = 0x498124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x498120u;
    // 0x498124: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x492440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x492440u, 0x498120u, 0x498128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x498128u;
label_498128:
    // 0x498128: 0xc12413e  jal         func_4904F8
    ctx->pc = 0x498128u;
    SET_GPR_U32(ctx, 31, 0x498130u);
    ctx->pc = 0x49812Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x498128u;
    // 0x49812c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4904F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4904F8u, 0x498128u, 0x498130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x498130u;
label_498130:
    // 0x498130: 0x26630010  addiu       $v1, $s3, 0x10
    ctx->pc = 0x498130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x498134: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x498134u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x498138: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x498138u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49813c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x49813cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x498140: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x498140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x498144: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x498144u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x498148: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x498148u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x49814c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x49814cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x498150: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x498150u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x498154: 0x3e00008  jr          $ra
    ctx->pc = 0x498154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x498158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498154u;
        // 0x498158: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x498154u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49815Cu;
    // 0x49815c: 0x0  nop
    ctx->pc = 0x49815cu;
    // NOP
label_498160:
    // 0x498160: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x498160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x498164: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x498164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x498168: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x498168u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
    // 0x49816c: 0x2610d680  addiu       $s0, $s0, -0x2980
    ctx->pc = 0x49816cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956672));
    // 0x498170: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x498170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x498174: 0xa6000096  sh          $zero, 0x96($s0)
    ctx->pc = 0x498174u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x72D716u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72D716u, _value); } while (0);
    // 0x498178: 0xc122cc6  jal         func_48B318
    ctx->pc = 0x498178u;
    SET_GPR_U32(ctx, 31, 0x498180u);
    ctx->pc = 0x49817Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x498178u;
    // 0x49817c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B318u, 0x498178u, 0x498180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x498180u;
label_498180:
    // 0x498180: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x498180u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x498184: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x498184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x498188: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x498188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x49818c: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x49818cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x498190: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x498190u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x498194: 0x3e00008  jr          $ra
    ctx->pc = 0x498194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x498198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498194u;
        // 0x498198: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x498194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49819Cu;
    // 0x49819c: 0x0  nop
    ctx->pc = 0x49819cu;
    // NOP
label_4981a0:
    // 0x4981a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4981a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4981a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4981a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4981a8: 0xc124910  jal         func_492440
    ctx->pc = 0x4981A8u;
    SET_GPR_U32(ctx, 31, 0x4981B0u);
    ctx->pc = 0x4981ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4981A8u;
    // 0x4981ac: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x492440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x492440u, 0x4981A8u, 0x4981B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4981B0u;
label_4981b0:
    // 0x4981b0: 0xc123ac8  jal         func_48EB20
    ctx->pc = 0x4981B0u;
    SET_GPR_U32(ctx, 31, 0x4981B8u);
    ctx->pc = 0x48EB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48EB20u, 0x4981B0u, 0x4981B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4981B8u;
label_4981b8:
    // 0x4981b8: 0xc12413e  jal         func_4904F8
    ctx->pc = 0x4981B8u;
    SET_GPR_U32(ctx, 31, 0x4981C0u);
    ctx->pc = 0x4981BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4981B8u;
    // 0x4981bc: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4904F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4904F8u, 0x4981B8u, 0x4981C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4981C0u;
label_4981c0:
    // 0x4981c0: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4981c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x4981c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4981c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4981c8: 0xa440f87e  sh          $zero, -0x782($v0)
    ctx->pc = 0x4981c8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x72F87Eu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F87Eu, _value); } while (0);
    // 0x4981cc: 0x3e00008  jr          $ra
    ctx->pc = 0x4981CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4981D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4981CCu;
        // 0x4981d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4981CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4981D4u;
    // 0x4981d4: 0x0  nop
    ctx->pc = 0x4981d4u;
    // NOP
    ctx->pc = 0x4981d8u;
}
