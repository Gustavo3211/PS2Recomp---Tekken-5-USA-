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

// Function: sub_0028ABF8
// Address: 0x28abf8 - 0x28add8
void sub_0028ABF8_0x28abf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028ABF8_0x28abf8");
#endif

    switch (ctx->pc) {
        case 0x28ac20u: goto label_28ac20;
        case 0x28ac74u: goto label_28ac74;
        case 0x28ac88u: goto label_28ac88;
        case 0x28ac94u: goto label_28ac94;
        case 0x28acd8u: goto label_28acd8;
        case 0x28ace4u: goto label_28ace4;
        case 0x28acf4u: goto label_28acf4;
        case 0x28ad14u: goto label_28ad14;
        case 0x28ad20u: goto label_28ad20;
        case 0x28ad38u: goto label_28ad38;
        case 0x28ad44u: goto label_28ad44;
        case 0x28ad5cu: goto label_28ad5c;
        case 0x28ad68u: goto label_28ad68;
        case 0x28ad90u: goto label_28ad90;
        case 0x28ada8u: goto label_28ada8;
        case 0x28adb0u: goto label_28adb0;
        default: break;
    }

    ctx->pc = 0x28abf8u;

    // 0x28abf8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x28abf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x28abfc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x28abfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x28ac00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28ac00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28ac04: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x28ac04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x28ac08: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x28ac08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x28ac0c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x28ac0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x28ac10: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x28ac10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x28ac14: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x28ac14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x28ac18: 0xc0a5ab2  jal         func_296AC8
    ctx->pc = 0x28AC18u;
    SET_GPR_U32(ctx, 31, 0x28AC20u);
    ctx->pc = 0x28AC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AC18u;
    // 0x28ac1c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296AC8u, 0x28AC18u, 0x28AC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AC20u;
label_28ac20:
    // 0x28ac20: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x28ac20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x28ac24: 0x3c040006  lui         $a0, 0x6
    ctx->pc = 0x28ac24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)6 << 16));
    // 0x28ac28: 0x26300158  addiu       $s0, $s1, 0x158
    ctx->pc = 0x28ac28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 344));
    // 0x28ac2c: 0x26350160  addiu       $s5, $s1, 0x160
    ctx->pc = 0x28ac2cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
    // 0x28ac30: 0x26340168  addiu       $s4, $s1, 0x168
    ctx->pc = 0x28ac30u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 360));
    // 0x28ac34: 0x26330170  addiu       $s3, $s1, 0x170
    ctx->pc = 0x28ac34u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 368));
    // 0x28ac38: 0x26320178  addiu       $s2, $s1, 0x178
    ctx->pc = 0x28ac38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 376));
    // 0x28ac3c: 0x2463e068  addiu       $v1, $v1, -0x1F98
    ctx->pc = 0x28ac3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959208));
    // 0x28ac40: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x28ac40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x28ac44: 0x3484d8c0  ori         $a0, $a0, 0xD8C0
    ctx->pc = 0x28ac44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55488);
    // 0x28ac48: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x28ac48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x28ac4c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x28ac4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x28ac50: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x28ac50u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
    // 0x28ac54: 0xaea00004  sw          $zero, 0x4($s5)
    ctx->pc = 0x28ac54u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
    // 0x28ac58: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x28ac58u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
    // 0x28ac5c: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x28ac5cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
    // 0x28ac60: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x28ac60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x28ac64: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x28ac64u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    // 0x28ac68: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x28ac68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x28ac6c: 0xc04058e  jal         func_101638
    ctx->pc = 0x28AC6Cu;
    SET_GPR_U32(ctx, 31, 0x28AC74u);
    ctx->pc = 0x28AC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AC6Cu;
    // 0x28ac70: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101638u, 0x28AC6Cu, 0x28AC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AC74u;
label_28ac74:
    // 0x28ac74: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x28ac74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ac78: 0x24040027  addiu       $a0, $zero, 0x27
    ctx->pc = 0x28ac78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x28ac7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28ac7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ac80: 0xc089636  jal         func_2258D8
    ctx->pc = 0x28AC80u;
    SET_GPR_U32(ctx, 31, 0x28AC88u);
    ctx->pc = 0x28AC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AC80u;
    // 0x28ac84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2258D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2258D8u, 0x28AC80u, 0x28AC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AC88u;
label_28ac88:
    // 0x28ac88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28ac88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ac8c: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x28AC8Cu;
    SET_GPR_U32(ctx, 31, 0x28AC94u);
    ctx->pc = 0x28AC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AC8Cu;
    // 0x28ac90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x28AC8Cu, 0x28AC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AC94u;
label_28ac94:
    // 0x28ac94: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x28ac94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x28ac98: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x28ac98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x28ac9c: 0x24639b50  addiu       $v1, $v1, -0x64B0
    ctx->pc = 0x28ac9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941520));
    // 0x28aca0: 0x2484e038  addiu       $a0, $a0, -0x1FC8
    ctx->pc = 0x28aca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959160));
    // 0x28aca4: 0xac430038  sw          $v1, 0x38($v0)
    ctx->pc = 0x28aca4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 3));
    // 0x28aca8: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x28aca8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x28acac: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x28acacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x28acb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28acb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28acb4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x28acb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x28acb8: 0x24c69b68  addiu       $a2, $a2, -0x6498
    ctx->pc = 0x28acb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941544));
    // 0x28acbc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28acbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28acc0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x28acc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x28acc4: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x28acc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x28acc8: 0xae260038  sw          $a2, 0x38($s1)
    ctx->pc = 0x28acc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 6));
    // 0x28accc: 0xae200150  sw          $zero, 0x150($s1)
    ctx->pc = 0x28acccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 336), GPR_U32(ctx, 0));
    // 0x28acd0: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x28ACD0u;
    SET_GPR_U32(ctx, 31, 0x28ACD8u);
    ctx->pc = 0x28ACD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28ACD0u;
    // 0x28acd4: 0xae200154  sw          $zero, 0x154($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 340), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x28ACD0u, 0x28ACD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28ACD8u;
label_28acd8:
    // 0x28acd8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28acd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28acdc: 0xc0b5234  jal         func_2D48D0
    ctx->pc = 0x28ACDCu;
    SET_GPR_U32(ctx, 31, 0x28ACE4u);
    ctx->pc = 0x28ACE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28ACDCu;
    // 0x28ace0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D48D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D48D0u, 0x28ACDCu, 0x28ACE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28ACE4u;
label_28ace4:
    // 0x28ace4: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x28ace4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    // 0x28ace8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x28ace8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x28acec: 0xc0a8a76  jal         func_2A29D8
    ctx->pc = 0x28ACECu;
    SET_GPR_U32(ctx, 31, 0x28ACF4u);
    ctx->pc = 0x28ACF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28ACECu;
    // 0x28acf0: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A29D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A29D8u, 0x28ACECu, 0x28ACF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28ACF4u;
label_28acf4:
    // 0x28acf4: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x28ACF4u;
    {
        const bool branch_taken_0x28acf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28ACF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ACF4u;
        // 0x28acf8: 0x3c03003b  lui         $v1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28acf4) {
            ctx->pc = 0x28ADB0u;
            goto label_28adb0;
        }
    }
    ctx->pc = 0x28ACFCu;
    // 0x28acfc: 0x8c6283c0  lw          $v0, -0x7C40($v1)
    ctx->pc = 0x28acfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294935488)));
    // 0x28ad00: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x28ad00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x28ad04: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x28AD04u;
    {
        const bool branch_taken_0x28ad04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AD04u;
        // 0x28ad08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ad04) {
            ctx->pc = 0x28AD30u;
            goto label_28ad30;
        }
    }
    ctx->pc = 0x28AD0Cu;
    // 0x28ad0c: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x28AD0Cu;
    SET_GPR_U32(ctx, 31, 0x28AD14u);
    ctx->pc = 0x28AD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AD0Cu;
    // 0x28ad10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x28AD0Cu, 0x28AD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AD14u;
label_28ad14:
    // 0x28ad14: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28ad14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ad18: 0xc0a8aa2  jal         func_2A2A88
    ctx->pc = 0x28AD18u;
    SET_GPR_U32(ctx, 31, 0x28AD20u);
    ctx->pc = 0x28AD1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AD18u;
    // 0x28ad1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2A88u, 0x28AD18u, 0x28AD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AD20u;
label_28ad20:
    // 0x28ad20: 0xae900000  sw          $s0, 0x0($s4)
    ctx->pc = 0x28ad20u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 16));
    // 0x28ad24: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x28ad24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x28ad28: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x28AD28u;
    {
        const bool branch_taken_0x28ad28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AD28u;
        // 0x28ad2c: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ad28) {
            ctx->pc = 0x28AD50u;
            goto label_28ad50;
        }
    }
    ctx->pc = 0x28AD30u;
label_28ad30:
    // 0x28ad30: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x28AD30u;
    SET_GPR_U32(ctx, 31, 0x28AD38u);
    ctx->pc = 0x28AD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AD30u;
    // 0x28ad34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x28AD30u, 0x28AD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AD38u;
label_28ad38:
    // 0x28ad38: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28ad38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ad3c: 0xc0a8c6e  jal         func_2A31B8
    ctx->pc = 0x28AD3Cu;
    SET_GPR_U32(ctx, 31, 0x28AD44u);
    ctx->pc = 0x28AD40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AD3Cu;
    // 0x28ad40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A31B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A31B8u, 0x28AD3Cu, 0x28AD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AD44u;
label_28ad44:
    // 0x28ad44: 0xae700000  sw          $s0, 0x0($s3)
    ctx->pc = 0x28ad44u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
    // 0x28ad48: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x28ad48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x28ad4c: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x28ad4cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_28ad50:
    // 0x28ad50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28ad50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ad54: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x28AD54u;
    SET_GPR_U32(ctx, 31, 0x28AD5Cu);
    ctx->pc = 0x28AD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AD54u;
    // 0x28ad58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x28AD54u, 0x28AD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AD5Cu;
label_28ad5c:
    // 0x28ad5c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28ad5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ad60: 0xc0a8f8a  jal         func_2A3E28
    ctx->pc = 0x28AD60u;
    SET_GPR_U32(ctx, 31, 0x28AD68u);
    ctx->pc = 0x28AD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AD60u;
    // 0x28ad64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3E28u, 0x28AD60u, 0x28AD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AD68u;
label_28ad68:
    // 0x28ad68: 0xaeb00000  sw          $s0, 0x0($s5)
    ctx->pc = 0x28ad68u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 16));
    // 0x28ad6c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x28ad6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x28ad70: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x28AD70u;
    {
        const bool branch_taken_0x28ad70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AD70u;
        // 0x28ad74: 0xaea20004  sw          $v0, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ad70) {
            ctx->pc = 0x28ADB0u;
            goto label_28adb0;
        }
    }
    ctx->pc = 0x28AD78u;
    // 0x28ad78: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x28ad78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x28ad7c: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x28ad7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x28ad80: 0x2442e330  addiu       $v0, $v0, -0x1CD0
    ctx->pc = 0x28ad80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959920));
    // 0x28ad84: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x28ad84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28ad88: 0xc0a9e40  jal         func_2A7900
    ctx->pc = 0x28AD88u;
    SET_GPR_U32(ctx, 31, 0x28AD90u);
    ctx->pc = 0x28AD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AD88u;
    // 0x28ad8c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7900u, 0x28AD88u, 0x28AD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AD90u;
label_28ad90:
    // 0x28ad90: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x28ad90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x28ad94: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x28ad94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x28ad98: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x28ad98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x28ad9c: 0x2484fdbc  addiu       $a0, $a0, -0x244
    ctx->pc = 0x28ad9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966716));
    // 0x28ada0: 0xc048b90  jal         func_122E40
    ctx->pc = 0x28ADA0u;
    SET_GPR_U32(ctx, 31, 0x28ADA8u);
    ctx->pc = 0x28ADA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28ADA0u;
    // 0x28ada4: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x28ADA0u, 0x28ADA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28ADA8u;
label_28ada8:
    // 0x28ada8: 0xc049a82  jal         func_126A08
    ctx->pc = 0x28ADA8u;
    SET_GPR_U32(ctx, 31, 0x28ADB0u);
    ctx->pc = 0x126A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126A08u, 0x28ADA8u, 0x28ADB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28ADB0u;
label_28adb0:
    // 0x28adb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28adb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28adb4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x28adb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28adb8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x28adb8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28adbc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x28adbcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x28adc0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x28adc0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28adc4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x28adc4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x28adc8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x28adc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28adcc: 0x3e00008  jr          $ra
    ctx->pc = 0x28ADCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28ADD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ADCCu;
        // 0x28add0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28ADCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28ADD4u;
    // 0x28add4: 0x0  nop
    ctx->pc = 0x28add4u;
    // NOP
    ctx->pc = 0x28add8u;
}
