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

// Function: sub_0021AF88
// Address: 0x21af88 - 0x21b0b8
void sub_0021AF88_0x21af88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021AF88_0x21af88");
#endif

    switch (ctx->pc) {
        case 0x21afe8u: goto label_21afe8;
        case 0x21b014u: goto label_21b014;
        case 0x21b01cu: goto label_21b01c;
        case 0x21b084u: goto label_21b084;
        default: break;
    }

    ctx->pc = 0x21af88u;

    // 0x21af88: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x21af88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x21af8c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x21af8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x21af90: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x21af90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21af94: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x21af94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x21af98: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x21af98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21af9c: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x21af9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x21afa0: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x21afa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x21afa4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x21afa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x21afa8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x21afa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21afac: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x21afacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x21afb0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x21afb0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21afb4: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x21afb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x21afb8: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x21afb8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21afbc: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x21afbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x21afc0: 0x24950018  addiu       $s5, $a0, 0x18
    ctx->pc = 0x21afc0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x21afc4: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x21afc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x21afc8: 0x2a560002  slti        $s6, $s2, 0x2
    ctx->pc = 0x21afc8u;
    SET_GPR_U64(ctx, 22, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x21afcc: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x21afccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x21afd0: 0x2497001c  addiu       $s7, $a0, 0x1C
    ctx->pc = 0x21afd0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
    // 0x21afd4: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x21afd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x21afd8: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x21afd8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21afdc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21afdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21afe0: 0x2141014  dsllv       $v0, $s4, $s0
    ctx->pc = 0x21afe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (GPR_U32(ctx, 16) & 0x3F));
    // 0x21afe4: 0x0  nop
    ctx->pc = 0x21afe4u;
    // NOP
label_21afe8:
    // 0x21afe8: 0x3c21024  and         $v0, $fp, $v0
    ctx->pc = 0x21afe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & GPR_U64(ctx, 2));
    // 0x21afec: 0x5040001f  beql        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x21AFECu;
    {
        const bool branch_taken_0x21afec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21afec) {
            ctx->pc = 0x21AFF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21AFECu;
            // 0x21aff0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21B06Cu;
            goto label_21b06c;
        }
    }
    ctx->pc = 0x21AFF4u;
    // 0x21aff4: 0x1254000c  beq         $s2, $s4, . + 4 + (0xC << 2)
    ctx->pc = 0x21AFF4u;
    {
        const bool branch_taken_0x21aff4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 20));
        ctx->pc = 0x21AFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AFF4u;
        // 0x21aff8: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21aff4) {
            ctx->pc = 0x21B028u;
            goto label_21b028;
        }
    }
    ctx->pc = 0x21AFFCu;
    // 0x21affc: 0x16c00003  bnez        $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x21AFFCu;
    {
        const bool branch_taken_0x21affc = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x21B000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AFFCu;
        // 0x21b000: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21affc) {
            ctx->pc = 0x21B00Cu;
            goto label_21b00c;
        }
    }
    ctx->pc = 0x21B004u;
    // 0x21b004: 0x1242000e  beq         $s2, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x21B004u;
    {
        const bool branch_taken_0x21b004 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x21B008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B004u;
        // 0x21b008: 0x3a02001f  xori        $v0, $s0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b004) {
            ctx->pc = 0x21B040u;
            goto label_21b040;
        }
    }
    ctx->pc = 0x21B00Cu;
label_21b00c:
    // 0x21b00c: 0xc086418  jal         func_219060
    ctx->pc = 0x21B00Cu;
    SET_GPR_U32(ctx, 31, 0x21B014u);
    ctx->pc = 0x21B010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B00Cu;
    // 0x21b010: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219060u, 0x21B00Cu, 0x21B014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B014u;
label_21b014:
    // 0x21b014: 0xc087692  jal         func_21DA48
    ctx->pc = 0x21B014u;
    SET_GPR_U32(ctx, 31, 0x21B01Cu);
    ctx->pc = 0x21B018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B014u;
    // 0x21b018: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21DA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21DA48u, 0x21B014u, 0x21B01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B01Cu;
label_21b01c:
    // 0x21b01c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x21B01Cu;
    {
        const bool branch_taken_0x21b01c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B01Cu;
        // 0x21b020: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b01c) {
            ctx->pc = 0x21B058u;
            goto label_21b058;
        }
    }
    ctx->pc = 0x21B024u;
    // 0x21b024: 0x0  nop
    ctx->pc = 0x21b024u;
    // NOP
label_21b028:
    // 0x21b028: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x21b028u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21b02c: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x21b02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x21b030: 0x8c430100  lw          $v1, 0x100($v0)
    ctx->pc = 0x21b030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x21b034: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x21B034u;
    {
        const bool branch_taken_0x21b034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B034u;
        // 0x21b038: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b034) {
            ctx->pc = 0x21B05Cu;
            goto label_21b05c;
        }
    }
    ctx->pc = 0x21B03Cu;
    // 0x21b03c: 0x0  nop
    ctx->pc = 0x21b03cu;
    // NOP
label_21b040:
    // 0x21b040: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x21b040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x21b044: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x21b044u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x21b048: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x21b048u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21b04c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x21b04cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x21b050: 0x771821  addu        $v1, $v1, $s7
    ctx->pc = 0x21b050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x21b054: 0x8c6200e0  lw          $v0, 0xE0($v1)
    ctx->pc = 0x21b054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 224)));
label_21b058:
    // 0x21b058: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x21b058u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_21b05c:
    // 0x21b05c: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x21b05cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x21b060: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x21b060u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x21b064: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x21b064u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x21b068: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21b068u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_21b06c:
    // 0x21b06c: 0x2a020020  slti        $v0, $s0, 0x20
    ctx->pc = 0x21b06cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x21b070: 0x5440ffdd  bnel        $v0, $zero, . + 4 + (-0x23 << 2)
    ctx->pc = 0x21B070u;
    {
        const bool branch_taken_0x21b070 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21b070) {
            ctx->pc = 0x21B074u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21B070u;
            // 0x21b074: 0x2141014  dsllv       $v0, $s4, $s0 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (GPR_U32(ctx, 16) & 0x3F));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21AFE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21afe8;
        }
    }
    ctx->pc = 0x21B078u;
    // 0x21b078: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x21b078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21b07c: 0xc0935d8  jal         func_24D760
    ctx->pc = 0x21B07Cu;
    SET_GPR_U32(ctx, 31, 0x21B084u);
    ctx->pc = 0x21B080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B07Cu;
    // 0x21b080: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D760u, 0x21B07Cu, 0x21B084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B084u;
label_21b084:
    // 0x21b084: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x21b084u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b088: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x21b088u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21b08c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x21b08cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21b090: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x21b090u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21b094: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x21b094u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21b098: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x21b098u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21b09c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x21b09cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x21b0a0: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x21b0a0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21b0a4: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x21b0a4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x21b0a8: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x21b0a8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21b0ac: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x21b0acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x21b0b0: 0x3e00008  jr          $ra
    ctx->pc = 0x21B0B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21B0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B0B0u;
        // 0x21b0b4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21B0B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21B0B8u;
}
