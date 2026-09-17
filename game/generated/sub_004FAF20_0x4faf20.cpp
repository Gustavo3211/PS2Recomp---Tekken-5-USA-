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

// Function: sub_004FAF20
// Address: 0x4faf20 - 0x4fb0d8
void sub_004FAF20_0x4faf20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004FAF20_0x4faf20");
#endif

    switch (ctx->pc) {
        case 0x4faf88u: goto label_4faf88;
        case 0x4fafa4u: goto label_4fafa4;
        case 0x4fafb4u: goto label_4fafb4;
        case 0x4fafc8u: goto label_4fafc8;
        case 0x4fafe4u: goto label_4fafe4;
        case 0x4fb014u: goto label_4fb014;
        case 0x4fb028u: goto label_4fb028;
        case 0x4fb060u: goto label_4fb060;
        case 0x4fb098u: goto label_4fb098;
        case 0x4fb0a0u: goto label_4fb0a0;
        case 0x4fb0a8u: goto label_4fb0a8;
        default: break;
    }

    ctx->pc = 0x4faf20u;

    // 0x4faf20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4faf20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4faf24: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4faf24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x4faf28: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4faf28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4faf2c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4faf2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4faf30: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x4faf30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x4faf34: 0x2442bc70  addiu       $v0, $v0, -0x4390
    ctx->pc = 0x4faf34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950000));
    // 0x4faf38: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4faf38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x4faf3c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x4faf3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x4faf40: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x4faf40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x4faf44: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4faf44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4faf48: 0x8466d688  lh          $a2, -0x2978($v1)
    ctx->pc = 0x4faf48u;
    SET_GPR_S32(ctx, 6, (int16_t)FAST_READ16(0x72D688u));
    // 0x4faf4c: 0xdc440008  ld          $a0, 0x8($v0)
    ctx->pc = 0x4faf4cu;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x72BC78u));
    // 0x4faf50: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x4faf50u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x72BC70u));
    // 0x4faf54: 0xffa40008  sd          $a0, 0x8($sp)
    ctx->pc = 0x4faf54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 4));
    // 0x4faf58: 0x14c50005  bne         $a2, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4FAF58u;
    {
        const bool branch_taken_0x4faf58 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        ctx->pc = 0x4FAF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FAF58u;
        // 0x4faf5c: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4faf58) {
            ctx->pc = 0x4FAF70u;
            goto label_4faf70;
        }
    }
    ctx->pc = 0x4FAF60u;
    // 0x4faf60: 0x3c110057  lui         $s1, 0x57
    ctx->pc = 0x4faf60u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)87 << 16));
    // 0x4faf64: 0x2402ff80  addiu       $v0, $zero, -0x80
    ctx->pc = 0x4faf64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x4faf68: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4FAF68u;
    {
        const bool branch_taken_0x4faf68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FAF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FAF68u;
        // 0x4faf6c: 0xa222ceb0  sb          $v0, -0x3150($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 4294954672), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4faf68) {
            ctx->pc = 0x4FAF80u;
            goto label_4faf80;
        }
    }
    ctx->pc = 0x4FAF70u;
label_4faf70:
    // 0x4faf70: 0x3c110057  lui         $s1, 0x57
    ctx->pc = 0x4faf70u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)87 << 16));
    // 0x4faf74: 0x9222ceb0  lbu         $v0, -0x3150($s1)
    ctx->pc = 0x4faf74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x56CEB0u));
    // 0x4faf78: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x4FAF78u;
    {
        const bool branch_taken_0x4faf78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FAF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FAF78u;
        // 0x4faf7c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4faf78) {
            ctx->pc = 0x4FB0BCu;
            goto label_4fb0bc;
        }
    }
    ctx->pc = 0x4FAF80u;
label_4faf80:
    // 0x4faf80: 0xc13ea1e  jal         func_4FA878
    ctx->pc = 0x4FAF80u;
    SET_GPR_U32(ctx, 31, 0x4FAF88u);
    ctx->pc = 0x4FAF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FAF80u;
    // 0x4faf84: 0x3c100057  lui         $s0, 0x57 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FA878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FA878u, 0x4FAF80u, 0x4FAF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FAF88u;
label_4faf88:
    // 0x4faf88: 0x2610ceb4  addiu       $s0, $s0, -0x314C
    ctx->pc = 0x4faf88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294954676));
    // 0x4faf8c: 0x7ba50000  lq          $a1, 0x0($sp)
    ctx->pc = 0x4faf8cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4faf90: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4faf90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4faf94: 0x2633ceb0  addiu       $s3, $s1, -0x3150
    ctx->pc = 0x4faf94u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 4294954672));
    // 0x4faf98: 0x3c110057  lui         $s1, 0x57
    ctx->pc = 0x4faf98u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)87 << 16));
    // 0x4faf9c: 0xc042d60  jal         func_10B580
    ctx->pc = 0x4FAF9Cu;
    SET_GPR_U32(ctx, 31, 0x4FAFA4u);
    ctx->pc = 0x4FAFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FAF9Cu;
    // 0x4fafa0: 0x24120800  addiu       $s2, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B580u, 0x4FAF9Cu, 0x4FAFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FAFA4u;
label_4fafa4:
    // 0x4fafa4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4fafa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4fafa8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4fafa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fafac: 0xc042d9a  jal         func_10B668
    ctx->pc = 0x4FAFACu;
    SET_GPR_U32(ctx, 31, 0x4FAFB4u);
    ctx->pc = 0x4FAFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FAFACu;
    // 0x4fafb0: 0x24060046  addiu       $a2, $zero, 0x46 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0x4FAFACu, 0x4FAFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FAFB4u;
label_4fafb4:
    // 0x4fafb4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4fafb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4fafb8: 0x3c060003  lui         $a2, 0x3
    ctx->pc = 0x4fafb8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    // 0x4fafbc: 0x34c60806  ori         $a2, $a2, 0x806
    ctx->pc = 0x4fafbcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2054);
    // 0x4fafc0: 0xc042d9a  jal         func_10B668
    ctx->pc = 0x4FAFC0u;
    SET_GPR_U32(ctx, 31, 0x4FAFC8u);
    ctx->pc = 0x4FAFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FAFC0u;
    // 0x4fafc4: 0x24050047  addiu       $a1, $zero, 0x47 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0x4FAFC0u, 0x4FAFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FAFC8u;
label_4fafc8:
    // 0x4fafc8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4fafc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4fafcc: 0x2631ce90  addiu       $s1, $s1, -0x3170
    ctx->pc = 0x4fafccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294954640));
    // 0x4fafd0: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x4fafd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x4fafd4: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x4fafd4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x4fafd8: 0x34c60044  ori         $a2, $a2, 0x44
    ctx->pc = 0x4fafd8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)68);
    // 0x4fafdc: 0xc042d9a  jal         func_10B668
    ctx->pc = 0x4FAFDCu;
    SET_GPR_U32(ctx, 31, 0x4FAFE4u);
    ctx->pc = 0x4FAFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FAFDCu;
    // 0x4fafe0: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0x4FAFDCu, 0x4FAFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FAFE4u;
label_4fafe4:
    // 0x4fafe4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4fafe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4fafe8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4fafe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4fafec: 0x3406e200  ori         $a2, $zero, 0xE200
    ctx->pc = 0x4fafecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57856);
    // 0x4faff0: 0x637f8  dsll        $a2, $a2, 31
    ctx->pc = 0x4faff0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 31);
    // 0x4faff4: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x4faff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x4faff8: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x4faff8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x4faffc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4faffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4fb000: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x4fb000u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x4fb004: 0x2421023  subu        $v0, $s2, $v0
    ctx->pc = 0x4fb004u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x4fb008: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4fb008u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x4fb00c: 0xc042d9a  jal         func_10B668
    ctx->pc = 0x4FB00Cu;
    SET_GPR_U32(ctx, 31, 0x4FB014u);
    ctx->pc = 0x4FB010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FB00Cu;
    // 0x4fb010: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0x4FB00Cu, 0x4FB014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FB014u;
label_4fb014:
    // 0x4fb014: 0x92660000  lbu         $a2, 0x0($s3)
    ctx->pc = 0x4fb014u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4fb018: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4fb018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4fb01c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4fb01cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4fb020: 0xc042d9a  jal         func_10B668
    ctx->pc = 0x4FB020u;
    SET_GPR_U32(ctx, 31, 0x4FB028u);
    ctx->pc = 0x4FB024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FB020u;
    // 0x4fb024: 0x63638  dsll        $a2, $a2, 24 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 24);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0x4FB020u, 0x4FB028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FB028u;
label_4fb028:
    // 0x4fb028: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4fb028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4fb02c: 0x3c067100  lui         $a2, 0x7100
    ctx->pc = 0x4fb02cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28928 << 16));
    // 0x4fb030: 0x3407fff8  ori         $a3, $zero, 0xFFF8
    ctx->pc = 0x4fb030u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x4fb034: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x4fb034u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x4fb038: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x4fb038u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x4fb03c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4fb03cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4fb040: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4fb040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4fb044: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x4fb044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x4fb048: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x4fb048u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x4fb04c: 0x2429023  subu        $s2, $s2, $v0
    ctx->pc = 0x4fb04cu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x4fb050: 0x129100  sll         $s2, $s2, 4
    ctx->pc = 0x4fb050u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x4fb054: 0x2463025  or          $a2, $s2, $a2
    ctx->pc = 0x4fb054u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) | GPR_U64(ctx, 6));
    // 0x4fb058: 0xc042d9a  jal         func_10B668
    ctx->pc = 0x4FB058u;
    SET_GPR_U32(ctx, 31, 0x4FB060u);
    ctx->pc = 0x4FB05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FB058u;
    // 0x4fb05c: 0xc73025  or          $a2, $a2, $a3 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0x4FB058u, 0x4FB060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FB060u;
label_4fb060:
    // 0x4fb060: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4fb060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4fb064: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4fb064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4fb068: 0x3406fff8  ori         $a2, $zero, 0xFFF8
    ctx->pc = 0x4fb068u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x4fb06c: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x4fb06cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x4fb070: 0x34c68f00  ori         $a2, $a2, 0x8F00
    ctx->pc = 0x4fb070u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)36608);
    // 0x4fb074: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x4fb074u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x4fb078: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x4fb078u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x4fb07c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x4fb07cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x4fb080: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4fb080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4fb084: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x4fb084u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x4fb088: 0x24420800  addiu       $v0, $v0, 0x800
    ctx->pc = 0x4fb088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
    // 0x4fb08c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4fb08cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x4fb090: 0xc042d9a  jal         func_10B668
    ctx->pc = 0x4FB090u;
    SET_GPR_U32(ctx, 31, 0x4FB098u);
    ctx->pc = 0x4FB094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FB090u;
    // 0x4fb094: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0x4FB090u, 0x4FB098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FB098u;
label_4fb098:
    // 0x4fb098: 0xc042d66  jal         func_10B598
    ctx->pc = 0x4FB098u;
    SET_GPR_U32(ctx, 31, 0x4FB0A0u);
    ctx->pc = 0x4FB09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FB098u;
    // 0x4fb09c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B598u, 0x4FB098u, 0x4FB0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FB0A0u;
label_4fb0a0:
    // 0x4fb0a0: 0xc13ea58  jal         func_4FA960
    ctx->pc = 0x4FB0A0u;
    SET_GPR_U32(ctx, 31, 0x4FB0A8u);
    ctx->pc = 0x4FA960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FA960u, 0x4FB0A0u, 0x4FB0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FB0A8u;
label_4fb0a8:
    // 0x4fb0a8: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x4fb0a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4fb0ac: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x4FB0ACu;
    {
        const bool branch_taken_0x4fb0ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FB0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FB0ACu;
        // 0x4fb0b0: 0x244300fe  addiu       $v1, $v0, 0xFE (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 254));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fb0ac) {
            ctx->pc = 0x4FB0B8u;
            goto label_4fb0b8;
        }
    }
    ctx->pc = 0x4FB0B4u;
    // 0x4fb0b4: 0xa2630000  sb          $v1, 0x0($s3)
    ctx->pc = 0x4fb0b4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
label_4fb0b8:
    // 0x4fb0b8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4fb0b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4fb0bc:
    // 0x4fb0bc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x4fb0bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4fb0c0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4fb0c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4fb0c4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x4fb0c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4fb0c8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4fb0c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4fb0cc: 0x3e00008  jr          $ra
    ctx->pc = 0x4FB0CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FB0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FB0CCu;
        // 0x4fb0d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4FB0CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4FB0D4u;
    // 0x4fb0d4: 0x0  nop
    ctx->pc = 0x4fb0d4u;
    // NOP
    ctx->pc = 0x4fb0d8u;
}
