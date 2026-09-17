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

// Function: sub_00214FF8
// Address: 0x214ff8 - 0x2150b8
void sub_00214FF8_0x214ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214FF8_0x214ff8");
#endif

    switch (ctx->pc) {
        case 0x215030u: goto label_215030;
        case 0x215040u: goto label_215040;
        case 0x215064u: goto label_215064;
        case 0x21506cu: goto label_21506c;
        case 0x21507cu: goto label_21507c;
        case 0x215094u: goto label_215094;
        case 0x21509cu: goto label_21509c;
        default: break;
    }

    ctx->pc = 0x214ff8u;

    // 0x214ff8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x214ff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x214ffc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x214ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x215000: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x215000u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215004: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x215004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x215008: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x215008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21500c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x21500cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x215010: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x215010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x215014: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x215014u;
    {
        const bool branch_taken_0x215014 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x215018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215014u;
        // 0x215018: 0x26320060  addiu       $s2, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215014) {
            ctx->pc = 0x215064u;
            goto label_215064;
        }
    }
    ctx->pc = 0x21501Cu;
    // 0x21501c: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x21501cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x215020: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x215020u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215024: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x215024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x215028: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x215028u;
    SET_GPR_U32(ctx, 31, 0x215030u);
    ctx->pc = 0x21502Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215028u;
    // 0x21502c: 0xae220040  sw          $v0, 0x40($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x215028u, 0x215030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215030u;
label_215030:
    // 0x215030: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x215030u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215034: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x215034u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215038: 0xc085430  jal         func_2150C0
    ctx->pc = 0x215038u;
    SET_GPR_U32(ctx, 31, 0x215040u);
    ctx->pc = 0x21503Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215038u;
    // 0x21503c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2150C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2150C0u, 0x215038u, 0x215040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215040u;
label_215040:
    // 0x215040: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x215040u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    // 0x215044: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x215044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x215048: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x215048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21504c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x21504cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x215050: 0x244258e0  addiu       $v0, $v0, 0x58E0
    ctx->pc = 0x215050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22752));
    // 0x215054: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x215054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x215058: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x215058u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x21505c: 0xc0b7fb0  jal         func_2DFEC0
    ctx->pc = 0x21505Cu;
    SET_GPR_U32(ctx, 31, 0x215064u);
    ctx->pc = 0x215060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21505Cu;
    // 0x215060: 0xae220038  sw          $v0, 0x38($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFEC0u, 0x21505Cu, 0x215064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215064u;
label_215064:
    // 0x215064: 0xc084f5a  jal         func_213D68
    ctx->pc = 0x215064u;
    SET_GPR_U32(ctx, 31, 0x21506Cu);
    ctx->pc = 0x213D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213D68u, 0x215064u, 0x21506Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21506Cu;
label_21506c:
    // 0x21506c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x21506Cu;
    {
        const bool branch_taken_0x21506c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21506c) {
            ctx->pc = 0x215070u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21506Cu;
            // 0x215070: 0x8f82a530  lw          $v0, -0x5AD0($gp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944048)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x215080u;
            goto label_215080;
        }
    }
    ctx->pc = 0x215074u;
    // 0x215074: 0xc0b7a78  jal         func_2DE9E0
    ctx->pc = 0x215074u;
    SET_GPR_U32(ctx, 31, 0x21507Cu);
    ctx->pc = 0x215078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215074u;
    // 0x215078: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE9E0u, 0x215074u, 0x21507Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21507Cu;
label_21507c:
    // 0x21507c: 0x8f82a530  lw          $v0, -0x5AD0($gp)
    ctx->pc = 0x21507cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944048)));
label_215080:
    // 0x215080: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x215080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x215084: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x215084u;
    {
        const bool branch_taken_0x215084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x215088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215084u;
        // 0x215088: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215084) {
            ctx->pc = 0x2150A0u;
            goto label_2150a0;
        }
    }
    ctx->pc = 0x21508Cu;
    // 0x21508c: 0xc08b2a4  jal         func_22CA90
    ctx->pc = 0x21508Cu;
    SET_GPR_U32(ctx, 31, 0x215094u);
    ctx->pc = 0x22CA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CA90u, 0x21508Cu, 0x215094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215094u;
label_215094:
    // 0x215094: 0xc08f53e  jal         func_23D4F8
    ctx->pc = 0x215094u;
    SET_GPR_U32(ctx, 31, 0x21509Cu);
    ctx->pc = 0x23D4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D4F8u, 0x215094u, 0x21509Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21509Cu;
label_21509c:
    // 0x21509c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21509cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2150a0:
    // 0x2150a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2150a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2150a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2150a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2150a8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2150a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2150ac: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2150acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2150b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2150B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2150B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2150B0u;
        // 0x2150b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2150B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2150B8u;
}
