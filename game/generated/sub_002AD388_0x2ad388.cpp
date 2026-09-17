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

// Function: sub_002AD388
// Address: 0x2ad388 - 0x2ae160
void sub_002AD388_0x2ad388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AD388_0x2ad388");
#endif

    switch (ctx->pc) {
        case 0x2ad400u: goto label_2ad400;
        case 0x2ad448u: goto label_2ad448;
        case 0x2ad490u: goto label_2ad490;
        case 0x2ad4a0u: goto label_2ad4a0;
        case 0x2ad4acu: goto label_2ad4ac;
        case 0x2ad4bcu: goto label_2ad4bc;
        case 0x2ad4c8u: goto label_2ad4c8;
        case 0x2ad4d8u: goto label_2ad4d8;
        case 0x2ad4e4u: goto label_2ad4e4;
        case 0x2ad4f4u: goto label_2ad4f4;
        case 0x2ad558u: goto label_2ad558;
        case 0x2ad568u: goto label_2ad568;
        case 0x2adab8u: goto label_2adab8;
        case 0x2adac8u: goto label_2adac8;
        case 0x2adad4u: goto label_2adad4;
        case 0x2adae4u: goto label_2adae4;
        case 0x2adaf0u: goto label_2adaf0;
        case 0x2adb00u: goto label_2adb00;
        case 0x2adb0cu: goto label_2adb0c;
        case 0x2adb1cu: goto label_2adb1c;
        case 0x2adb28u: goto label_2adb28;
        case 0x2adb38u: goto label_2adb38;
        case 0x2adb44u: goto label_2adb44;
        case 0x2adb54u: goto label_2adb54;
        case 0x2adbb0u: goto label_2adbb0;
        case 0x2adbe0u: goto label_2adbe0;
        case 0x2adc2cu: goto label_2adc2c;
        case 0x2adc60u: goto label_2adc60;
        case 0x2adcacu: goto label_2adcac;
        case 0x2adcecu: goto label_2adcec;
        case 0x2add48u: goto label_2add48;
        case 0x2add84u: goto label_2add84;
        case 0x2ade58u: goto label_2ade58;
        case 0x2aded4u: goto label_2aded4;
        case 0x2adee4u: goto label_2adee4;
        case 0x2adef0u: goto label_2adef0;
        case 0x2adf00u: goto label_2adf00;
        case 0x2adf0cu: goto label_2adf0c;
        case 0x2adf1cu: goto label_2adf1c;
        case 0x2adf28u: goto label_2adf28;
        case 0x2adf38u: goto label_2adf38;
        case 0x2adf44u: goto label_2adf44;
        case 0x2adf54u: goto label_2adf54;
        case 0x2adf60u: goto label_2adf60;
        case 0x2adf70u: goto label_2adf70;
        default: break;
    }

    ctx->pc = 0x2ad388u;

    // 0x2ad388: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2ad388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2ad38c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ad38cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ad390: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2ad390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2ad394: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2ad394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2ad398: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2ad398u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad39c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2ad39cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2ad3a0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2ad3a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2ad3a4: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2ad3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x2ad3a8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x2ad3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x2ad3ac: 0xe7b70058  swc1        $f23, 0x58($sp)
    ctx->pc = 0x2ad3acu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2ad3b0: 0xe7b60050  swc1        $f22, 0x50($sp)
    ctx->pc = 0x2ad3b0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2ad3b4: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x2ad3b4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2ad3b8: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x2ad3b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2ad3bc: 0x92440080  lbu         $a0, 0x80($s2)
    ctx->pc = 0x2ad3bcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x2ad3c0: 0x148301af  bne         $a0, $v1, . + 4 + (0x1AF << 2)
    ctx->pc = 0x2AD3C0u;
    {
        const bool branch_taken_0x2ad3c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2AD3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD3C0u;
        // 0x2ad3c4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad3c0) {
            ctx->pc = 0x2ADA80u;
            goto label_2ada80;
        }
    }
    ctx->pc = 0x2AD3C8u;
    // 0x2ad3c8: 0x8e230080  lw          $v1, 0x80($s1)
    ctx->pc = 0x2ad3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x2ad3cc: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x2ad3ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ad3d0: 0x54440023  bnel        $v0, $a0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2AD3D0u;
    {
        const bool branch_taken_0x2ad3d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2ad3d0) {
            ctx->pc = 0x2AD3D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AD3D0u;
            // 0x2ad3d4: 0x307300ff  andi        $s3, $v1, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AD460u;
            goto label_2ad460;
        }
    }
    ctx->pc = 0x2AD3D8u;
    // 0x2ad3d8: 0x8e4300b4  lw          $v1, 0xB4($s2)
    ctx->pc = 0x2ad3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x2ad3dc: 0x8e2200b4  lw          $v0, 0xB4($s1)
    ctx->pc = 0x2ad3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
    // 0x2ad3e0: 0x14620353  bne         $v1, $v0, . + 4 + (0x353 << 2)
    ctx->pc = 0x2AD3E0u;
    {
        const bool branch_taken_0x2ad3e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AD3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD3E0u;
        // 0x2ad3e4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad3e0) {
            ctx->pc = 0x2AE130u;
            goto label_2ae130;
        }
    }
    ctx->pc = 0x2AD3E8u;
    // 0x2ad3e8: 0x8e220078  lw          $v0, 0x78($s1)
    ctx->pc = 0x2ad3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x2ad3ec: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2ad3ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad3f0: 0x1860034e  blez        $v1, . + 4 + (0x34E << 2)
    ctx->pc = 0x2AD3F0u;
    {
        const bool branch_taken_0x2ad3f0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2AD3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD3F0u;
        // 0x2ad3f4: 0xae420078  sw          $v0, 0x78($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad3f0) {
            ctx->pc = 0x2AE12Cu;
            goto label_2ae12c;
        }
    }
    ctx->pc = 0x2AD3F8u;
    // 0x2ad3f8: 0x26540008  addiu       $s4, $s2, 0x8
    ctx->pc = 0x2ad3f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x2ad3fc: 0x26330008  addiu       $s3, $s1, 0x8
    ctx->pc = 0x2ad3fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_2ad400:
    // 0x2ad400: 0x6000003  bltz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AD400u;
    {
        const bool branch_taken_0x2ad400 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2AD404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD400u;
        // 0x2ad404: 0x203102a  slt         $v0, $s0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad400) {
            ctx->pc = 0x2AD410u;
            goto label_2ad410;
        }
    }
    ctx->pc = 0x2AD408u;
    // 0x2ad408: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AD408u;
    {
        const bool branch_taken_0x2ad408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AD40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD408u;
        // 0x2ad40c: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad408) {
            ctx->pc = 0x2AD418u;
            goto label_2ad418;
        }
    }
    ctx->pc = 0x2AD410u;
label_2ad410:
    // 0x2ad410: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2AD410u;
    {
        const bool branch_taken_0x2ad410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD410u;
        // 0x2ad414: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad410) {
            ctx->pc = 0x2AD420u;
            goto label_2ad420;
        }
    }
    ctx->pc = 0x2AD418u;
label_2ad418:
    // 0x2ad418: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2ad418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2ad41c: 0x8c4400b0  lw          $a0, 0xB0($v0)
    ctx->pc = 0x2ad41cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
label_2ad420:
    // 0x2ad420: 0x6000007  bltz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2AD420u;
    {
        const bool branch_taken_0x2ad420 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2AD424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD420u;
        // 0x2ad424: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad420) {
            ctx->pc = 0x2AD440u;
            goto label_2ad440;
        }
    }
    ctx->pc = 0x2AD428u;
    // 0x2ad428: 0x8e2200b4  lw          $v0, 0xB4($s1)
    ctx->pc = 0x2ad428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
    // 0x2ad42c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2ad42cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2ad430: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AD430u;
    {
        const bool branch_taken_0x2ad430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD430u;
        // 0x2ad434: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad430) {
            ctx->pc = 0x2AD440u;
            goto label_2ad440;
        }
    }
    ctx->pc = 0x2AD438u;
    // 0x2ad438: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2ad438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2ad43c: 0x8c4500b0  lw          $a1, 0xB0($v0)
    ctx->pc = 0x2ad43cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
label_2ad440:
    // 0x2ad440: 0xc0abeac  jal         func_2AFAB0
    ctx->pc = 0x2AD440u;
    SET_GPR_U32(ctx, 31, 0x2AD448u);
    ctx->pc = 0x2AD444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD440u;
    // 0x2ad444: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AFAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AFAB0u, 0x2AD440u, 0x2AD448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD448u;
label_2ad448:
    // 0x2ad448: 0x8e4300b4  lw          $v1, 0xB4($s2)
    ctx->pc = 0x2ad448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x2ad44c: 0x203102a  slt         $v0, $s0, $v1
    ctx->pc = 0x2ad44cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2ad450: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2AD450u;
    {
        const bool branch_taken_0x2ad450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ad450) {
            ctx->pc = 0x2AD400u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ad400;
        }
    }
    ctx->pc = 0x2AD458u;
    // 0x2ad458: 0x10000335  b           . + 4 + (0x335 << 2)
    ctx->pc = 0x2AD458u;
    {
        const bool branch_taken_0x2ad458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD458u;
        // 0x2ad45c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad458) {
            ctx->pc = 0x2AE130u;
            goto label_2ae130;
        }
    }
    ctx->pc = 0x2AD460u;
label_2ad460:
    // 0x2ad460: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ad460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ad464: 0x16620332  bne         $s3, $v0, . + 4 + (0x332 << 2)
    ctx->pc = 0x2AD464u;
    {
        const bool branch_taken_0x2ad464 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AD468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD464u;
        // 0x2ad468: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad464) {
            ctx->pc = 0x2AE130u;
            goto label_2ae130;
        }
    }
    ctx->pc = 0x2AD46Cu;
    // 0x2ad46c: 0x8e5000b4  lw          $s0, 0xB4($s2)
    ctx->pc = 0x2ad46cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x2ad470: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2ad470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ad474: 0x5602032e  bnel        $s0, $v0, . + 4 + (0x32E << 2)
    ctx->pc = 0x2AD474u;
    {
        const bool branch_taken_0x2ad474 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ad474) {
            ctx->pc = 0x2AD478u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AD474u;
            // 0x2ad478: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AE130u;
            goto label_2ae130;
        }
    }
    ctx->pc = 0x2AD47Cu;
    // 0x2ad47c: 0x8e220078  lw          $v0, 0x78($s1)
    ctx->pc = 0x2ad47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x2ad480: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2ad480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2ad484: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ad484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad488: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x2AD488u;
    SET_GPR_U32(ctx, 31, 0x2AD490u);
    ctx->pc = 0x2AD48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD488u;
    // 0x2ad48c: 0xae420078  sw          $v0, 0x78($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x2AD488u, 0x2AD490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD490u;
label_2ad490:
    // 0x2ad490: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ad490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad494: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2ad494u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2ad498: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2AD498u;
    SET_GPR_U32(ctx, 31, 0x2AD4A0u);
    ctx->pc = 0x2AD49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD498u;
    // 0x2ad49c: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2AD498u, 0x2AD4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD4A0u;
label_2ad4a0:
    // 0x2ad4a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ad4a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad4a4: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x2AD4A4u;
    SET_GPR_U32(ctx, 31, 0x2AD4ACu);
    ctx->pc = 0x2AD4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD4A4u;
    // 0x2ad4a8: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x2AD4A4u, 0x2AD4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD4ACu;
label_2ad4ac:
    // 0x2ad4ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ad4acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad4b0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2ad4b0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2ad4b4: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2AD4B4u;
    SET_GPR_U32(ctx, 31, 0x2AD4BCu);
    ctx->pc = 0x2AD4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD4B4u;
    // 0x2ad4b8: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2AD4B4u, 0x2AD4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD4BCu;
label_2ad4bc:
    // 0x2ad4bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ad4bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad4c0: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x2AD4C0u;
    SET_GPR_U32(ctx, 31, 0x2AD4C8u);
    ctx->pc = 0x2AD4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD4C0u;
    // 0x2ad4c4: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x2AD4C0u, 0x2AD4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD4C8u;
label_2ad4c8:
    // 0x2ad4c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ad4c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad4cc: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2ad4ccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2ad4d0: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2AD4D0u;
    SET_GPR_U32(ctx, 31, 0x2AD4D8u);
    ctx->pc = 0x2AD4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD4D0u;
    // 0x2ad4d4: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2AD4D0u, 0x2AD4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD4D8u;
label_2ad4d8:
    // 0x2ad4d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ad4d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad4dc: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x2AD4DCu;
    SET_GPR_U32(ctx, 31, 0x2AD4E4u);
    ctx->pc = 0x2AD4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD4DCu;
    // 0x2ad4e0: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x2AD4DCu, 0x2AD4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD4E4u;
label_2ad4e4:
    // 0x2ad4e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ad4e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad4e8: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2ad4e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2ad4ec: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2AD4ECu;
    SET_GPR_U32(ctx, 31, 0x2AD4F4u);
    ctx->pc = 0x2AD4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD4ECu;
    // 0x2ad4f0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2AD4ECu, 0x2AD4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD4F4u;
label_2ad4f4:
    // 0x2ad4f4: 0x8e230080  lw          $v1, 0x80($s1)
    ctx->pc = 0x2ad4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x2ad4f8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2ad4f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad4fc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2ad4fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ad500: 0x50730004  beql        $v1, $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AD500u;
    {
        const bool branch_taken_0x2ad500 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        if (branch_taken_0x2ad500) {
            ctx->pc = 0x2AD504u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AD500u;
            // 0x2ad504: 0xc62100e0  lwc1        $f1, 0xE0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AD514u;
            goto label_2ad514;
        }
    }
    ctx->pc = 0x2AD508u;
    // 0x2ad508: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2ad508u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ad50c: 0x50700001  beql        $v1, $s0, . + 4 + (0x1 << 2)
    ctx->pc = 0x2AD50Cu;
    {
        const bool branch_taken_0x2ad50c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x2ad50c) {
            ctx->pc = 0x2AD510u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AD50Cu;
            // 0x2ad510: 0xc62100e0  lwc1        $f1, 0xE0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AD514u;
            goto label_2ad514;
        }
    }
    ctx->pc = 0x2AD514u;
label_2ad514:
    // 0x2ad514: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2ad514u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2ad518: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ad518u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad51c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2ad51cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ad520: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ad520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ad524: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AD524u;
    {
        const bool branch_taken_0x2ad524 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AD528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD524u;
        // 0x2ad528: 0x46000d82  mul.s       $f22, $f1, $f0 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad524) {
            ctx->pc = 0x2AD53Cu;
            goto label_2ad53c;
        }
    }
    ctx->pc = 0x2AD52Cu;
    // 0x2ad52c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2ad52cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ad530: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2ad530u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ad534: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AD534u;
    {
        const bool branch_taken_0x2ad534 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AD538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD534u;
        // 0x2ad538: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad534) {
            ctx->pc = 0x2AD54Cu;
            goto label_2ad54c;
        }
    }
    ctx->pc = 0x2AD53Cu;
label_2ad53c:
    // 0x2ad53c: 0xc62100e4  lwc1        $f1, 0xE4($s1)
    ctx->pc = 0x2ad53cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ad540: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2ad540u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2ad544: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ad544u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad548: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x2ad548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_2ad54c:
    // 0x2ad54c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ad54cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad550: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x2AD550u;
    SET_GPR_U32(ctx, 31, 0x2AD558u);
    ctx->pc = 0x2AD554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD550u;
    // 0x2ad554: 0x46000d42  mul.s       $f21, $f1, $f0 (Delay Slot)
    ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x2AD550u, 0x2AD558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD558u;
label_2ad558:
    // 0x2ad558: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ad558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad55c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x2ad55cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2ad560: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x2AD560u;
    SET_GPR_U32(ctx, 31, 0x2AD568u);
    ctx->pc = 0x2AD564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD560u;
    // 0x2ad564: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x2AD560u, 0x2AD568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD568u;
label_2ad568:
    // 0x2ad568: 0x8e230080  lw          $v1, 0x80($s1)
    ctx->pc = 0x2ad568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x2ad56c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ad56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ad570: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2ad570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad574: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x2ad574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2ad578: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AD578u;
    {
        const bool branch_taken_0x2ad578 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AD57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD578u;
        // 0x2ad57c: 0x46000206  mov.s       $f8, $f0 (Delay Slot)
        ctx->f[8] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad578) {
            ctx->pc = 0x2AD590u;
            goto label_2ad590;
        }
    }
    ctx->pc = 0x2AD580u;
    // 0x2ad580: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2ad580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ad584: 0x44803800  mtc1        $zero, $f7
    ctx->pc = 0x2ad584u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x2ad588: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AD588u;
    {
        const bool branch_taken_0x2ad588 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AD58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD588u;
        // 0x2ad58c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad588) {
            ctx->pc = 0x2AD59Cu;
            goto label_2ad59c;
        }
    }
    ctx->pc = 0x2AD590u;
label_2ad590:
    // 0x2ad590: 0xc62700cc  lwc1        $f7, 0xCC($s1)
    ctx->pc = 0x2ad590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2ad594: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x2ad594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2ad598: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ad598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2ad59c:
    // 0x2ad59c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AD59Cu;
    {
        const bool branch_taken_0x2ad59c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AD5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD59Cu;
        // 0x2ad5a0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad59c) {
            ctx->pc = 0x2AD5B0u;
            goto label_2ad5b0;
        }
    }
    ctx->pc = 0x2AD5A4u;
    // 0x2ad5a4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2ad5a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2ad5a8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AD5A8u;
    {
        const bool branch_taken_0x2ad5a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AD5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD5A8u;
        // 0x2ad5ac: 0x308300ff  andi        $v1, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad5a8) {
            ctx->pc = 0x2AD5B8u;
            goto label_2ad5b8;
        }
    }
    ctx->pc = 0x2AD5B0u;
label_2ad5b0:
    // 0x2ad5b0: 0xc62200d0  lwc1        $f2, 0xD0($s1)
    ctx->pc = 0x2ad5b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ad5b4: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x2ad5b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_2ad5b8:
    // 0x2ad5b8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ad5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ad5bc: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AD5BCu;
    {
        const bool branch_taken_0x2ad5bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AD5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD5BCu;
        // 0x2ad5c0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad5bc) {
            ctx->pc = 0x2AD5D0u;
            goto label_2ad5d0;
        }
    }
    ctx->pc = 0x2AD5C4u;
    // 0x2ad5c4: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x2ad5c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2ad5c8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AD5C8u;
    {
        const bool branch_taken_0x2ad5c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AD5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD5C8u;
        // 0x2ad5cc: 0x308300ff  andi        $v1, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad5c8) {
            ctx->pc = 0x2AD5D8u;
            goto label_2ad5d8;
        }
    }
    ctx->pc = 0x2AD5D0u;
label_2ad5d0:
    // 0x2ad5d0: 0xc62300d4  lwc1        $f3, 0xD4($s1)
    ctx->pc = 0x2ad5d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ad5d4: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x2ad5d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_2ad5d8:
    // 0x2ad5d8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ad5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ad5dc: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AD5DCu;
    {
        const bool branch_taken_0x2ad5dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AD5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD5DCu;
        // 0x2ad5e0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad5dc) {
            ctx->pc = 0x2AD5F0u;
            goto label_2ad5f0;
        }
    }
    ctx->pc = 0x2AD5E4u;
    // 0x2ad5e4: 0x44804800  mtc1        $zero, $f9
    ctx->pc = 0x2ad5e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x2ad5e8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AD5E8u;
    {
        const bool branch_taken_0x2ad5e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AD5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD5E8u;
        // 0x2ad5ec: 0x308300ff  andi        $v1, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad5e8) {
            ctx->pc = 0x2AD5F8u;
            goto label_2ad5f8;
        }
    }
    ctx->pc = 0x2AD5F0u;
label_2ad5f0:
    // 0x2ad5f0: 0xc62900d8  lwc1        $f9, 0xD8($s1)
    ctx->pc = 0x2ad5f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2ad5f4: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x2ad5f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_2ad5f8:
    // 0x2ad5f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ad5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ad5fc: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AD5FCu;
    {
        const bool branch_taken_0x2ad5fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AD600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD5FCu;
        // 0x2ad600: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad5fc) {
            ctx->pc = 0x2AD610u;
            goto label_2ad610;
        }
    }
    ctx->pc = 0x2AD604u;
    // 0x2ad604: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x2ad604u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x2ad608: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AD608u;
    {
        const bool branch_taken_0x2ad608 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ad608) {
            ctx->pc = 0x2AD60Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AD608u;
            // 0x2ad60c: 0x8e4200b4  lw          $v0, 0xB4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AD618u;
            goto label_2ad618;
        }
    }
    ctx->pc = 0x2AD610u;
label_2ad610:
    // 0x2ad610: 0xc62600dc  lwc1        $f6, 0xDC($s1)
    ctx->pc = 0x2ad610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2ad614: 0x8e4200b4  lw          $v0, 0xB4($s2)
    ctx->pc = 0x2ad614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
label_2ad618:
    // 0x2ad618: 0x18400002  blez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2AD618u;
    {
        const bool branch_taken_0x2ad618 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2AD61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD618u;
        // 0x2ad61c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad618) {
            ctx->pc = 0x2AD624u;
            goto label_2ad624;
        }
    }
    ctx->pc = 0x2AD620u;
    // 0x2ad620: 0x8e4400b8  lw          $a0, 0xB8($s2)
    ctx->pc = 0x2ad620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
label_2ad624:
    // 0x2ad624: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2ad624u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2ad628: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x2ad628u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
    // 0x2ad62c: 0x8cc3cec8  lw          $v1, -0x3138($a2)
    ctx->pc = 0x2ad62cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3BCEC8u));
    // 0x2ad630: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2ad630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2ad634: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ad634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2ad638: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2AD638u;
    {
        const bool branch_taken_0x2ad638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD638u;
        // 0x2ad63c: 0x46163841  sub.s       $f1, $f7, $f22 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[7], ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad638) {
            ctx->pc = 0x2AD658u;
            goto label_2ad658;
        }
    }
    ctx->pc = 0x2AD640u;
    // 0x2ad640: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x2ad640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2ad644: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2ad644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2ad648: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ad648u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad64c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2ad64cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2ad650: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2AD650u;
    {
        const bool branch_taken_0x2ad650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD650u;
        // 0x2ad654: 0xe4400008  swc1        $f0, 0x8($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad650) {
            ctx->pc = 0x2AD65Cu;
            goto label_2ad65c;
        }
    }
    ctx->pc = 0x2AD658u;
label_2ad658:
    // 0x2ad658: 0xe4810018  swc1        $f1, 0x18($a0)
    ctx->pc = 0x2ad658u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
label_2ad65c:
    // 0x2ad65c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2ad65cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ad660: 0x24c2cec8  addiu       $v0, $a2, -0x3138
    ctx->pc = 0x2ad660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954696));
    // 0x2ad664: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2ad664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2ad668: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2ad668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2ad66c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ad66cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2ad670: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2AD670u;
    {
        const bool branch_taken_0x2ad670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD670u;
        // 0x2ad674: 0x4602a900  add.s       $f4, $f21, $f2 (Delay Slot)
        ctx->f[4] = FPU_ADD_S(ctx->f[21], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad670) {
            ctx->pc = 0x2AD690u;
            goto label_2ad690;
        }
    }
    ctx->pc = 0x2AD678u;
    // 0x2ad678: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x2ad678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2ad67c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2ad67cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2ad680: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ad680u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad684: 0xe4440004  swc1        $f4, 0x4($v0)
    ctx->pc = 0x2ad684u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2ad688: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2AD688u;
    {
        const bool branch_taken_0x2ad688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD688u;
        // 0x2ad68c: 0xe4400008  swc1        $f0, 0x8($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad688) {
            ctx->pc = 0x2AD694u;
            goto label_2ad694;
        }
    }
    ctx->pc = 0x2AD690u;
label_2ad690:
    // 0x2ad690: 0xe484001c  swc1        $f4, 0x1C($a0)
    ctx->pc = 0x2ad690u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
label_2ad694:
    // 0x2ad694: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x2ad694u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ad698: 0x24c2cec8  addiu       $v0, $a2, -0x3138
    ctx->pc = 0x2ad698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954696));
    // 0x2ad69c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2ad69cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2ad6a0: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x2ad6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2ad6a4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2ad6a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2ad6a8: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AD6A8u;
    {
        const bool branch_taken_0x2ad6a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad6a8) {
            ctx->pc = 0x2AD6ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AD6A8u;
            // 0x2ad6ac: 0xe4a30020  swc1        $f3, 0x20($a1) (Delay Slot)
            { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AD6C4u;
            goto label_2ad6c4;
        }
    }
    ctx->pc = 0x2AD6B0u;
    // 0x2ad6b0: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x2ad6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x2ad6b4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2ad6b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2ad6b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ad6b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad6bc: 0xe4430004  swc1        $f3, 0x4($v0)
    ctx->pc = 0x2ad6bcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2ad6c0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2ad6c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2ad6c4:
    // 0x2ad6c4: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x2ad6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ad6c8: 0x24c2cec8  addiu       $v0, $a2, -0x3138
    ctx->pc = 0x2ad6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954696));
    // 0x2ad6cc: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x2ad6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
    // 0x2ad6d0: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x2ad6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2ad6d4: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x2ad6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2ad6d8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2ad6d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2ad6dc: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AD6DCu;
    {
        const bool branch_taken_0x2ad6dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad6dc) {
            ctx->pc = 0x2AD6E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AD6DCu;
            // 0x2ad6e0: 0xe4b40034  swc1        $f20, 0x34($a1) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 52), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AD6F8u;
            goto label_2ad6f8;
        }
    }
    ctx->pc = 0x2AD6E4u;
    // 0x2ad6e4: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x2ad6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x2ad6e8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2ad6e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2ad6ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ad6ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad6f0: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x2ad6f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2ad6f4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2ad6f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2ad6f8:
    // 0x2ad6f8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x2ad6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ad6fc: 0x24c2cec8  addiu       $v0, $a2, -0x3138
    ctx->pc = 0x2ad6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954696));
    // 0x2ad700: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x2ad700u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
    // 0x2ad704: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x2ad704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2ad708: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x2ad708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2ad70c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2ad70cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2ad710: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AD710u;
    {
        const bool branch_taken_0x2ad710 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad710) {
            ctx->pc = 0x2AD714u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AD710u;
            // 0x2ad714: 0xe4a80038  swc1        $f8, 0x38($a1) (Delay Slot)
            { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 56), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AD72Cu;
            goto label_2ad72c;
        }
    }
    ctx->pc = 0x2AD718u;
    // 0x2ad718: 0x8ca20038  lw          $v0, 0x38($a1)
    ctx->pc = 0x2ad718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x2ad71c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2ad71cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2ad720: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ad720u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad724: 0xe4480004  swc1        $f8, 0x4($v0)
    ctx->pc = 0x2ad724u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2ad728: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2ad728u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2ad72c:
    // 0x2ad72c: 0x8e4300b4  lw          $v1, 0xB4($s2)
    ctx->pc = 0x2ad72cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x2ad730: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ad730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ad734: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2ad734u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2ad738: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2AD738u;
    {
        const bool branch_taken_0x2ad738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD738u;
        // 0x2ad73c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad738) {
            ctx->pc = 0x2AD744u;
            goto label_2ad744;
        }
    }
    ctx->pc = 0x2AD740u;
    // 0x2ad740: 0x8e4400bc  lw          $a0, 0xBC($s2)
    ctx->pc = 0x2ad740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
label_2ad744:
    // 0x2ad744: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x2ad744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
    // 0x2ad748: 0x8cc3cec8  lw          $v1, -0x3138($a2)
    ctx->pc = 0x2ad748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294954696)));
    // 0x2ad74c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2ad74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2ad750: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ad750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2ad754: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AD754u;
    {
        const bool branch_taken_0x2ad754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad754) {
            ctx->pc = 0x2AD758u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AD754u;
            // 0x2ad758: 0xe4810018  swc1        $f1, 0x18($a0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AD770u;
            goto label_2ad770;
        }
    }
    ctx->pc = 0x2AD75Cu;
    // 0x2ad75c: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x2ad75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2ad760: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2ad760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2ad764: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ad764u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad768: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2ad768u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2ad76c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2ad76cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2ad770:
    // 0x2ad770: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2ad770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2ad774: 0x24c2cec8  addiu       $v0, $a2, -0x3138
    ctx->pc = 0x2ad774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954696));
    // 0x2ad778: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2ad778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2ad77c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2ad77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2ad780: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ad780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2ad784: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2AD784u;
    {
        const bool branch_taken_0x2ad784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD784u;
        // 0x2ad788: 0x46151141  sub.s       $f5, $f2, $f21 (Delay Slot)
        ctx->f[5] = FPU_SUB_S(ctx->f[2], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad784) {
            ctx->pc = 0x2AD7A8u;
            goto label_2ad7a8;
        }
    }
    ctx->pc = 0x2AD78Cu;
    // 0x2ad78c: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x2ad78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2ad790: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2ad790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2ad794: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ad794u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad798: 0xe4450004  swc1        $f5, 0x4($v0)
    ctx->pc = 0x2ad798u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2ad79c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2AD79Cu;
    {
        const bool branch_taken_0x2ad79c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD79Cu;
        // 0x2ad7a0: 0xe4400008  swc1        $f0, 0x8($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad79c) {
            ctx->pc = 0x2AD7ACu;
            goto label_2ad7ac;
        }
    }
    ctx->pc = 0x2AD7A4u;
    // 0x2ad7a4: 0x0  nop
    ctx->pc = 0x2ad7a4u;
    // NOP
label_2ad7a8:
    // 0x2ad7a8: 0xe485001c  swc1        $f5, 0x1C($a0)
    ctx->pc = 0x2ad7a8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
label_2ad7ac:
    // 0x2ad7ac: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x2ad7acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2ad7b0: 0x24c2cec8  addiu       $v0, $a2, -0x3138
    ctx->pc = 0x2ad7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954696));
    // 0x2ad7b4: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2ad7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2ad7b8: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x2ad7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2ad7bc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2ad7bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2ad7c0: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AD7C0u;
    {
        const bool branch_taken_0x2ad7c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad7c0) {
            ctx->pc = 0x2AD7C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AD7C0u;
            // 0x2ad7c4: 0xe4a30020  swc1        $f3, 0x20($a1) (Delay Slot)
            { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AD7DCu;
            goto label_2ad7dc;
        }
    }
    ctx->pc = 0x2AD7C8u;
    // 0x2ad7c8: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x2ad7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x2ad7cc: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2ad7ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2ad7d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ad7d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad7d4: 0xe4430004  swc1        $f3, 0x4($v0)
    ctx->pc = 0x2ad7d4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2ad7d8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2ad7d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2ad7dc:
    // 0x2ad7dc: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x2ad7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2ad7e0: 0x24c2cec8  addiu       $v0, $a2, -0x3138
    ctx->pc = 0x2ad7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954696));
    // 0x2ad7e4: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x2ad7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
    // 0x2ad7e8: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x2ad7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2ad7ec: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x2ad7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2ad7f0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2ad7f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2ad7f4: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AD7F4u;
    {
        const bool branch_taken_0x2ad7f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad7f4) {
            ctx->pc = 0x2AD7F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AD7F4u;
            // 0x2ad7f8: 0xe4b40034  swc1        $f20, 0x34($a1) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 52), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AD810u;
            goto label_2ad810;
        }
    }
    ctx->pc = 0x2AD7FCu;
    // 0x2ad7fc: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x2ad7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x2ad800: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2ad800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2ad804: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ad804u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad808: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x2ad808u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2ad80c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2ad80cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2ad810:
    // 0x2ad810: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x2ad810u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2ad814: 0x24c2cec8  addiu       $v0, $a2, -0x3138
    ctx->pc = 0x2ad814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954696));
    // 0x2ad818: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x2ad818u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
    // 0x2ad81c: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x2ad81cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2ad820: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x2ad820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2ad824: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2ad824u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2ad828: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2AD828u;
    {
        const bool branch_taken_0x2ad828 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD828u;
        // 0x2ad82c: 0x46064180  add.s       $f6, $f8, $f6 (Delay Slot)
        ctx->f[6] = FPU_ADD_S(ctx->f[8], ctx->f[6]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad828) {
            ctx->pc = 0x2AD848u;
            goto label_2ad848;
        }
    }
    ctx->pc = 0x2AD830u;
    // 0x2ad830: 0x8ca20038  lw          $v0, 0x38($a1)
    ctx->pc = 0x2ad830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x2ad834: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2ad834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2ad838: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ad838u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad83c: 0xe4460004  swc1        $f6, 0x4($v0)
    ctx->pc = 0x2ad83cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2ad840: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2AD840u;
    {
        const bool branch_taken_0x2ad840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD840u;
        // 0x2ad844: 0xe4400008  swc1        $f0, 0x8($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad840) {
            ctx->pc = 0x2AD84Cu;
            goto label_2ad84c;
        }
    }
    ctx->pc = 0x2AD848u;
label_2ad848:
    // 0x2ad848: 0xe4a60038  swc1        $f6, 0x38($a1)
    ctx->pc = 0x2ad848u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 56), bits); }
label_2ad84c:
    // 0x2ad84c: 0x8e4300b4  lw          $v1, 0xB4($s2)
    ctx->pc = 0x2ad84cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x2ad850: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ad850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ad854: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2ad854u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2ad858: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2AD858u;
    {
        const bool branch_taken_0x2ad858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD858u;
        // 0x2ad85c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad858) {
            ctx->pc = 0x2AD864u;
            goto label_2ad864;
        }
    }
    ctx->pc = 0x2AD860u;
    // 0x2ad860: 0x8e4400c0  lw          $a0, 0xC0($s2)
    ctx->pc = 0x2ad860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 192)));
label_2ad864:
    // 0x2ad864: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2ad864u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2ad868: 0x8cc3cec8  lw          $v1, -0x3138($a2)
    ctx->pc = 0x2ad868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294954696)));
    // 0x2ad86c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2ad86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2ad870: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ad870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2ad874: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2AD874u;
    {
        const bool branch_taken_0x2ad874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD874u;
        // 0x2ad878: 0x4607b040  add.s       $f1, $f22, $f7 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[22], ctx->f[7]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad874) {
            ctx->pc = 0x2AD898u;
            goto label_2ad898;
        }
    }
    ctx->pc = 0x2AD87Cu;
    // 0x2ad87c: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x2ad87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2ad880: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2ad880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2ad884: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ad884u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad888: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2ad888u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2ad88c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2AD88Cu;
    {
        const bool branch_taken_0x2ad88c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD88Cu;
        // 0x2ad890: 0xe4400008  swc1        $f0, 0x8($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad88c) {
            ctx->pc = 0x2AD89Cu;
            goto label_2ad89c;
        }
    }
    ctx->pc = 0x2AD894u;
    // 0x2ad894: 0x0  nop
    ctx->pc = 0x2ad894u;
    // NOP
label_2ad898:
    // 0x2ad898: 0xe4810018  swc1        $f1, 0x18($a0)
    ctx->pc = 0x2ad898u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
label_2ad89c:
    // 0x2ad89c: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x2ad89cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ad8a0: 0x24c2cec8  addiu       $v0, $a2, -0x3138
    ctx->pc = 0x2ad8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954696));
    // 0x2ad8a4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2ad8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2ad8a8: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x2ad8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2ad8ac: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2ad8acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2ad8b0: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AD8B0u;
    {
        const bool branch_taken_0x2ad8b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad8b0) {
            ctx->pc = 0x2AD8B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AD8B0u;
            // 0x2ad8b4: 0xe4a4001c  swc1        $f4, 0x1C($a1) (Delay Slot)
            { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AD8CCu;
            goto label_2ad8cc;
        }
    }
    ctx->pc = 0x2AD8B8u;
    // 0x2ad8b8: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x2ad8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x2ad8bc: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2ad8bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2ad8c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ad8c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad8c4: 0xe4440004  swc1        $f4, 0x4($v0)
    ctx->pc = 0x2ad8c4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2ad8c8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2ad8c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2ad8cc:
    // 0x2ad8cc: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x2ad8ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ad8d0: 0x24c2cec8  addiu       $v0, $a2, -0x3138
    ctx->pc = 0x2ad8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954696));
    // 0x2ad8d4: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2ad8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2ad8d8: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x2ad8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2ad8dc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2ad8dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2ad8e0: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AD8E0u;
    {
        const bool branch_taken_0x2ad8e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad8e0) {
            ctx->pc = 0x2AD8E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AD8E0u;
            // 0x2ad8e4: 0xe4a30020  swc1        $f3, 0x20($a1) (Delay Slot)
            { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AD8FCu;
            goto label_2ad8fc;
        }
    }
    ctx->pc = 0x2AD8E8u;
    // 0x2ad8e8: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x2ad8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x2ad8ec: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2ad8ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2ad8f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ad8f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad8f4: 0xe4430004  swc1        $f3, 0x4($v0)
    ctx->pc = 0x2ad8f4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2ad8f8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2ad8f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2ad8fc:
    // 0x2ad8fc: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x2ad8fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ad900: 0x24c2cec8  addiu       $v0, $a2, -0x3138
    ctx->pc = 0x2ad900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954696));
    // 0x2ad904: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x2ad904u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
    // 0x2ad908: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x2ad908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2ad90c: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x2ad90cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2ad910: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2ad910u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2ad914: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2AD914u;
    {
        const bool branch_taken_0x2ad914 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD914u;
        // 0x2ad918: 0x4609a080  add.s       $f2, $f20, $f9 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[20], ctx->f[9]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad914) {
            ctx->pc = 0x2AD938u;
            goto label_2ad938;
        }
    }
    ctx->pc = 0x2AD91Cu;
    // 0x2ad91c: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x2ad91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x2ad920: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2ad920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2ad924: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ad924u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad928: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x2ad928u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2ad92c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2AD92Cu;
    {
        const bool branch_taken_0x2ad92c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD92Cu;
        // 0x2ad930: 0xe4400008  swc1        $f0, 0x8($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad92c) {
            ctx->pc = 0x2AD93Cu;
            goto label_2ad93c;
        }
    }
    ctx->pc = 0x2AD934u;
    // 0x2ad934: 0x0  nop
    ctx->pc = 0x2ad934u;
    // NOP
label_2ad938:
    // 0x2ad938: 0xe4a20034  swc1        $f2, 0x34($a1)
    ctx->pc = 0x2ad938u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 52), bits); }
label_2ad93c:
    // 0x2ad93c: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x2ad93cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ad940: 0x24c2cec8  addiu       $v0, $a2, -0x3138
    ctx->pc = 0x2ad940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954696));
    // 0x2ad944: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x2ad944u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
    // 0x2ad948: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x2ad948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2ad94c: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x2ad94cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2ad950: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2ad950u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2ad954: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AD954u;
    {
        const bool branch_taken_0x2ad954 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad954) {
            ctx->pc = 0x2AD958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AD954u;
            // 0x2ad958: 0xe4a80038  swc1        $f8, 0x38($a1) (Delay Slot)
            { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 56), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AD970u;
            goto label_2ad970;
        }
    }
    ctx->pc = 0x2AD95Cu;
    // 0x2ad95c: 0x8ca20038  lw          $v0, 0x38($a1)
    ctx->pc = 0x2ad95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x2ad960: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2ad960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2ad964: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ad964u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad968: 0xe4480004  swc1        $f8, 0x4($v0)
    ctx->pc = 0x2ad968u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2ad96c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2ad96cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2ad970:
    // 0x2ad970: 0x8e4300b4  lw          $v1, 0xB4($s2)
    ctx->pc = 0x2ad970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x2ad974: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2ad974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ad978: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2ad978u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2ad97c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2AD97Cu;
    {
        const bool branch_taken_0x2ad97c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD97Cu;
        // 0x2ad980: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad97c) {
            ctx->pc = 0x2AD988u;
            goto label_2ad988;
        }
    }
    ctx->pc = 0x2AD984u;
    // 0x2ad984: 0x8e4400c4  lw          $a0, 0xC4($s2)
    ctx->pc = 0x2ad984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
label_2ad988:
    // 0x2ad988: 0xafa4000c  sw          $a0, 0xC($sp)
    ctx->pc = 0x2ad988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 4));
    // 0x2ad98c: 0x8cc3cec8  lw          $v1, -0x3138($a2)
    ctx->pc = 0x2ad98cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294954696)));
    // 0x2ad990: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2ad990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2ad994: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ad994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2ad998: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AD998u;
    {
        const bool branch_taken_0x2ad998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad998) {
            ctx->pc = 0x2AD99Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AD998u;
            // 0x2ad99c: 0xe4810018  swc1        $f1, 0x18($a0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AD9B4u;
            goto label_2ad9b4;
        }
    }
    ctx->pc = 0x2AD9A0u;
    // 0x2ad9a0: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x2ad9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2ad9a4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2ad9a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2ad9a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ad9a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad9ac: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2ad9acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2ad9b0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2ad9b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2ad9b4:
    // 0x2ad9b4: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x2ad9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2ad9b8: 0x24c2cec8  addiu       $v0, $a2, -0x3138
    ctx->pc = 0x2ad9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954696));
    // 0x2ad9bc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2ad9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2ad9c0: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x2ad9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2ad9c4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2ad9c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2ad9c8: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AD9C8u;
    {
        const bool branch_taken_0x2ad9c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad9c8) {
            ctx->pc = 0x2AD9CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AD9C8u;
            // 0x2ad9cc: 0xe4a5001c  swc1        $f5, 0x1C($a1) (Delay Slot)
            { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AD9E4u;
            goto label_2ad9e4;
        }
    }
    ctx->pc = 0x2AD9D0u;
    // 0x2ad9d0: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x2ad9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x2ad9d4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2ad9d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2ad9d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ad9d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad9dc: 0xe4450004  swc1        $f5, 0x4($v0)
    ctx->pc = 0x2ad9dcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2ad9e0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2ad9e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2ad9e4:
    // 0x2ad9e4: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x2ad9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2ad9e8: 0x24c2cec8  addiu       $v0, $a2, -0x3138
    ctx->pc = 0x2ad9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954696));
    // 0x2ad9ec: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2ad9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2ad9f0: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x2ad9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2ad9f4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2ad9f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2ad9f8: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AD9F8u;
    {
        const bool branch_taken_0x2ad9f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad9f8) {
            ctx->pc = 0x2AD9FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AD9F8u;
            // 0x2ad9fc: 0xe4a30020  swc1        $f3, 0x20($a1) (Delay Slot)
            { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ADA14u;
            goto label_2ada14;
        }
    }
    ctx->pc = 0x2ADA00u;
    // 0x2ada00: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x2ada00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x2ada04: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2ada04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2ada08: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ada08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ada0c: 0xe4430004  swc1        $f3, 0x4($v0)
    ctx->pc = 0x2ada0cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2ada10: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2ada10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2ada14:
    // 0x2ada14: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x2ada14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2ada18: 0x24c2cec8  addiu       $v0, $a2, -0x3138
    ctx->pc = 0x2ada18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954696));
    // 0x2ada1c: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x2ada1cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
    // 0x2ada20: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x2ada20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2ada24: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x2ada24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2ada28: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2ada28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2ada2c: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2ADA2Cu;
    {
        const bool branch_taken_0x2ada2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ada2c) {
            ctx->pc = 0x2ADA30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ADA2Cu;
            // 0x2ada30: 0xe4a20034  swc1        $f2, 0x34($a1) (Delay Slot)
            { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 52), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ADA48u;
            goto label_2ada48;
        }
    }
    ctx->pc = 0x2ADA34u;
    // 0x2ada34: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x2ada34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x2ada38: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2ada38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2ada3c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ada3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ada40: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x2ada40u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2ada44: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2ada44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2ada48:
    // 0x2ada48: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x2ada48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2ada4c: 0x24c2cec8  addiu       $v0, $a2, -0x3138
    ctx->pc = 0x2ada4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954696));
    // 0x2ada50: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x2ada50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
    // 0x2ada54: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x2ada54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2ada58: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x2ada58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2ada5c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2ada5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2ada60: 0x506001b2  beql        $v1, $zero, . + 4 + (0x1B2 << 2)
    ctx->pc = 0x2ADA60u;
    {
        const bool branch_taken_0x2ada60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ada60) {
            ctx->pc = 0x2ADA64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ADA60u;
            // 0x2ada64: 0xe4a60038  swc1        $f6, 0x38($a1) (Delay Slot)
            { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 56), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AE12Cu;
            goto label_2ae12c;
        }
    }
    ctx->pc = 0x2ADA68u;
    // 0x2ada68: 0x8ca20038  lw          $v0, 0x38($a1)
    ctx->pc = 0x2ada68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x2ada6c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2ada6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2ada70: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ada70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ada74: 0xe4460004  swc1        $f6, 0x4($v0)
    ctx->pc = 0x2ada74u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2ada78: 0x100001ac  b           . + 4 + (0x1AC << 2)
    ctx->pc = 0x2ADA78u;
    {
        const bool branch_taken_0x2ada78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADA78u;
        // 0x2ada7c: 0xe4400008  swc1        $f0, 0x8($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ada78) {
            ctx->pc = 0x2AE12Cu;
            goto label_2ae12c;
        }
    }
    ctx->pc = 0x2ADA80u;
label_2ada80:
    // 0x2ada80: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ada80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ada84: 0x148201aa  bne         $a0, $v0, . + 4 + (0x1AA << 2)
    ctx->pc = 0x2ADA84u;
    {
        const bool branch_taken_0x2ada84 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2ADA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADA84u;
        // 0x2ada88: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ada84) {
            ctx->pc = 0x2AE130u;
            goto label_2ae130;
        }
    }
    ctx->pc = 0x2ADA8Cu;
    // 0x2ada8c: 0x92300080  lbu         $s0, 0x80($s1)
    ctx->pc = 0x2ada8cu;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x2ada90: 0x16030109  bne         $s0, $v1, . + 4 + (0x109 << 2)
    ctx->pc = 0x2ADA90u;
    {
        const bool branch_taken_0x2ada90 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x2ADA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADA90u;
        // 0x2ada94: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ada90) {
            ctx->pc = 0x2ADEB8u;
            goto label_2adeb8;
        }
    }
    ctx->pc = 0x2ADA98u;
    // 0x2ada98: 0x8e2300b4  lw          $v1, 0xB4($s1)
    ctx->pc = 0x2ada98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
    // 0x2ada9c: 0x546201a4  bnel        $v1, $v0, . + 4 + (0x1A4 << 2)
    ctx->pc = 0x2ADA9Cu;
    {
        const bool branch_taken_0x2ada9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ada9c) {
            ctx->pc = 0x2ADAA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ADA9Cu;
            // 0x2adaa0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AE130u;
            goto label_2ae130;
        }
    }
    ctx->pc = 0x2ADAA4u;
    // 0x2adaa4: 0x8e220078  lw          $v0, 0x78($s1)
    ctx->pc = 0x2adaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x2adaa8: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2adaa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2adaac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2adaacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adab0: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x2ADAB0u;
    SET_GPR_U32(ctx, 31, 0x2ADAB8u);
    ctx->pc = 0x2ADAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADAB0u;
    // 0x2adab4: 0xae420078  sw          $v0, 0x78($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x2ADAB0u, 0x2ADAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADAB8u;
label_2adab8:
    // 0x2adab8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2adab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adabc: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2adabcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2adac0: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2ADAC0u;
    SET_GPR_U32(ctx, 31, 0x2ADAC8u);
    ctx->pc = 0x2ADAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADAC0u;
    // 0x2adac4: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2ADAC0u, 0x2ADAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADAC8u;
label_2adac8:
    // 0x2adac8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2adac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adacc: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x2ADACCu;
    SET_GPR_U32(ctx, 31, 0x2ADAD4u);
    ctx->pc = 0x2ADAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADACCu;
    // 0x2adad0: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x2ADACCu, 0x2ADAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADAD4u;
label_2adad4:
    // 0x2adad4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2adad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adad8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2adad8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2adadc: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2ADADCu;
    SET_GPR_U32(ctx, 31, 0x2ADAE4u);
    ctx->pc = 0x2ADAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADADCu;
    // 0x2adae0: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2ADADCu, 0x2ADAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADAE4u;
label_2adae4:
    // 0x2adae4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2adae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adae8: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x2ADAE8u;
    SET_GPR_U32(ctx, 31, 0x2ADAF0u);
    ctx->pc = 0x2ADAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADAE8u;
    // 0x2adaec: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x2ADAE8u, 0x2ADAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADAF0u;
label_2adaf0:
    // 0x2adaf0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2adaf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adaf4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2adaf4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2adaf8: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2ADAF8u;
    SET_GPR_U32(ctx, 31, 0x2ADB00u);
    ctx->pc = 0x2ADAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADAF8u;
    // 0x2adafc: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2ADAF8u, 0x2ADB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADB00u;
label_2adb00:
    // 0x2adb00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2adb00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adb04: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x2ADB04u;
    SET_GPR_U32(ctx, 31, 0x2ADB0Cu);
    ctx->pc = 0x2ADB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADB04u;
    // 0x2adb08: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x2ADB04u, 0x2ADB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADB0Cu;
label_2adb0c:
    // 0x2adb0c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2adb0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adb10: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2adb10u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2adb14: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2ADB14u;
    SET_GPR_U32(ctx, 31, 0x2ADB1Cu);
    ctx->pc = 0x2ADB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADB14u;
    // 0x2adb18: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2ADB14u, 0x2ADB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADB1Cu;
label_2adb1c:
    // 0x2adb1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2adb1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adb20: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x2ADB20u;
    SET_GPR_U32(ctx, 31, 0x2ADB28u);
    ctx->pc = 0x2ADB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADB20u;
    // 0x2adb24: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x2ADB20u, 0x2ADB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADB28u;
label_2adb28:
    // 0x2adb28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2adb28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adb2c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2adb2cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2adb30: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2ADB30u;
    SET_GPR_U32(ctx, 31, 0x2ADB38u);
    ctx->pc = 0x2ADB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADB30u;
    // 0x2adb34: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2ADB30u, 0x2ADB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADB38u;
label_2adb38:
    // 0x2adb38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2adb38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adb3c: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x2ADB3Cu;
    SET_GPR_U32(ctx, 31, 0x2ADB44u);
    ctx->pc = 0x2ADB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADB3Cu;
    // 0x2adb40: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x2ADB3Cu, 0x2ADB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADB44u;
label_2adb44:
    // 0x2adb44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2adb44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adb48: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x2adb48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2adb4c: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2ADB4Cu;
    SET_GPR_U32(ctx, 31, 0x2ADB54u);
    ctx->pc = 0x2ADB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADB4Cu;
    // 0x2adb50: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2ADB4Cu, 0x2ADB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADB54u;
label_2adb54:
    // 0x2adb54: 0x8e2300b4  lw          $v1, 0xB4($s1)
    ctx->pc = 0x2adb54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
    // 0x2adb58: 0x18600002  blez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2ADB58u;
    {
        const bool branch_taken_0x2adb58 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2ADB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADB58u;
        // 0x2adb5c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adb58) {
            ctx->pc = 0x2ADB64u;
            goto label_2adb64;
        }
    }
    ctx->pc = 0x2ADB60u;
    // 0x2adb60: 0x8e2400b8  lw          $a0, 0xB8($s1)
    ctx->pc = 0x2adb60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_2adb64:
    // 0x2adb64: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2adb64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2adb68: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2adb68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2adb6c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2adb6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2adb70: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2ADB70u;
    {
        const bool branch_taken_0x2adb70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADB70u;
        // 0x2adb74: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adb70) {
            ctx->pc = 0x2ADB7Cu;
            goto label_2adb7c;
        }
    }
    ctx->pc = 0x2ADB78u;
    // 0x2adb78: 0x8e2300c4  lw          $v1, 0xC4($s1)
    ctx->pc = 0x2adb78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
label_2adb7c:
    // 0x2adb7c: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x2adb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x2adb80: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x2adb80u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x2adb84: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2adb84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2adb88: 0x8e23cec8  lw          $v1, -0x3138($s1)
    ctx->pc = 0x2adb88u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3BCEC8u));
    // 0x2adb8c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2adb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2adb90: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2adb90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2adb94: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2ADB94u;
    {
        const bool branch_taken_0x2adb94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2adb94) {
            ctx->pc = 0x2ADB98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ADB94u;
            // 0x2adb98: 0xc4940018  lwc1        $f20, 0x18($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ADBB4u;
            goto label_2adbb4;
        }
    }
    ctx->pc = 0x2ADB9Cu;
    // 0x2adb9c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2adb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2adba0: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2adba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2adba4: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2adba4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2adba8: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2ADBA8u;
    SET_GPR_U32(ctx, 31, 0x2ADBB0u);
    ctx->pc = 0x2ADBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADBA8u;
    // 0x2adbac: 0x8c840018  lw          $a0, 0x18($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2ADBA8u, 0x2ADBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADBB0u;
label_2adbb0:
    // 0x2adbb0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2adbb0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2adbb4:
    // 0x2adbb4: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2adbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2adbb8: 0x8e23cec8  lw          $v1, -0x3138($s1)
    ctx->pc = 0x2adbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954696)));
    // 0x2adbbc: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2adbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2adbc0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2adbc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2adbc4: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2ADBC4u;
    {
        const bool branch_taken_0x2adbc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2adbc4) {
            ctx->pc = 0x2ADBC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ADBC4u;
            // 0x2adbc8: 0xc4800018  lwc1        $f0, 0x18($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ADBE8u;
            goto label_2adbe8;
        }
    }
    ctx->pc = 0x2ADBCCu;
    // 0x2adbcc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2adbccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2adbd0: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2adbd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2adbd4: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2adbd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2adbd8: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2ADBD8u;
    SET_GPR_U32(ctx, 31, 0x2ADBE0u);
    ctx->pc = 0x2ADBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADBD8u;
    // 0x2adbdc: 0x8c840018  lw          $a0, 0x18($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2ADBD8u, 0x2ADBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADBE0u;
label_2adbe0:
    // 0x2adbe0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2ADBE0u;
    {
        const bool branch_taken_0x2adbe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADBE0u;
        // 0x2adbe4: 0x4600a5c1  sub.s       $f23, $f20, $f0 (Delay Slot)
        ctx->f[23] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adbe0) {
            ctx->pc = 0x2ADBECu;
            goto label_2adbec;
        }
    }
    ctx->pc = 0x2ADBE8u;
label_2adbe8:
    // 0x2adbe8: 0x4600a5c1  sub.s       $f23, $f20, $f0
    ctx->pc = 0x2adbe8u;
    ctx->f[23] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_2adbec:
    // 0x2adbec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2adbecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2adbf0: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x2adbf0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2adbf4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2ADBF4u;
    {
        const bool branch_taken_0x2adbf4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2adbf4) {
            ctx->pc = 0x2ADBF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ADBF4u;
            // 0x2adbf8: 0x4600bdc7  neg.s       $f23, $f23 (Delay Slot)
            ctx->f[23] = FPU_NEG_S(ctx->f[23]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ADBFCu;
            goto label_2adbfc;
        }
    }
    ctx->pc = 0x2ADBFCu;
label_2adbfc:
    // 0x2adbfc: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x2adbfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2adc00: 0x2622cec8  addiu       $v0, $s1, -0x3138
    ctx->pc = 0x2adc00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294954696));
    // 0x2adc04: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2adc04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2adc08: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x2adc08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2adc0c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2adc0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2adc10: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2ADC10u;
    {
        const bool branch_taken_0x2adc10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2adc10) {
            ctx->pc = 0x2ADC14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ADC10u;
            // 0x2adc14: 0xc4b4001c  lwc1        $f20, 0x1C($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ADC30u;
            goto label_2adc30;
        }
    }
    ctx->pc = 0x2ADC18u;
    // 0x2adc18: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2adc18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2adc1c: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2adc1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2adc20: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2adc20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2adc24: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2ADC24u;
    SET_GPR_U32(ctx, 31, 0x2ADC2Cu);
    ctx->pc = 0x2ADC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADC24u;
    // 0x2adc28: 0x8ca4001c  lw          $a0, 0x1C($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2ADC24u, 0x2ADC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADC2Cu;
label_2adc2c:
    // 0x2adc2c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2adc2cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2adc30:
    // 0x2adc30: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x2adc30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2adc34: 0x2622cec8  addiu       $v0, $s1, -0x3138
    ctx->pc = 0x2adc34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294954696));
    // 0x2adc38: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2adc38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2adc3c: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x2adc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2adc40: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2adc40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2adc44: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2ADC44u;
    {
        const bool branch_taken_0x2adc44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2adc44) {
            ctx->pc = 0x2ADC48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ADC44u;
            // 0x2adc48: 0xc4a0001c  lwc1        $f0, 0x1C($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ADC68u;
            goto label_2adc68;
        }
    }
    ctx->pc = 0x2ADC4Cu;
    // 0x2adc4c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2adc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2adc50: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2adc50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2adc54: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2adc54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2adc58: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2ADC58u;
    SET_GPR_U32(ctx, 31, 0x2ADC60u);
    ctx->pc = 0x2ADC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADC58u;
    // 0x2adc5c: 0x8ca4001c  lw          $a0, 0x1C($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2ADC58u, 0x2ADC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADC60u;
label_2adc60:
    // 0x2adc60: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2ADC60u;
    {
        const bool branch_taken_0x2adc60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADC60u;
        // 0x2adc64: 0x4600a541  sub.s       $f21, $f20, $f0 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adc60) {
            ctx->pc = 0x2ADC6Cu;
            goto label_2adc6c;
        }
    }
    ctx->pc = 0x2ADC68u;
label_2adc68:
    // 0x2adc68: 0x4600a541  sub.s       $f21, $f20, $f0
    ctx->pc = 0x2adc68u;
    ctx->f[21] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_2adc6c:
    // 0x2adc6c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2adc6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2adc70: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x2adc70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2adc74: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2ADC74u;
    {
        const bool branch_taken_0x2adc74 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2adc74) {
            ctx->pc = 0x2ADC78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ADC74u;
            // 0x2adc78: 0x4600ad47  neg.s       $f21, $f21 (Delay Slot)
            ctx->f[21] = FPU_NEG_S(ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ADC7Cu;
            goto label_2adc7c;
        }
    }
    ctx->pc = 0x2ADC7Cu;
label_2adc7c:
    // 0x2adc7c: 0x8fb00000  lw          $s0, 0x0($sp)
    ctx->pc = 0x2adc7cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2adc80: 0x2622cec8  addiu       $v0, $s1, -0x3138
    ctx->pc = 0x2adc80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294954696));
    // 0x2adc84: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x2adc84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2adc88: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2adc88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2adc8c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2adc8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2adc90: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2ADC90u;
    {
        const bool branch_taken_0x2adc90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2adc90) {
            ctx->pc = 0x2ADC94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ADC90u;
            // 0x2adc94: 0xc6010010  lwc1        $f1, 0x10($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ADCB8u;
            goto label_2adcb8;
        }
    }
    ctx->pc = 0x2ADC98u;
    // 0x2adc98: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2adc98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2adc9c: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2adc9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2adca0: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2adca0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2adca4: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2ADCA4u;
    SET_GPR_U32(ctx, 31, 0x2ADCACu);
    ctx->pc = 0x2ADCA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADCA4u;
    // 0x2adca8: 0x8e040034  lw          $a0, 0x34($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2ADCA4u, 0x2ADCACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADCACu;
label_2adcac:
    // 0x2adcac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2ADCACu;
    {
        const bool branch_taken_0x2adcac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADCACu;
        // 0x2adcb0: 0xc6010010  lwc1        $f1, 0x10($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adcac) {
            ctx->pc = 0x2ADCBCu;
            goto label_2adcbc;
        }
    }
    ctx->pc = 0x2ADCB4u;
    // 0x2adcb4: 0x0  nop
    ctx->pc = 0x2adcb4u;
    // NOP
label_2adcb8:
    // 0x2adcb8: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x2adcb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2adcbc:
    // 0x2adcbc: 0x8fb00004  lw          $s0, 0x4($sp)
    ctx->pc = 0x2adcbcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2adcc0: 0x2622cec8  addiu       $v0, $s1, -0x3138
    ctx->pc = 0x2adcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294954696));
    // 0x2adcc4: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x2adcc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2adcc8: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2adcc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2adccc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2adcccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2adcd0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2ADCD0u;
    {
        const bool branch_taken_0x2adcd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADCD0u;
        // 0x2adcd4: 0x46010500  add.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adcd0) {
            ctx->pc = 0x2ADCF8u;
            goto label_2adcf8;
        }
    }
    ctx->pc = 0x2ADCD8u;
    // 0x2adcd8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2adcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2adcdc: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2adcdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2adce0: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2adce0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2adce4: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2ADCE4u;
    SET_GPR_U32(ctx, 31, 0x2ADCECu);
    ctx->pc = 0x2ADCE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADCE4u;
    // 0x2adce8: 0x8e040034  lw          $a0, 0x34($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2ADCE4u, 0x2ADCECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADCECu;
label_2adcec:
    // 0x2adcec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2ADCECu;
    {
        const bool branch_taken_0x2adcec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADCECu;
        // 0x2adcf0: 0xc6010010  lwc1        $f1, 0x10($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adcec) {
            ctx->pc = 0x2ADD00u;
            goto label_2add00;
        }
    }
    ctx->pc = 0x2ADCF4u;
    // 0x2adcf4: 0x0  nop
    ctx->pc = 0x2adcf4u;
    // NOP
label_2adcf8:
    // 0x2adcf8: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x2adcf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2adcfc: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x2adcfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2add00:
    // 0x2add00: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2add00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2add04: 0x4600a581  sub.s       $f22, $f20, $f0
    ctx->pc = 0x2add04u;
    ctx->f[22] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x2add08: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2add08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2add0c: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x2add0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2add10: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2ADD10u;
    {
        const bool branch_taken_0x2add10 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2add10) {
            ctx->pc = 0x2ADD14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ADD10u;
            // 0x2add14: 0x4600b587  neg.s       $f22, $f22 (Delay Slot)
            ctx->f[22] = FPU_NEG_S(ctx->f[22]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ADD18u;
            goto label_2add18;
        }
    }
    ctx->pc = 0x2ADD18u;
label_2add18:
    // 0x2add18: 0x8fb00000  lw          $s0, 0x0($sp)
    ctx->pc = 0x2add18u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2add1c: 0x2622cec8  addiu       $v0, $s1, -0x3138
    ctx->pc = 0x2add1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294954696));
    // 0x2add20: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x2add20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2add24: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2add24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2add28: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2add28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2add2c: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2ADD2Cu;
    {
        const bool branch_taken_0x2add2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2add2c) {
            ctx->pc = 0x2ADD30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ADD2Cu;
            // 0x2add30: 0xc6010014  lwc1        $f1, 0x14($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ADD50u;
            goto label_2add50;
        }
    }
    ctx->pc = 0x2ADD34u;
    // 0x2add34: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2add34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2add38: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2add38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2add3c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2add3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2add40: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2ADD40u;
    SET_GPR_U32(ctx, 31, 0x2ADD48u);
    ctx->pc = 0x2ADD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADD40u;
    // 0x2add44: 0x8e040038  lw          $a0, 0x38($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2ADD40u, 0x2ADD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADD48u;
label_2add48:
    // 0x2add48: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2ADD48u;
    {
        const bool branch_taken_0x2add48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADD48u;
        // 0x2add4c: 0xc6010014  lwc1        $f1, 0x14($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2add48) {
            ctx->pc = 0x2ADD54u;
            goto label_2add54;
        }
    }
    ctx->pc = 0x2ADD50u;
label_2add50:
    // 0x2add50: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x2add50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2add54:
    // 0x2add54: 0x8fb00004  lw          $s0, 0x4($sp)
    ctx->pc = 0x2add54u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2add58: 0x2622cec8  addiu       $v0, $s1, -0x3138
    ctx->pc = 0x2add58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294954696));
    // 0x2add5c: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x2add5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2add60: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2add60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2add64: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2add64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2add68: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2ADD68u;
    {
        const bool branch_taken_0x2add68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADD68u;
        // 0x2add6c: 0x46010500  add.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2add68) {
            ctx->pc = 0x2ADD90u;
            goto label_2add90;
        }
    }
    ctx->pc = 0x2ADD70u;
    // 0x2add70: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2add70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2add74: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2add74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2add78: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2add78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2add7c: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2ADD7Cu;
    SET_GPR_U32(ctx, 31, 0x2ADD84u);
    ctx->pc = 0x2ADD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADD7Cu;
    // 0x2add80: 0x8e040038  lw          $a0, 0x38($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2ADD7Cu, 0x2ADD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADD84u;
label_2add84:
    // 0x2add84: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2ADD84u;
    {
        const bool branch_taken_0x2add84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADD84u;
        // 0x2add88: 0xc6010014  lwc1        $f1, 0x14($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2add84) {
            ctx->pc = 0x2ADD98u;
            goto label_2add98;
        }
    }
    ctx->pc = 0x2ADD8Cu;
    // 0x2add8c: 0x0  nop
    ctx->pc = 0x2add8cu;
    // NOP
label_2add90:
    // 0x2add90: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x2add90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2add94: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x2add94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2add98:
    // 0x2add98: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2add98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2add9c: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x2add9cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x2adda0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2adda0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2adda4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2adda4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2adda8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2ADDA8u;
    {
        const bool branch_taken_0x2adda8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2adda8) {
            ctx->pc = 0x2ADDACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ADDA8u;
            // 0x2addac: 0x4600a507  neg.s       $f20, $f20 (Delay Slot)
            ctx->f[20] = FPU_NEG_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ADDB0u;
            goto label_2addb0;
        }
    }
    ctx->pc = 0x2ADDB0u;
label_2addb0:
    // 0x2addb0: 0x8e460080  lw          $a2, 0x80($s2)
    ctx->pc = 0x2addb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x2addb4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2addb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2addb8: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x2addb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2addbc: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ADDBCu;
    {
        const bool branch_taken_0x2addbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2ADDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADDBCu;
        // 0x2addc0: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2addbc) {
            ctx->pc = 0x2ADDD0u;
            goto label_2addd0;
        }
    }
    ctx->pc = 0x2ADDC4u;
    // 0x2addc4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2addc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2addc8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ADDC8u;
    {
        const bool branch_taken_0x2addc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2ADDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADDC8u;
        // 0x2addcc: 0x308300ff  andi        $v1, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2addc8) {
            ctx->pc = 0x2ADDD8u;
            goto label_2addd8;
        }
    }
    ctx->pc = 0x2ADDD0u;
label_2addd0:
    // 0x2addd0: 0xe65700e0  swc1        $f23, 0xE0($s2)
    ctx->pc = 0x2addd0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 224), bits); }
    // 0x2addd4: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x2addd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_2addd8:
    // 0x2addd8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2addd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2adddc: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ADDDCu;
    {
        const bool branch_taken_0x2adddc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2ADDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADDDCu;
        // 0x2adde0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adddc) {
            ctx->pc = 0x2ADDECu;
            goto label_2addec;
        }
    }
    ctx->pc = 0x2ADDE4u;
    // 0x2adde4: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ADDE4u;
    {
        const bool branch_taken_0x2adde4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2ADDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADDE4u;
        // 0x2adde8: 0x308300ff  andi        $v1, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adde4) {
            ctx->pc = 0x2ADDF4u;
            goto label_2addf4;
        }
    }
    ctx->pc = 0x2ADDECu;
label_2addec:
    // 0x2addec: 0xe65500e4  swc1        $f21, 0xE4($s2)
    ctx->pc = 0x2addecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 228), bits); }
    // 0x2addf0: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x2addf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_2addf4:
    // 0x2addf4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2addf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2addf8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ADDF8u;
    {
        const bool branch_taken_0x2addf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2ADDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADDF8u;
        // 0x2addfc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2addf8) {
            ctx->pc = 0x2ADE08u;
            goto label_2ade08;
        }
    }
    ctx->pc = 0x2ADE00u;
    // 0x2ade00: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ADE00u;
    {
        const bool branch_taken_0x2ade00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2ADE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADE00u;
        // 0x2ade04: 0x308300ff  andi        $v1, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ade00) {
            ctx->pc = 0x2ADE10u;
            goto label_2ade10;
        }
    }
    ctx->pc = 0x2ADE08u;
label_2ade08:
    // 0x2ade08: 0xae4000cc  sw          $zero, 0xCC($s2)
    ctx->pc = 0x2ade08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 204), GPR_U32(ctx, 0));
    // 0x2ade0c: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x2ade0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_2ade10:
    // 0x2ade10: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ade10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ade14: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ADE14u;
    {
        const bool branch_taken_0x2ade14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2ADE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADE14u;
        // 0x2ade18: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ade14) {
            ctx->pc = 0x2ADE24u;
            goto label_2ade24;
        }
    }
    ctx->pc = 0x2ADE1Cu;
    // 0x2ade1c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ADE1Cu;
    {
        const bool branch_taken_0x2ade1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2ADE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADE1Cu;
        // 0x2ade20: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ade1c) {
            ctx->pc = 0x2ADE2Cu;
            goto label_2ade2c;
        }
    }
    ctx->pc = 0x2ADE24u;
label_2ade24:
    // 0x2ade24: 0xae4000d0  sw          $zero, 0xD0($s2)
    ctx->pc = 0x2ade24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 0));
    // 0x2ade28: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x2ade28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2ade2c:
    // 0x2ade2c: 0x2622cec8  addiu       $v0, $s1, -0x3138
    ctx->pc = 0x2ade2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294954696));
    // 0x2ade30: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2ade30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2ade34: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x2ade34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2ade38: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2ade38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2ade3c: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2ADE3Cu;
    {
        const bool branch_taken_0x2ade3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ade3c) {
            ctx->pc = 0x2ADE40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ADE3Cu;
            // 0x2ade40: 0xc4a00020  lwc1        $f0, 0x20($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ADE5Cu;
            goto label_2ade5c;
        }
    }
    ctx->pc = 0x2ADE44u;
    // 0x2ade44: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2ade44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2ade48: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2ade48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ade4c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2ade4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2ade50: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2ADE50u;
    SET_GPR_U32(ctx, 31, 0x2ADE58u);
    ctx->pc = 0x2ADE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADE50u;
    // 0x2ade54: 0x8ca40020  lw          $a0, 0x20($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2ADE50u, 0x2ADE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADE58u;
label_2ade58:
    // 0x2ade58: 0x8e460080  lw          $a2, 0x80($s2)
    ctx->pc = 0x2ade58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
label_2ade5c:
    // 0x2ade5c: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x2ade5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2ade60: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ade60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ade64: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ADE64u;
    {
        const bool branch_taken_0x2ade64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2ADE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADE64u;
        // 0x2ade68: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ade64) {
            ctx->pc = 0x2ADE74u;
            goto label_2ade74;
        }
    }
    ctx->pc = 0x2ADE6Cu;
    // 0x2ade6c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ADE6Cu;
    {
        const bool branch_taken_0x2ade6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2ADE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADE6Cu;
        // 0x2ade70: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ade6c) {
            ctx->pc = 0x2ADE80u;
            goto label_2ade80;
        }
    }
    ctx->pc = 0x2ADE74u;
label_2ade74:
    // 0x2ade74: 0xe64000d4  swc1        $f0, 0xD4($s2)
    ctx->pc = 0x2ade74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 212), bits); }
    // 0x2ade78: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x2ade78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2ade7c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ade7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2ade80:
    // 0x2ade80: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ADE80u;
    {
        const bool branch_taken_0x2ade80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2ADE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADE80u;
        // 0x2ade84: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ade80) {
            ctx->pc = 0x2ADE90u;
            goto label_2ade90;
        }
    }
    ctx->pc = 0x2ADE88u;
    // 0x2ade88: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ADE88u;
    {
        const bool branch_taken_0x2ade88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2ADE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADE88u;
        // 0x2ade8c: 0x30c300ff  andi        $v1, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ade88) {
            ctx->pc = 0x2ADE98u;
            goto label_2ade98;
        }
    }
    ctx->pc = 0x2ADE90u;
label_2ade90:
    // 0x2ade90: 0xe65600d8  swc1        $f22, 0xD8($s2)
    ctx->pc = 0x2ade90u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 216), bits); }
    // 0x2ade94: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x2ade94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_2ade98:
    // 0x2ade98: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ade98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ade9c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ADE9Cu;
    {
        const bool branch_taken_0x2ade9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2ADEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADE9Cu;
        // 0x2adea0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ade9c) {
            ctx->pc = 0x2ADEACu;
            goto label_2adeac;
        }
    }
    ctx->pc = 0x2ADEA4u;
    // 0x2adea4: 0x146200a2  bne         $v1, $v0, . + 4 + (0xA2 << 2)
    ctx->pc = 0x2ADEA4u;
    {
        const bool branch_taken_0x2adea4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2ADEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADEA4u;
        // 0x2adea8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adea4) {
            ctx->pc = 0x2AE130u;
            goto label_2ae130;
        }
    }
    ctx->pc = 0x2ADEACu;
label_2adeac:
    // 0x2adeac: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x2ADEACu;
    {
        const bool branch_taken_0x2adeac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADEACu;
        // 0x2adeb0: 0xe65400dc  swc1        $f20, 0xDC($s2) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 220), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adeac) {
            ctx->pc = 0x2AE12Cu;
            goto label_2ae12c;
        }
    }
    ctx->pc = 0x2ADEB4u;
    // 0x2adeb4: 0x0  nop
    ctx->pc = 0x2adeb4u;
    // NOP
label_2adeb8:
    // 0x2adeb8: 0x5604009d  bnel        $s0, $a0, . + 4 + (0x9D << 2)
    ctx->pc = 0x2ADEB8u;
    {
        const bool branch_taken_0x2adeb8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 4));
        if (branch_taken_0x2adeb8) {
            ctx->pc = 0x2ADEBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ADEB8u;
            // 0x2adebc: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AE130u;
            goto label_2ae130;
        }
    }
    ctx->pc = 0x2ADEC0u;
    // 0x2adec0: 0x8e220078  lw          $v0, 0x78($s1)
    ctx->pc = 0x2adec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x2adec4: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2adec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2adec8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2adec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adecc: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x2ADECCu;
    SET_GPR_U32(ctx, 31, 0x2ADED4u);
    ctx->pc = 0x2ADED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADECCu;
    // 0x2aded0: 0xae420078  sw          $v0, 0x78($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x2ADECCu, 0x2ADED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADED4u;
label_2aded4:
    // 0x2aded4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2aded4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aded8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2aded8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2adedc: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2ADEDCu;
    SET_GPR_U32(ctx, 31, 0x2ADEE4u);
    ctx->pc = 0x2ADEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADEDCu;
    // 0x2adee0: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2ADEDCu, 0x2ADEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADEE4u;
label_2adee4:
    // 0x2adee4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2adee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adee8: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x2ADEE8u;
    SET_GPR_U32(ctx, 31, 0x2ADEF0u);
    ctx->pc = 0x2ADEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADEE8u;
    // 0x2adeec: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x2ADEE8u, 0x2ADEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADEF0u;
label_2adef0:
    // 0x2adef0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2adef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adef4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2adef4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2adef8: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2ADEF8u;
    SET_GPR_U32(ctx, 31, 0x2ADF00u);
    ctx->pc = 0x2ADEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADEF8u;
    // 0x2adefc: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2ADEF8u, 0x2ADF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADF00u;
label_2adf00:
    // 0x2adf00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2adf00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adf04: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x2ADF04u;
    SET_GPR_U32(ctx, 31, 0x2ADF0Cu);
    ctx->pc = 0x2ADF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADF04u;
    // 0x2adf08: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x2ADF04u, 0x2ADF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADF0Cu;
label_2adf0c:
    // 0x2adf0c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2adf0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adf10: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2adf10u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2adf14: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2ADF14u;
    SET_GPR_U32(ctx, 31, 0x2ADF1Cu);
    ctx->pc = 0x2ADF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADF14u;
    // 0x2adf18: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2ADF14u, 0x2ADF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADF1Cu;
label_2adf1c:
    // 0x2adf1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2adf1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adf20: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x2ADF20u;
    SET_GPR_U32(ctx, 31, 0x2ADF28u);
    ctx->pc = 0x2ADF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADF20u;
    // 0x2adf24: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x2ADF20u, 0x2ADF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADF28u;
label_2adf28:
    // 0x2adf28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2adf28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adf2c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2adf2cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2adf30: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2ADF30u;
    SET_GPR_U32(ctx, 31, 0x2ADF38u);
    ctx->pc = 0x2ADF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADF30u;
    // 0x2adf34: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2ADF30u, 0x2ADF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADF38u;
label_2adf38:
    // 0x2adf38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2adf38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adf3c: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x2ADF3Cu;
    SET_GPR_U32(ctx, 31, 0x2ADF44u);
    ctx->pc = 0x2ADF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADF3Cu;
    // 0x2adf40: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x2ADF3Cu, 0x2ADF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADF44u;
label_2adf44:
    // 0x2adf44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2adf44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adf48: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2adf48u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2adf4c: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2ADF4Cu;
    SET_GPR_U32(ctx, 31, 0x2ADF54u);
    ctx->pc = 0x2ADF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADF4Cu;
    // 0x2adf50: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2ADF4Cu, 0x2ADF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADF54u;
label_2adf54:
    // 0x2adf54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2adf54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adf58: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x2ADF58u;
    SET_GPR_U32(ctx, 31, 0x2ADF60u);
    ctx->pc = 0x2ADF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADF58u;
    // 0x2adf5c: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x2ADF58u, 0x2ADF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADF60u;
label_2adf60:
    // 0x2adf60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2adf60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adf64: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x2adf64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2adf68: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2ADF68u;
    SET_GPR_U32(ctx, 31, 0x2ADF70u);
    ctx->pc = 0x2ADF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADF68u;
    // 0x2adf6c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2ADF68u, 0x2ADF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADF70u;
label_2adf70:
    // 0x2adf70: 0x8e230080  lw          $v1, 0x80($s1)
    ctx->pc = 0x2adf70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x2adf74: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2adf74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2adf78: 0x10900004  beq         $a0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ADF78u;
    {
        const bool branch_taken_0x2adf78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 16));
        ctx->pc = 0x2ADF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADF78u;
        // 0x2adf7c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adf78) {
            ctx->pc = 0x2ADF8Cu;
            goto label_2adf8c;
        }
    }
    ctx->pc = 0x2ADF80u;
    // 0x2adf80: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2adf80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2adf84: 0x54820003  bnel        $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ADF84u;
    {
        const bool branch_taken_0x2adf84 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2adf84) {
            ctx->pc = 0x2ADF88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ADF84u;
            // 0x2adf88: 0x8e450080  lw          $a1, 0x80($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ADF94u;
            goto label_2adf94;
        }
    }
    ctx->pc = 0x2ADF8Cu;
label_2adf8c:
    // 0x2adf8c: 0xc62000e0  lwc1        $f0, 0xE0($s1)
    ctx->pc = 0x2adf8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2adf90: 0x8e450080  lw          $a1, 0x80($s2)
    ctx->pc = 0x2adf90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
label_2adf94:
    // 0x2adf94: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2adf94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2adf98: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x2adf98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2adf9c: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ADF9Cu;
    {
        const bool branch_taken_0x2adf9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2ADFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADF9Cu;
        // 0x2adfa0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adf9c) {
            ctx->pc = 0x2ADFACu;
            goto label_2adfac;
        }
    }
    ctx->pc = 0x2ADFA4u;
    // 0x2adfa4: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ADFA4u;
    {
        const bool branch_taken_0x2adfa4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2ADFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADFA4u;
        // 0x2adfa8: 0x306400ff  andi        $a0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adfa4) {
            ctx->pc = 0x2ADFB8u;
            goto label_2adfb8;
        }
    }
    ctx->pc = 0x2ADFACu;
label_2adfac:
    // 0x2adfac: 0xe64000e0  swc1        $f0, 0xE0($s2)
    ctx->pc = 0x2adfacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 224), bits); }
    // 0x2adfb0: 0x8e230080  lw          $v1, 0x80($s1)
    ctx->pc = 0x2adfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x2adfb4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2adfb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2adfb8:
    // 0x2adfb8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2adfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2adfbc: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ADFBCu;
    {
        const bool branch_taken_0x2adfbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2ADFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADFBCu;
        // 0x2adfc0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adfbc) {
            ctx->pc = 0x2ADFD0u;
            goto label_2adfd0;
        }
    }
    ctx->pc = 0x2ADFC4u;
    // 0x2adfc4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2adfc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2adfc8: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ADFC8u;
    {
        const bool branch_taken_0x2adfc8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2ADFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADFC8u;
        // 0x2adfcc: 0x30a400ff  andi        $a0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adfc8) {
            ctx->pc = 0x2ADFD8u;
            goto label_2adfd8;
        }
    }
    ctx->pc = 0x2ADFD0u;
label_2adfd0:
    // 0x2adfd0: 0xc62000e4  lwc1        $f0, 0xE4($s1)
    ctx->pc = 0x2adfd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2adfd4: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x2adfd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_2adfd8:
    // 0x2adfd8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2adfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2adfdc: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ADFDCu;
    {
        const bool branch_taken_0x2adfdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2ADFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADFDCu;
        // 0x2adfe0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adfdc) {
            ctx->pc = 0x2ADFECu;
            goto label_2adfec;
        }
    }
    ctx->pc = 0x2ADFE4u;
    // 0x2adfe4: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ADFE4u;
    {
        const bool branch_taken_0x2adfe4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2ADFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADFE4u;
        // 0x2adfe8: 0x306400ff  andi        $a0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adfe4) {
            ctx->pc = 0x2ADFF8u;
            goto label_2adff8;
        }
    }
    ctx->pc = 0x2ADFECu;
label_2adfec:
    // 0x2adfec: 0xe64000e4  swc1        $f0, 0xE4($s2)
    ctx->pc = 0x2adfecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 228), bits); }
    // 0x2adff0: 0x8e230080  lw          $v1, 0x80($s1)
    ctx->pc = 0x2adff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x2adff4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2adff4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2adff8:
    // 0x2adff8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2adff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2adffc: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ADFFCu;
    {
        const bool branch_taken_0x2adffc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AE000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADFFCu;
        // 0x2ae000: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adffc) {
            ctx->pc = 0x2AE010u;
            goto label_2ae010;
        }
    }
    ctx->pc = 0x2AE004u;
    // 0x2ae004: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ae004u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae008: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AE008u;
    {
        const bool branch_taken_0x2ae008 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AE00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE008u;
        // 0x2ae00c: 0x30a400ff  andi        $a0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae008) {
            ctx->pc = 0x2AE018u;
            goto label_2ae018;
        }
    }
    ctx->pc = 0x2AE010u;
label_2ae010:
    // 0x2ae010: 0xc62000cc  lwc1        $f0, 0xCC($s1)
    ctx->pc = 0x2ae010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ae014: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x2ae014u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_2ae018:
    // 0x2ae018: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ae018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ae01c: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AE01Cu;
    {
        const bool branch_taken_0x2ae01c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AE020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE01Cu;
        // 0x2ae020: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae01c) {
            ctx->pc = 0x2AE02Cu;
            goto label_2ae02c;
        }
    }
    ctx->pc = 0x2AE024u;
    // 0x2ae024: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AE024u;
    {
        const bool branch_taken_0x2ae024 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AE028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE024u;
        // 0x2ae028: 0x306400ff  andi        $a0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae024) {
            ctx->pc = 0x2AE038u;
            goto label_2ae038;
        }
    }
    ctx->pc = 0x2AE02Cu;
label_2ae02c:
    // 0x2ae02c: 0xe64000cc  swc1        $f0, 0xCC($s2)
    ctx->pc = 0x2ae02cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 204), bits); }
    // 0x2ae030: 0x8e230080  lw          $v1, 0x80($s1)
    ctx->pc = 0x2ae030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x2ae034: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2ae034u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2ae038:
    // 0x2ae038: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ae038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ae03c: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AE03Cu;
    {
        const bool branch_taken_0x2ae03c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AE040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE03Cu;
        // 0x2ae040: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae03c) {
            ctx->pc = 0x2AE050u;
            goto label_2ae050;
        }
    }
    ctx->pc = 0x2AE044u;
    // 0x2ae044: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ae044u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae048: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AE048u;
    {
        const bool branch_taken_0x2ae048 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AE04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE048u;
        // 0x2ae04c: 0x30a400ff  andi        $a0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae048) {
            ctx->pc = 0x2AE058u;
            goto label_2ae058;
        }
    }
    ctx->pc = 0x2AE050u;
label_2ae050:
    // 0x2ae050: 0xc62000d0  lwc1        $f0, 0xD0($s1)
    ctx->pc = 0x2ae050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ae054: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x2ae054u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_2ae058:
    // 0x2ae058: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ae058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ae05c: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AE05Cu;
    {
        const bool branch_taken_0x2ae05c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AE060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE05Cu;
        // 0x2ae060: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae05c) {
            ctx->pc = 0x2AE06Cu;
            goto label_2ae06c;
        }
    }
    ctx->pc = 0x2AE064u;
    // 0x2ae064: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AE064u;
    {
        const bool branch_taken_0x2ae064 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AE068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE064u;
        // 0x2ae068: 0x306400ff  andi        $a0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae064) {
            ctx->pc = 0x2AE078u;
            goto label_2ae078;
        }
    }
    ctx->pc = 0x2AE06Cu;
label_2ae06c:
    // 0x2ae06c: 0xe64000d0  swc1        $f0, 0xD0($s2)
    ctx->pc = 0x2ae06cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 208), bits); }
    // 0x2ae070: 0x8e230080  lw          $v1, 0x80($s1)
    ctx->pc = 0x2ae070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x2ae074: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2ae074u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2ae078:
    // 0x2ae078: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ae078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ae07c: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AE07Cu;
    {
        const bool branch_taken_0x2ae07c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AE080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE07Cu;
        // 0x2ae080: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae07c) {
            ctx->pc = 0x2AE090u;
            goto label_2ae090;
        }
    }
    ctx->pc = 0x2AE084u;
    // 0x2ae084: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ae084u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae088: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AE088u;
    {
        const bool branch_taken_0x2ae088 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AE08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE088u;
        // 0x2ae08c: 0x30a400ff  andi        $a0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae088) {
            ctx->pc = 0x2AE098u;
            goto label_2ae098;
        }
    }
    ctx->pc = 0x2AE090u;
label_2ae090:
    // 0x2ae090: 0xc62000d4  lwc1        $f0, 0xD4($s1)
    ctx->pc = 0x2ae090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ae094: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x2ae094u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_2ae098:
    // 0x2ae098: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ae098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ae09c: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AE09Cu;
    {
        const bool branch_taken_0x2ae09c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AE0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE09Cu;
        // 0x2ae0a0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae09c) {
            ctx->pc = 0x2AE0ACu;
            goto label_2ae0ac;
        }
    }
    ctx->pc = 0x2AE0A4u;
    // 0x2ae0a4: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AE0A4u;
    {
        const bool branch_taken_0x2ae0a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AE0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE0A4u;
        // 0x2ae0a8: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae0a4) {
            ctx->pc = 0x2AE0B8u;
            goto label_2ae0b8;
        }
    }
    ctx->pc = 0x2AE0ACu;
label_2ae0ac:
    // 0x2ae0ac: 0xe64000d4  swc1        $f0, 0xD4($s2)
    ctx->pc = 0x2ae0acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 212), bits); }
    // 0x2ae0b0: 0x8e230080  lw          $v1, 0x80($s1)
    ctx->pc = 0x2ae0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x2ae0b4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2ae0b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2ae0b8:
    // 0x2ae0b8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ae0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ae0bc: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AE0BCu;
    {
        const bool branch_taken_0x2ae0bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AE0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE0BCu;
        // 0x2ae0c0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae0bc) {
            ctx->pc = 0x2AE0D0u;
            goto label_2ae0d0;
        }
    }
    ctx->pc = 0x2AE0C4u;
    // 0x2ae0c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ae0c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae0c8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AE0C8u;
    {
        const bool branch_taken_0x2ae0c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AE0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE0C8u;
        // 0x2ae0cc: 0x30a300ff  andi        $v1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae0c8) {
            ctx->pc = 0x2AE0D8u;
            goto label_2ae0d8;
        }
    }
    ctx->pc = 0x2AE0D0u;
label_2ae0d0:
    // 0x2ae0d0: 0xc62000d8  lwc1        $f0, 0xD8($s1)
    ctx->pc = 0x2ae0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ae0d4: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x2ae0d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_2ae0d8:
    // 0x2ae0d8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ae0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ae0dc: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AE0DCu;
    {
        const bool branch_taken_0x2ae0dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AE0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE0DCu;
        // 0x2ae0e0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae0dc) {
            ctx->pc = 0x2AE0ECu;
            goto label_2ae0ec;
        }
    }
    ctx->pc = 0x2AE0E4u;
    // 0x2ae0e4: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AE0E4u;
    {
        const bool branch_taken_0x2ae0e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ae0e4) {
            ctx->pc = 0x2AE0E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AE0E4u;
            // 0x2ae0e8: 0x92230080  lbu         $v1, 0x80($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AE0F4u;
            goto label_2ae0f4;
        }
    }
    ctx->pc = 0x2AE0ECu;
label_2ae0ec:
    // 0x2ae0ec: 0xe64000d8  swc1        $f0, 0xD8($s2)
    ctx->pc = 0x2ae0ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 216), bits); }
    // 0x2ae0f0: 0x92230080  lbu         $v1, 0x80($s1)
    ctx->pc = 0x2ae0f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 128)));
label_2ae0f4:
    // 0x2ae0f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ae0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ae0f8: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AE0F8u;
    {
        const bool branch_taken_0x2ae0f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AE0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE0F8u;
        // 0x2ae0fc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae0f8) {
            ctx->pc = 0x2AE10Cu;
            goto label_2ae10c;
        }
    }
    ctx->pc = 0x2AE100u;
    // 0x2ae100: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ae100u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae104: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AE104u;
    {
        const bool branch_taken_0x2ae104 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AE108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE104u;
        // 0x2ae108: 0x30a300ff  andi        $v1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae104) {
            ctx->pc = 0x2AE114u;
            goto label_2ae114;
        }
    }
    ctx->pc = 0x2AE10Cu;
label_2ae10c:
    // 0x2ae10c: 0xc62000dc  lwc1        $f0, 0xDC($s1)
    ctx->pc = 0x2ae10cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ae110: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x2ae110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_2ae114:
    // 0x2ae114: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ae114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ae118: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AE118u;
    {
        const bool branch_taken_0x2ae118 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AE11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE118u;
        // 0x2ae11c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae118) {
            ctx->pc = 0x2AE128u;
            goto label_2ae128;
        }
    }
    ctx->pc = 0x2AE120u;
    // 0x2ae120: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AE120u;
    {
        const bool branch_taken_0x2ae120 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AE124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE120u;
        // 0x2ae124: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae120) {
            ctx->pc = 0x2AE130u;
            goto label_2ae130;
        }
    }
    ctx->pc = 0x2AE128u;
label_2ae128:
    // 0x2ae128: 0xe64000dc  swc1        $f0, 0xDC($s2)
    ctx->pc = 0x2ae128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 220), bits); }
label_2ae12c:
    // 0x2ae12c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2ae12cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2ae130:
    // 0x2ae130: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2ae130u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ae134: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2ae134u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ae138: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2ae138u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2ae13c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2ae13cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ae140: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x2ae140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2ae144: 0xc7b70058  lwc1        $f23, 0x58($sp)
    ctx->pc = 0x2ae144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2ae148: 0xc7b60050  lwc1        $f22, 0x50($sp)
    ctx->pc = 0x2ae148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2ae14c: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x2ae14cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2ae150: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x2ae150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ae154: 0x3e00008  jr          $ra
    ctx->pc = 0x2AE154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AE158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE154u;
        // 0x2ae158: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AE154u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AE15Cu;
    // 0x2ae15c: 0x0  nop
    ctx->pc = 0x2ae15cu;
    // NOP
    ctx->pc = 0x2ae160u;
}
