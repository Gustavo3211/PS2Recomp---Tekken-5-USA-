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

// Function: sub_004A0F88
// Address: 0x4a0f88 - 0x4a1148
void sub_004A0F88_0x4a0f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A0F88_0x4a0f88");
#endif

    switch (ctx->pc) {
        case 0x4a0ff8u: goto label_4a0ff8;
        case 0x4a10b4u: goto label_4a10b4;
        case 0x4a10c8u: goto label_4a10c8;
        case 0x4a10d0u: goto label_4a10d0;
        case 0x4a1124u: goto label_4a1124;
        case 0x4a112cu: goto label_4a112c;
        default: break;
    }

    ctx->pc = 0x4a0f88u;

    // 0x4a0f88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4a0f88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4a0f8c: 0x3c060073  lui         $a2, 0x73
    ctx->pc = 0x4a0f8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)115 << 16));
    // 0x4a0f90: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x4a0f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x4a0f94: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4a0f94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a0f98: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4a0f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x4a0f9c: 0x27b20004  addiu       $s2, $sp, 0x4
    ctx->pc = 0x4a0f9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x4a0fa0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4a0fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4a0fa4: 0x24c8d680  addiu       $t0, $a2, -0x2980
    ctx->pc = 0x4a0fa4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956672));
    // 0x4a0fa8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x4a0fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x4a0fac: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x4a0facu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x4a0fb0: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x4a0fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4a0fb4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4a0fb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a0fb8: 0x85022290  lh          $v0, 0x2290($t0)
    ctx->pc = 0x4a0fb8u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x72F910u));
    // 0x4a0fbc: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x4a0fbcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4a0fc0: 0x8d052284  lw          $a1, 0x2284($t0)
    ctx->pc = 0x4a0fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x72F904u));
    // 0x4a0fc4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a0fc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a0fc8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4a0fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4a0fcc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4a0fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4a0fd0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x4a0fd0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4a0fd4: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4a0fd4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a0fd8: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4a0fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4a0fdc: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x4a0fdcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a0fe0: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x4a0fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x4a0fe4: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4a0fe4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4a0fe8: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4A0FE8u;
    {
        const bool branch_taken_0x4a0fe8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4A0FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0FE8u;
        // 0x4a0fec: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0fe8) {
            ctx->pc = 0x4A1000u;
            goto label_4a1000;
        }
    }
    ctx->pc = 0x4A0FF0u;
    // 0x4a0ff0: 0xc1283da  jal         func_4A0F68
    ctx->pc = 0x4A0FF0u;
    SET_GPR_U32(ctx, 31, 0x4A0FF8u);
    ctx->pc = 0x4A0F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A0F68u, 0x4A0FF0u, 0x4A0FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A0FF8u;
label_4a0ff8:
    // 0x4a0ff8: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x4A0FF8u;
    {
        const bool branch_taken_0x4a0ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A0FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0FF8u;
        // 0x4a0ffc: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0ff8) {
            ctx->pc = 0x4A1130u;
            goto label_4a1130;
        }
    }
    ctx->pc = 0x4A1000u;
label_4a1000:
    // 0x4a1000: 0x85032292  lh          $v1, 0x2292($t0)
    ctx->pc = 0x4a1000u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 8850)));
    // 0x4a1004: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a1004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a1008: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x4a1008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x4a100c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a100cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a1010: 0x432024  and         $a0, $v0, $v1
    ctx->pc = 0x4a1010u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4a1014: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x4a1014u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x4a1018: 0x87a30000  lh          $v1, 0x0($sp)
    ctx->pc = 0x4a1018u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a101c: 0x4630012  bgezl       $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x4A101Cu;
    {
        const bool branch_taken_0x4a101c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x4a101c) {
            ctx->pc = 0x4A1020u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A101Cu;
            // 0x4a1020: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A1068u;
            goto label_4a1068;
        }
    }
    ctx->pc = 0x4A1024u;
    // 0x4a1024: 0x146a0004  bne         $v1, $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x4A1024u;
    {
        const bool branch_taken_0x4a1024 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 10));
        ctx->pc = 0x4A1028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1024u;
        // 0x4a1028: 0x24028fff  addiu       $v0, $zero, -0x7001 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294938623));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1024) {
            ctx->pc = 0x4A1038u;
            goto label_4a1038;
        }
    }
    ctx->pc = 0x4A102Cu;
    // 0x4a102c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x4A102Cu;
    {
        const bool branch_taken_0x4a102c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A1030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A102Cu;
        // 0x4a1030: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a102c) {
            ctx->pc = 0x4A1068u;
            goto label_4a1068;
        }
    }
    ctx->pc = 0x4A1034u;
    // 0x4a1034: 0x0  nop
    ctx->pc = 0x4a1034u;
    // NOP
label_4a1038:
    // 0x4a1038: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4A1038u;
    {
        const bool branch_taken_0x4a1038 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4A103Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1038u;
        // 0x4a103c: 0x30a3ffff  andi        $v1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1038) {
            ctx->pc = 0x4A1068u;
            goto label_4a1068;
        }
    }
    ctx->pc = 0x4A1040u;
    // 0x4a1040: 0x891024  and         $v0, $a0, $t1
    ctx->pc = 0x4a1040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 9));
    // 0x4a1044: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4a1044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4a1048: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x4a1048u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4a104c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4a104cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x4a1050: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a1050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a1054: 0x87a30000  lh          $v1, 0x0($sp)
    ctx->pc = 0x4a1054u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a1058: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4a1058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4a105c: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x4a105cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x4a1060: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4a1060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4a1064: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4a1064u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_4a1068:
    // 0x4a1068: 0x14e0000e  bnez        $a3, . + 4 + (0xE << 2)
    ctx->pc = 0x4A1068u;
    {
        const bool branch_taken_0x4a1068 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A106Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1068u;
        // 0x4a106c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1068) {
            ctx->pc = 0x4A10A4u;
            goto label_4a10a4;
        }
    }
    ctx->pc = 0x4A1070u;
    // 0x4a1070: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x4a1070u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a1074: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4a1074u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4a1078: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a1078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a107c: 0x24c6d680  addiu       $a2, $a2, -0x2980
    ctx->pc = 0x4a107cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956672));
    // 0x4a1080: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x4a1080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x4a1084: 0x24048000  addiu       $a0, $zero, -0x8000
    ctx->pc = 0x4a1084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x4a1088: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4a1088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4a108c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a108cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a1090: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a1090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a1094: 0xa4c42292  sh          $a0, 0x2292($a2)
    ctx->pc = 0x4a1094u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 8850), (uint16_t)GPR_U32(ctx, 4));
    // 0x4a1098: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x4a1098u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x4a109c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x4a109cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4a10a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4a10a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a10a4:
    // 0x4a10a4: 0x54e2000c  bnel        $a3, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4A10A4u;
    {
        const bool branch_taken_0x4a10a4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x4a10a4) {
            ctx->pc = 0x4A10A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A10A4u;
            // 0x4a10a8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A10D8u;
            goto label_4a10d8;
        }
    }
    ctx->pc = 0x4A10ACu;
    // 0x4a10ac: 0xc129354  jal         func_4A4D50
    ctx->pc = 0x4A10ACu;
    SET_GPR_U32(ctx, 31, 0x4A10B4u);
    ctx->pc = 0x4A4D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A4D50u, 0x4A10ACu, 0x4A10B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A10B4u;
label_4a10b4:
    // 0x4a10b4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4a10b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a10b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4a10b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a10bc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4a10bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x4a10c0: 0xc13e4ca  jal         func_4F9328
    ctx->pc = 0x4A10C0u;
    SET_GPR_U32(ctx, 31, 0x4A10C8u);
    ctx->pc = 0x4A10C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A10C0u;
    // 0x4a10c4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9328u, 0x4A10C0u, 0x4A10C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A10C8u;
label_4a10c8:
    // 0x4a10c8: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4A10C8u;
    SET_GPR_U32(ctx, 31, 0x4A10D0u);
    ctx->pc = 0x4A10CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A10C8u;
    // 0x4a10cc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4A10C8u, 0x4A10D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A10D0u;
label_4a10d0:
    // 0x4a10d0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x4a10d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4a10d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4a10d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4a10d8:
    // 0x4a10d8: 0x14e2000d  bne         $a3, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4A10D8u;
    {
        const bool branch_taken_0x4a10d8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x4A10DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A10D8u;
        // 0x4a10dc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a10d8) {
            ctx->pc = 0x4A1110u;
            goto label_4a1110;
        }
    }
    ctx->pc = 0x4A10E0u;
    // 0x4a10e0: 0x87a30000  lh          $v1, 0x0($sp)
    ctx->pc = 0x4a10e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a10e4: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4a10e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4a10e8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x4a10e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a10ec: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x4a10ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4a10f0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x4a10f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x4a10f4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x4a10f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x4a10f8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4a10f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4a10fc: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x4a10fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4a1100: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4a1100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4a1104: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4a1104u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4a1108: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x4a1108u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x4a110c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4a110cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4a1110:
    // 0x4a1110: 0x14e20007  bne         $a3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4A1110u;
    {
        const bool branch_taken_0x4a1110 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x4A1114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1110u;
        // 0x4a1114: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1110) {
            ctx->pc = 0x4A1130u;
            goto label_4a1130;
        }
    }
    ctx->pc = 0x4A1118u;
    // 0x4a1118: 0x87a40000  lh          $a0, 0x0($sp)
    ctx->pc = 0x4a1118u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a111c: 0xc1284ba  jal         func_4A12E8
    ctx->pc = 0x4A111Cu;
    SET_GPR_U32(ctx, 31, 0x4A1124u);
    ctx->pc = 0x4A1120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A111Cu;
    // 0x4a1120: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A12E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A12E8u, 0x4A111Cu, 0x4A1124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A1124u;
label_4a1124:
    // 0x4a1124: 0xc1284f0  jal         func_4A13C0
    ctx->pc = 0x4A1124u;
    SET_GPR_U32(ctx, 31, 0x4A112Cu);
    ctx->pc = 0x4A1128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A1124u;
    // 0x4a1128: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A13C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A13C0u, 0x4A1124u, 0x4A112Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A112Cu;
label_4a112c:
    // 0x4a112c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4a112cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4a1130:
    // 0x4a1130: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x4a1130u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4a1134: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4a1134u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a1138: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x4a1138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4a113c: 0x3e00008  jr          $ra
    ctx->pc = 0x4A113Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A1140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A113Cu;
        // 0x4a1140: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A113Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A1144u;
    // 0x4a1144: 0x0  nop
    ctx->pc = 0x4a1144u;
    // NOP
    ctx->pc = 0x4a1148u;
}
