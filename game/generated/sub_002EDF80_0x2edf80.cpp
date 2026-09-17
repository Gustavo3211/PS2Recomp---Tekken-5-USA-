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

// Function: sub_002EDF80
// Address: 0x2edf80 - 0x2ee128
void sub_002EDF80_0x2edf80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EDF80_0x2edf80");
#endif

    switch (ctx->pc) {
        case 0x2edf80u: goto label_2edf80;
        case 0x2edf84u: goto label_2edf84;
        case 0x2edf88u: goto label_2edf88;
        case 0x2edf8cu: goto label_2edf8c;
        case 0x2edf90u: goto label_2edf90;
        case 0x2edf94u: goto label_2edf94;
        case 0x2edf98u: goto label_2edf98;
        case 0x2edf9cu: goto label_2edf9c;
        case 0x2edfa0u: goto label_2edfa0;
        case 0x2edfa4u: goto label_2edfa4;
        case 0x2edfa8u: goto label_2edfa8;
        case 0x2edfacu: goto label_2edfac;
        case 0x2edfb0u: goto label_2edfb0;
        case 0x2edfb4u: goto label_2edfb4;
        case 0x2edfb8u: goto label_2edfb8;
        case 0x2edfbcu: goto label_2edfbc;
        case 0x2edfc0u: goto label_2edfc0;
        case 0x2edfc4u: goto label_2edfc4;
        case 0x2edfc8u: goto label_2edfc8;
        case 0x2edfccu: goto label_2edfcc;
        case 0x2edfd0u: goto label_2edfd0;
        case 0x2edfd4u: goto label_2edfd4;
        case 0x2edfd8u: goto label_2edfd8;
        case 0x2edfdcu: goto label_2edfdc;
        case 0x2edfe0u: goto label_2edfe0;
        case 0x2edfe4u: goto label_2edfe4;
        case 0x2edfe8u: goto label_2edfe8;
        case 0x2edfecu: goto label_2edfec;
        case 0x2edff0u: goto label_2edff0;
        case 0x2edff4u: goto label_2edff4;
        case 0x2edff8u: goto label_2edff8;
        case 0x2edffcu: goto label_2edffc;
        case 0x2ee000u: goto label_2ee000;
        case 0x2ee004u: goto label_2ee004;
        case 0x2ee008u: goto label_2ee008;
        case 0x2ee00cu: goto label_2ee00c;
        case 0x2ee010u: goto label_2ee010;
        case 0x2ee014u: goto label_2ee014;
        case 0x2ee018u: goto label_2ee018;
        case 0x2ee01cu: goto label_2ee01c;
        case 0x2ee020u: goto label_2ee020;
        case 0x2ee024u: goto label_2ee024;
        case 0x2ee028u: goto label_2ee028;
        case 0x2ee02cu: goto label_2ee02c;
        case 0x2ee030u: goto label_2ee030;
        case 0x2ee034u: goto label_2ee034;
        case 0x2ee038u: goto label_2ee038;
        case 0x2ee03cu: goto label_2ee03c;
        case 0x2ee040u: goto label_2ee040;
        case 0x2ee044u: goto label_2ee044;
        case 0x2ee048u: goto label_2ee048;
        case 0x2ee04cu: goto label_2ee04c;
        case 0x2ee050u: goto label_2ee050;
        case 0x2ee054u: goto label_2ee054;
        case 0x2ee058u: goto label_2ee058;
        case 0x2ee05cu: goto label_2ee05c;
        case 0x2ee060u: goto label_2ee060;
        case 0x2ee064u: goto label_2ee064;
        case 0x2ee068u: goto label_2ee068;
        case 0x2ee06cu: goto label_2ee06c;
        case 0x2ee070u: goto label_2ee070;
        case 0x2ee074u: goto label_2ee074;
        case 0x2ee078u: goto label_2ee078;
        case 0x2ee07cu: goto label_2ee07c;
        case 0x2ee080u: goto label_2ee080;
        case 0x2ee084u: goto label_2ee084;
        case 0x2ee088u: goto label_2ee088;
        case 0x2ee08cu: goto label_2ee08c;
        case 0x2ee090u: goto label_2ee090;
        case 0x2ee094u: goto label_2ee094;
        case 0x2ee098u: goto label_2ee098;
        case 0x2ee09cu: goto label_2ee09c;
        case 0x2ee0a0u: goto label_2ee0a0;
        case 0x2ee0a4u: goto label_2ee0a4;
        case 0x2ee0a8u: goto label_2ee0a8;
        case 0x2ee0acu: goto label_2ee0ac;
        case 0x2ee0b0u: goto label_2ee0b0;
        case 0x2ee0b4u: goto label_2ee0b4;
        case 0x2ee0b8u: goto label_2ee0b8;
        case 0x2ee0bcu: goto label_2ee0bc;
        case 0x2ee0c0u: goto label_2ee0c0;
        case 0x2ee0c4u: goto label_2ee0c4;
        case 0x2ee0c8u: goto label_2ee0c8;
        case 0x2ee0ccu: goto label_2ee0cc;
        case 0x2ee0d0u: goto label_2ee0d0;
        case 0x2ee0d4u: goto label_2ee0d4;
        case 0x2ee0d8u: goto label_2ee0d8;
        case 0x2ee0dcu: goto label_2ee0dc;
        case 0x2ee0e0u: goto label_2ee0e0;
        case 0x2ee0e4u: goto label_2ee0e4;
        case 0x2ee0e8u: goto label_2ee0e8;
        case 0x2ee0ecu: goto label_2ee0ec;
        case 0x2ee0f0u: goto label_2ee0f0;
        case 0x2ee0f4u: goto label_2ee0f4;
        case 0x2ee0f8u: goto label_2ee0f8;
        case 0x2ee0fcu: goto label_2ee0fc;
        case 0x2ee100u: goto label_2ee100;
        case 0x2ee104u: goto label_2ee104;
        case 0x2ee108u: goto label_2ee108;
        case 0x2ee10cu: goto label_2ee10c;
        case 0x2ee110u: goto label_2ee110;
        case 0x2ee114u: goto label_2ee114;
        case 0x2ee118u: goto label_2ee118;
        case 0x2ee11cu: goto label_2ee11c;
        case 0x2ee120u: goto label_2ee120;
        case 0x2ee124u: goto label_2ee124;
        default: break;
    }

    ctx->pc = 0x2edf80u;

label_2edf80:
    // 0x2edf80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2edf80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2edf84:
    // 0x2edf84: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2edf84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2edf88:
    // 0x2edf88: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2edf88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2edf8c:
    // 0x2edf8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2edf8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2edf90:
    // 0x2edf90: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2edf90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2edf94:
    // 0x2edf94: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2edf94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_2edf98:
    // 0x2edf98: 0x8e22015c  lw          $v0, 0x15C($s1)
    ctx->pc = 0x2edf98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 348)));
label_2edf9c:
    // 0x2edf9c: 0x8e250160  lw          $a1, 0x160($s1)
    ctx->pc = 0x2edf9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
label_2edfa0:
    // 0x2edfa0: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
label_2edfa4:
    if (ctx->pc == 0x2EDFA4u) {
        ctx->pc = 0x2EDFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDFA0u;
        // 0x2edfa4: 0xae220048  sw          $v0, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDFA8u;
        goto label_2edfa8;
    }
    ctx->pc = 0x2EDFA0u;
    {
        const bool branch_taken_0x2edfa0 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2EDFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDFA0u;
        // 0x2edfa4: 0xae220048  sw          $v0, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edfa0) {
            ctx->pc = 0x2EDFCCu;
            goto label_2edfcc;
        }
    }
    ctx->pc = 0x2EDFA8u;
label_2edfa8:
    // 0x2edfa8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2edfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2edfac:
    // 0x2edfac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2edfacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2edfb0:
    // 0x2edfb0: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x2edfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_2edfb4:
    // 0x2edfb4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2edfb4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2edfb8:
    // 0x2edfb8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2edfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2edfbc:
    // 0x2edfbc: 0x60f809  jalr        $v1
label_2edfc0:
    if (ctx->pc == 0x2EDFC0u) {
        ctx->pc = 0x2EDFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDFBCu;
        // 0x2edfc0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDFC4u;
        goto label_2edfc4;
    }
    ctx->pc = 0x2EDFBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2EDFC4u);
        ctx->pc = 0x2EDFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDFBCu;
        // 0x2edfc0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EDFBCu, 0x2EDFC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EDFC4u;
label_2edfc4:
    // 0x2edfc4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2edfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2edfc8:
    // 0x2edfc8: 0xae220160  sw          $v0, 0x160($s1)
    ctx->pc = 0x2edfc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 352), GPR_U32(ctx, 2));
label_2edfcc:
    // 0x2edfcc: 0x8e250164  lw          $a1, 0x164($s1)
    ctx->pc = 0x2edfccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 356)));
label_2edfd0:
    // 0x2edfd0: 0x4a2000a  bltzl       $a1, . + 4 + (0xA << 2)
label_2edfd4:
    if (ctx->pc == 0x2EDFD4u) {
        ctx->pc = 0x2EDFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDFD0u;
        // 0x2edfd4: 0x8e230048  lw          $v1, 0x48($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDFD8u;
        goto label_2edfd8;
    }
    ctx->pc = 0x2EDFD0u;
    {
        const bool branch_taken_0x2edfd0 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x2edfd0) {
            ctx->pc = 0x2EDFD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EDFD0u;
            // 0x2edfd4: 0x8e230048  lw          $v1, 0x48($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EDFFCu;
            goto label_2edffc;
        }
    }
    ctx->pc = 0x2EDFD8u;
label_2edfd8:
    // 0x2edfd8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2edfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2edfdc:
    // 0x2edfdc: 0x24420058  addiu       $v0, $v0, 0x58
    ctx->pc = 0x2edfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
label_2edfe0:
    // 0x2edfe0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2edfe0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2edfe4:
    // 0x2edfe4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2edfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2edfe8:
    // 0x2edfe8: 0x60f809  jalr        $v1
label_2edfec:
    if (ctx->pc == 0x2EDFECu) {
        ctx->pc = 0x2EDFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDFE8u;
        // 0x2edfec: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDFF0u;
        goto label_2edff0;
    }
    ctx->pc = 0x2EDFE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2EDFF0u);
        ctx->pc = 0x2EDFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDFE8u;
        // 0x2edfec: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EDFE8u, 0x2EDFF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EDFF0u;
label_2edff0:
    // 0x2edff0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2edff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2edff4:
    // 0x2edff4: 0xae220164  sw          $v0, 0x164($s1)
    ctx->pc = 0x2edff4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 356), GPR_U32(ctx, 2));
label_2edff8:
    // 0x2edff8: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x2edff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_2edffc:
    // 0x2edffc: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2edffcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ee000:
    // 0x2ee000: 0x10720025  beq         $v1, $s2, . + 4 + (0x25 << 2)
label_2ee004:
    if (ctx->pc == 0x2EE004u) {
        ctx->pc = 0x2EE004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE000u;
        // 0x2ee004: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE008u;
        goto label_2ee008;
    }
    ctx->pc = 0x2EE000u;
    {
        const bool branch_taken_0x2ee000 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x2EE004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE000u;
        // 0x2ee004: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee000) {
            ctx->pc = 0x2EE098u;
            goto label_2ee098;
        }
    }
    ctx->pc = 0x2EE008u;
label_2ee008:
    // 0x2ee008: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2ee00c:
    if (ctx->pc == 0x2EE00Cu) {
        ctx->pc = 0x2EE00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE008u;
        // 0x2ee00c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE010u;
        goto label_2ee010;
    }
    ctx->pc = 0x2EE008u;
    {
        const bool branch_taken_0x2ee008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE008u;
        // 0x2ee00c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee008) {
            ctx->pc = 0x2EE020u;
            goto label_2ee020;
        }
    }
    ctx->pc = 0x2EE010u;
label_2ee010:
    // 0x2ee010: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_2ee014:
    if (ctx->pc == 0x2EE014u) {
        ctx->pc = 0x2EE014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE010u;
        // 0x2ee014: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE018u;
        goto label_2ee018;
    }
    ctx->pc = 0x2EE010u;
    {
        const bool branch_taken_0x2ee010 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE010u;
        // 0x2ee014: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee010) {
            ctx->pc = 0x2EE038u;
            goto label_2ee038;
        }
    }
    ctx->pc = 0x2EE018u;
label_2ee018:
    // 0x2ee018: 0x1000003e  b           . + 4 + (0x3E << 2)
label_2ee01c:
    if (ctx->pc == 0x2EE01Cu) {
        ctx->pc = 0x2EE01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE018u;
        // 0x2ee01c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE020u;
        goto label_2ee020;
    }
    ctx->pc = 0x2EE018u;
    {
        const bool branch_taken_0x2ee018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE018u;
        // 0x2ee01c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee018) {
            ctx->pc = 0x2EE114u;
            goto label_2ee114;
        }
    }
    ctx->pc = 0x2EE020u;
label_2ee020:
    // 0x2ee020: 0x10620029  beq         $v1, $v0, . + 4 + (0x29 << 2)
label_2ee024:
    if (ctx->pc == 0x2EE024u) {
        ctx->pc = 0x2EE024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE020u;
        // 0x2ee024: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE028u;
        goto label_2ee028;
    }
    ctx->pc = 0x2EE020u;
    {
        const bool branch_taken_0x2ee020 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EE024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE020u;
        // 0x2ee024: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee020) {
            ctx->pc = 0x2EE0C8u;
            goto label_2ee0c8;
        }
    }
    ctx->pc = 0x2EE028u;
label_2ee028:
    // 0x2ee028: 0x1062002d  beq         $v1, $v0, . + 4 + (0x2D << 2)
label_2ee02c:
    if (ctx->pc == 0x2EE02Cu) {
        ctx->pc = 0x2EE02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE028u;
        // 0x2ee02c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE030u;
        goto label_2ee030;
    }
    ctx->pc = 0x2EE028u;
    {
        const bool branch_taken_0x2ee028 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EE02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE028u;
        // 0x2ee02c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee028) {
            ctx->pc = 0x2EE0E0u;
            goto label_2ee0e0;
        }
    }
    ctx->pc = 0x2EE030u;
label_2ee030:
    // 0x2ee030: 0x10000038  b           . + 4 + (0x38 << 2)
label_2ee034:
    if (ctx->pc == 0x2EE034u) {
        ctx->pc = 0x2EE034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE030u;
        // 0x2ee034: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE038u;
        goto label_2ee038;
    }
    ctx->pc = 0x2EE030u;
    {
        const bool branch_taken_0x2ee030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE030u;
        // 0x2ee034: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee030) {
            ctx->pc = 0x2EE114u;
            goto label_2ee114;
        }
    }
    ctx->pc = 0x2EE038u;
label_2ee038:
    // 0x2ee038: 0xc089622  jal         func_225888
label_2ee03c:
    if (ctx->pc == 0x2EE03Cu) {
        ctx->pc = 0x2EE03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE038u;
        // 0x2ee03c: 0x8e240150  lw          $a0, 0x150($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE040u;
        goto label_2ee040;
    }
    ctx->pc = 0x2EE038u;
    SET_GPR_U32(ctx, 31, 0x2EE040u);
    ctx->pc = 0x2EE03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE038u;
    // 0x2ee03c: 0x8e240150  lw          $a0, 0x150($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225888u, 0x2EE038u, 0x2EE040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE040u;
label_2ee040:
    // 0x2ee040: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
label_2ee044:
    if (ctx->pc == 0x2EE044u) {
        ctx->pc = 0x2EE044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE040u;
        // 0x2ee044: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE048u;
        goto label_2ee048;
    }
    ctx->pc = 0x2EE040u;
    {
        const bool branch_taken_0x2ee040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE040u;
        // 0x2ee044: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee040) {
            ctx->pc = 0x2EE10Cu;
            goto label_2ee10c;
        }
    }
    ctx->pc = 0x2EE048u;
label_2ee048:
    // 0x2ee048: 0x8e240174  lw          $a0, 0x174($s1)
    ctx->pc = 0x2ee048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
label_2ee04c:
    // 0x2ee04c: 0x5082000a  beql        $a0, $v0, . + 4 + (0xA << 2)
label_2ee050:
    if (ctx->pc == 0x2EE050u) {
        ctx->pc = 0x2EE050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE04Cu;
        // 0x2ee050: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE054u;
        goto label_2ee054;
    }
    ctx->pc = 0x2EE04Cu;
    {
        const bool branch_taken_0x2ee04c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ee04c) {
            ctx->pc = 0x2EE050u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE04Cu;
            // 0x2ee050: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE078u;
            goto label_2ee078;
        }
    }
    ctx->pc = 0x2EE054u;
label_2ee054:
    // 0x2ee054: 0xc0404b8  jal         func_1012E0
label_2ee058:
    if (ctx->pc == 0x2EE058u) {
        ctx->pc = 0x2EE05Cu;
        goto label_2ee05c;
    }
    ctx->pc = 0x2EE054u;
    SET_GPR_U32(ctx, 31, 0x2EE05Cu);
    ctx->pc = 0x1012E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012E0u, 0x2EE054u, 0x2EE05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE05Cu;
label_2ee05c:
    // 0x2ee05c: 0x8e240170  lw          $a0, 0x170($s1)
    ctx->pc = 0x2ee05cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 368)));
label_2ee060:
    // 0x2ee060: 0xc0404b8  jal         func_1012E0
label_2ee064:
    if (ctx->pc == 0x2EE064u) {
        ctx->pc = 0x2EE064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE060u;
        // 0x2ee064: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE068u;
        goto label_2ee068;
    }
    ctx->pc = 0x2EE060u;
    SET_GPR_U32(ctx, 31, 0x2EE068u);
    ctx->pc = 0x2EE064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE060u;
    // 0x2ee064: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012E0u, 0x2EE060u, 0x2EE068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE068u;
label_2ee068:
    // 0x2ee068: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ee068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ee06c:
    // 0x2ee06c: 0xc07c494  jal         func_1F1250
label_2ee070:
    if (ctx->pc == 0x2EE070u) {
        ctx->pc = 0x2EE070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE06Cu;
        // 0x2ee070: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE074u;
        goto label_2ee074;
    }
    ctx->pc = 0x2EE06Cu;
    SET_GPR_U32(ctx, 31, 0x2EE074u);
    ctx->pc = 0x2EE070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE06Cu;
    // 0x2ee070: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F1250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1250u, 0x2EE06Cu, 0x2EE074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE074u;
label_2ee074:
    // 0x2ee074: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2ee074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2ee078:
    // 0x2ee078: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x2ee078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_2ee07c:
    // 0x2ee07c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2ee07cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2ee080:
    // 0x2ee080: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2ee080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2ee084:
    // 0x2ee084: 0x60f809  jalr        $v1
label_2ee088:
    if (ctx->pc == 0x2EE088u) {
        ctx->pc = 0x2EE088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE084u;
        // 0x2ee088: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE08Cu;
        goto label_2ee08c;
    }
    ctx->pc = 0x2EE084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2EE08Cu);
        ctx->pc = 0x2EE088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE084u;
        // 0x2ee088: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EE084u, 0x2EE08Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EE08Cu;
label_2ee08c:
    // 0x2ee08c: 0x1000001f  b           . + 4 + (0x1F << 2)
label_2ee090:
    if (ctx->pc == 0x2EE090u) {
        ctx->pc = 0x2EE090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE08Cu;
        // 0x2ee090: 0xae32015c  sw          $s2, 0x15C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 348), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE094u;
        goto label_2ee094;
    }
    ctx->pc = 0x2EE08Cu;
    {
        const bool branch_taken_0x2ee08c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE08Cu;
        // 0x2ee090: 0xae32015c  sw          $s2, 0x15C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 348), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee08c) {
            ctx->pc = 0x2EE10Cu;
            goto label_2ee10c;
        }
    }
    ctx->pc = 0x2EE094u;
label_2ee094:
    // 0x2ee094: 0x0  nop
    ctx->pc = 0x2ee094u;
    // NOP
label_2ee098:
    // 0x2ee098: 0xc0a5b2a  jal         func_296CA8
label_2ee09c:
    if (ctx->pc == 0x2EE09Cu) {
        ctx->pc = 0x2EE09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE098u;
        // 0x2ee09c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE0A0u;
        goto label_2ee0a0;
    }
    ctx->pc = 0x2EE098u;
    SET_GPR_U32(ctx, 31, 0x2EE0A0u);
    ctx->pc = 0x2EE09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE098u;
    // 0x2ee09c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296CA8u, 0x2EE098u, 0x2EE0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE0A0u;
label_2ee0a0:
    // 0x2ee0a0: 0x8e22013c  lw          $v0, 0x13C($s1)
    ctx->pc = 0x2ee0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 316)));
label_2ee0a4:
    // 0x2ee0a4: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_2ee0a8:
    if (ctx->pc == 0x2EE0A8u) {
        ctx->pc = 0x2EE0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE0A4u;
        // 0x2ee0a8: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE0ACu;
        goto label_2ee0ac;
    }
    ctx->pc = 0x2EE0A4u;
    {
        const bool branch_taken_0x2ee0a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE0A4u;
        // 0x2ee0a8: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee0a4) {
            ctx->pc = 0x2EE10Cu;
            goto label_2ee10c;
        }
    }
    ctx->pc = 0x2EE0ACu;
label_2ee0ac:
    // 0x2ee0ac: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2ee0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2ee0b0:
    // 0x2ee0b0: 0xae23015c  sw          $v1, 0x15C($s1)
    ctx->pc = 0x2ee0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 348), GPR_U32(ctx, 3));
label_2ee0b4:
    // 0x2ee0b4: 0x24420038  addiu       $v0, $v0, 0x38
    ctx->pc = 0x2ee0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
label_2ee0b8:
    // 0x2ee0b8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2ee0b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2ee0bc:
    // 0x2ee0bc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2ee0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2ee0c0:
    // 0x2ee0c0: 0x60f809  jalr        $v1
label_2ee0c4:
    if (ctx->pc == 0x2EE0C4u) {
        ctx->pc = 0x2EE0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE0C0u;
        // 0x2ee0c4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE0C8u;
        goto label_2ee0c8;
    }
    ctx->pc = 0x2EE0C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2EE0C8u);
        ctx->pc = 0x2EE0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE0C0u;
        // 0x2ee0c4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EE0C0u, 0x2EE0C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EE0C8u;
label_2ee0c8:
    // 0x2ee0c8: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x2ee0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_2ee0cc:
    // 0x2ee0cc: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x2ee0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_2ee0d0:
    // 0x2ee0d0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ee0d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2ee0d4:
    // 0x2ee0d4: 0x1000000d  b           . + 4 + (0xD << 2)
label_2ee0d8:
    if (ctx->pc == 0x2EE0D8u) {
        ctx->pc = 0x2EE0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE0D4u;
        // 0x2ee0d8: 0xae220040  sw          $v0, 0x40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE0DCu;
        goto label_2ee0dc;
    }
    ctx->pc = 0x2EE0D4u;
    {
        const bool branch_taken_0x2ee0d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE0D4u;
        // 0x2ee0d8: 0xae220040  sw          $v0, 0x40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee0d4) {
            ctx->pc = 0x2EE10Cu;
            goto label_2ee10c;
        }
    }
    ctx->pc = 0x2EE0DCu;
label_2ee0dc:
    // 0x2ee0dc: 0x0  nop
    ctx->pc = 0x2ee0dcu;
    // NOP
label_2ee0e0:
    // 0x2ee0e0: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x2ee0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_2ee0e4:
    // 0x2ee0e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ee0e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ee0e8:
    // 0x2ee0e8: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2ee0e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_2ee0ec:
    // 0x2ee0ec: 0xc0a5b2a  jal         func_296CA8
label_2ee0f0:
    if (ctx->pc == 0x2EE0F0u) {
        ctx->pc = 0x2EE0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE0ECu;
        // 0x2ee0f0: 0xae220040  sw          $v0, 0x40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE0F4u;
        goto label_2ee0f4;
    }
    ctx->pc = 0x2EE0ECu;
    SET_GPR_U32(ctx, 31, 0x2EE0F4u);
    ctx->pc = 0x2EE0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE0ECu;
    // 0x2ee0f0: 0xae220040  sw          $v0, 0x40($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296CA8u, 0x2EE0ECu, 0x2EE0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE0F4u;
label_2ee0f4:
    // 0x2ee0f4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2ee0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2ee0f8:
    // 0x2ee0f8: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x2ee0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_2ee0fc:
    // 0x2ee0fc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2ee0fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2ee100:
    // 0x2ee100: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2ee100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2ee104:
    // 0x2ee104: 0x60f809  jalr        $v1
label_2ee108:
    if (ctx->pc == 0x2EE108u) {
        ctx->pc = 0x2EE108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE104u;
        // 0x2ee108: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE10Cu;
        goto label_2ee10c;
    }
    ctx->pc = 0x2EE104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2EE10Cu);
        ctx->pc = 0x2EE108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE104u;
        // 0x2ee108: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EE104u, 0x2EE10Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EE10Cu;
label_2ee10c:
    // 0x2ee10c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ee10cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ee110:
    // 0x2ee110: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ee110u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ee114:
    // 0x2ee114: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ee114u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2ee118:
    // 0x2ee118: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2ee118u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2ee11c:
    // 0x2ee11c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2ee11cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2ee120:
    // 0x2ee120: 0x3e00008  jr          $ra
label_2ee124:
    if (ctx->pc == 0x2EE124u) {
        ctx->pc = 0x2EE124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE120u;
        // 0x2ee124: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE128u;
        goto label_fallthrough_0x2ee120;
    }
    ctx->pc = 0x2EE120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EE124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE120u;
        // 0x2ee124: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EE120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2ee120:
    ctx->pc = 0x2EE128u;
}
