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

// Function: sub_0021DF58
// Address: 0x21df58 - 0x21e0b0
void sub_0021DF58_0x21df58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021DF58_0x21df58");
#endif

    switch (ctx->pc) {
        case 0x21df60u: goto label_21df60;
        case 0x21e008u: goto label_21e008;
        case 0x21e038u: goto label_21e038;
        case 0x21e064u: goto label_21e064;
        case 0x21e070u: goto label_21e070;
        case 0x21e088u: goto label_21e088;
        default: break;
    }

    ctx->pc = 0x21df58u;

    // 0x21df58: 0x3e00008  jr          $ra
    ctx->pc = 0x21DF58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21DF58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21DF60u;
label_21df60:
    // 0x21df60: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x21df60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x21df64: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x21df64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x21df68: 0xffb00090  sd          $s0, 0x90($sp)
    ctx->pc = 0x21df68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
    // 0x21df6c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x21df6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21df70: 0xffb300a8  sd          $s3, 0xA8($sp)
    ctx->pc = 0x21df70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 19));
    // 0x21df74: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x21df74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21df78: 0xffb400b0  sd          $s4, 0xB0($sp)
    ctx->pc = 0x21df78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
    // 0x21df7c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x21df7cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21df80: 0xffb500b8  sd          $s5, 0xB8($sp)
    ctx->pc = 0x21df80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 21));
    // 0x21df84: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x21df84u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21df88: 0xffb10098  sd          $s1, 0x98($sp)
    ctx->pc = 0x21df88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 17));
    // 0x21df8c: 0x244983c0  addiu       $t1, $v0, -0x7C40
    ctx->pc = 0x21df8cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935488));
    // 0x21df90: 0xffb200a0  sd          $s2, 0xA0($sp)
    ctx->pc = 0x21df90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
    // 0x21df94: 0x2407270f  addiu       $a3, $zero, 0x270F
    ctx->pc = 0x21df94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
    // 0x21df98: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x21df98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x21df9c: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x21df9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x21dfa0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x21dfa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x21dfa4: 0x8d3100e4  lw          $s1, 0xE4($t1)
    ctx->pc = 0x21dfa4u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x3A84A4u));
    // 0x21dfa8: 0x8d3200e0  lw          $s2, 0xE0($t1)
    ctx->pc = 0x21dfa8u;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x3A84A0u));
    // 0x21dfac: 0x2a222710  slti        $v0, $s1, 0x2710
    ctx->pc = 0x21dfacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10000) ? 1 : 0);
    // 0x21dfb0: 0xe2880a  movz        $s1, $a3, $v0
    ctx->pc = 0x21dfb0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 7));
    // 0x21dfb4: 0x2e430014  sltiu       $v1, $s2, 0x14
    ctx->pc = 0x21dfb4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x21dfb8: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x21dfb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x21dfbc: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x21DFBCu;
    {
        const bool branch_taken_0x21dfbc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DFBCu;
        // 0x21dfc0: 0x103900a  movz        $s2, $t0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dfbc) {
            ctx->pc = 0x21DFF4u;
            goto label_21dff4;
        }
    }
    ctx->pc = 0x21DFC4u;
    // 0x21dfc4: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x21DFC4u;
    {
        const bool branch_taken_0x21dfc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21DFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DFC4u;
        // 0x21dfc8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dfc4) {
            ctx->pc = 0x21DFF4u;
            goto label_21dff4;
        }
    }
    ctx->pc = 0x21DFCCu;
    // 0x21dfcc: 0x2a22000a  slti        $v0, $s1, 0xA
    ctx->pc = 0x21dfccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x21dfd0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21DFD0u;
    {
        const bool branch_taken_0x21dfd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21DFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DFD0u;
        // 0x21dfd4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dfd0) {
            ctx->pc = 0x21DFF4u;
            goto label_21dff4;
        }
    }
    ctx->pc = 0x21DFD8u;
    // 0x21dfd8: 0x2a220064  slti        $v0, $s1, 0x64
    ctx->pc = 0x21dfd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x21dfdc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21DFDCu;
    {
        const bool branch_taken_0x21dfdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21DFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DFDCu;
        // 0x21dfe0: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dfdc) {
            ctx->pc = 0x21DFF4u;
            goto label_21dff4;
        }
    }
    ctx->pc = 0x21DFE4u;
    // 0x21dfe4: 0x2a2303e8  slti        $v1, $s1, 0x3E8
    ctx->pc = 0x21dfe4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)1000) ? 1 : 0);
    // 0x21dfe8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x21dfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21dfec: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x21dfecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21dff0: 0x43800a  movz        $s0, $v0, $v1
    ctx->pc = 0x21dff0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
label_21dff4:
    // 0x21dff4: 0x8d230048  lw          $v1, 0x48($t1)
    ctx->pc = 0x21dff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 72)));
    // 0x21dff8: 0x8d220040  lw          $v0, 0x40($t1)
    ctx->pc = 0x21dff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 64)));
    // 0x21dffc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21dffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21e000: 0xc08753c  jal         func_21D4F0
    ctx->pc = 0x21E000u;
    SET_GPR_U32(ctx, 31, 0x21E008u);
    ctx->pc = 0x21E004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E000u;
    // 0x21e004: 0xafa20080  sw          $v0, 0x80($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D4F0u, 0x21E000u, 0x21E008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E008u;
label_21e008:
    // 0x21e008: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x21e008u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x21e00c: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x21e00cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x21e010: 0x3c07003b  lui         $a3, 0x3B
    ctx->pc = 0x21e010u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)59 << 16));
    // 0x21e014: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x21e014u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x21e018: 0x8ce7c0e0  lw          $a3, -0x3F20($a3)
    ctx->pc = 0x21e018u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294951136)));
    // 0x21e01c: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x21e01cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x21e020: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x21e020u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
    // 0x21e024: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x21e024u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x21e028: 0x8cc6c088  lw          $a2, -0x3F78($a2)
    ctx->pc = 0x21e028u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294951048)));
    // 0x21e02c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x21e02cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e030: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x21E030u;
    SET_GPR_U32(ctx, 31, 0x21E038u);
    ctx->pc = 0x21E034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E030u;
    // 0x21e034: 0x24a52cd8  addiu       $a1, $a1, 0x2CD8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x21E030u, 0x21E038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E038u;
label_21e038:
    // 0x21e038: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x21e038u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x21e03c: 0x3c0880ff  lui         $t0, 0x80FF
    ctx->pc = 0x21e03cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)33023 << 16));
    // 0x21e040: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x21e040u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e044: 0x280582d  daddu       $t3, $s4, $zero
    ctx->pc = 0x21e044u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e048: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x21e048u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e04c: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x21e04cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x21e050: 0x2409006e  addiu       $t1, $zero, 0x6E
    ctx->pc = 0x21e050u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x21e054: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x21e054u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x21e058: 0x24846d20  addiu       $a0, $a0, 0x6D20
    ctx->pc = 0x21e058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27936));
    // 0x21e05c: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x21E05Cu;
    SET_GPR_U32(ctx, 31, 0x21E064u);
    ctx->pc = 0x21E060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E05Cu;
    // 0x21e060: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x21E05Cu, 0x21E064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E064u;
label_21e064:
    // 0x21e064: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21e064u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e068: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x21E068u;
    SET_GPR_U32(ctx, 31, 0x21E070u);
    ctx->pc = 0x21E06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E068u;
    // 0x21e06c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x21E068u, 0x21E070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E070u;
label_21e070:
    // 0x21e070: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x21e070u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x21e074: 0x8fa50084  lw          $a1, 0x84($sp)
    ctx->pc = 0x21e074u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x21e078: 0x24846d30  addiu       $a0, $a0, 0x6D30
    ctx->pc = 0x21e078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27952));
    // 0x21e07c: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x21e07cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x21e080: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x21E080u;
    SET_GPR_U32(ctx, 31, 0x21E088u);
    ctx->pc = 0x21E084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E080u;
    // 0x21e084: 0x8fa7008c  lw          $a3, 0x8C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x21E080u, 0x21E088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E088u;
label_21e088:
    // 0x21e088: 0xdfb00090  ld          $s0, 0x90($sp)
    ctx->pc = 0x21e088u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x21e08c: 0xdfb10098  ld          $s1, 0x98($sp)
    ctx->pc = 0x21e08cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x21e090: 0xdfb200a0  ld          $s2, 0xA0($sp)
    ctx->pc = 0x21e090u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x21e094: 0xdfb300a8  ld          $s3, 0xA8($sp)
    ctx->pc = 0x21e094u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x21e098: 0xdfb400b0  ld          $s4, 0xB0($sp)
    ctx->pc = 0x21e098u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x21e09c: 0xdfb500b8  ld          $s5, 0xB8($sp)
    ctx->pc = 0x21e09cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x21e0a0: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x21e0a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x21e0a4: 0x3e00008  jr          $ra
    ctx->pc = 0x21E0A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E0A4u;
        // 0x21e0a8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E0A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21E0ACu;
    // 0x21e0ac: 0x0  nop
    ctx->pc = 0x21e0acu;
    // NOP
    ctx->pc = 0x21e0b0u;
}
