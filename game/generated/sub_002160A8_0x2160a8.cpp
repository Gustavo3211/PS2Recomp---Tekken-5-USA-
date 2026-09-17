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

// Function: sub_002160A8
// Address: 0x2160a8 - 0x2162a8
void sub_002160A8_0x2160a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002160A8_0x2160a8");
#endif

    switch (ctx->pc) {
        case 0x2160c8u: goto label_2160c8;
        case 0x2161a8u: goto label_2161a8;
        case 0x2161b0u: goto label_2161b0;
        case 0x2161f4u: goto label_2161f4;
        case 0x216228u: goto label_216228;
        case 0x21625cu: goto label_21625c;
        case 0x21627cu: goto label_21627c;
        default: break;
    }

    ctx->pc = 0x2160a8u;

    // 0x2160a8: 0x8f82c91c  lw          $v0, -0x36E4($gp)
    ctx->pc = 0x2160a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953244)));
    // 0x2160ac: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2160acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2160b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2160b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2160b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2160b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2160b8: 0x1440005d  bnez        $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x2160B8u;
    {
        const bool branch_taken_0x2160b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2160BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2160B8u;
        // 0x2160bc: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2160b8) {
            ctx->pc = 0x216230u;
            goto label_216230;
        }
    }
    ctx->pc = 0x2160C0u;
    // 0x2160c0: 0xc0a6100  jal         func_298400
    ctx->pc = 0x2160C0u;
    SET_GPR_U32(ctx, 31, 0x2160C8u);
    ctx->pc = 0x298400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298400u, 0x2160C0u, 0x2160C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2160C8u;
label_2160c8:
    // 0x2160c8: 0x1440005a  bnez        $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x2160C8u;
    {
        const bool branch_taken_0x2160c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2160CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2160C8u;
        // 0x2160cc: 0x3c04003c  lui         $a0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2160c8) {
            ctx->pc = 0x216234u;
            goto label_216234;
        }
    }
    ctx->pc = 0x2160D0u;
    // 0x2160d0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2160d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2160d4: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x2160d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x2160d8: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x2160d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x2160dc: 0x2ca40008  sltiu       $a0, $a1, 0x8
    ctx->pc = 0x2160dcu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2160e0: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x2160e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2160e4: 0x1080005d  beqz        $a0, . + 4 + (0x5D << 2)
    ctx->pc = 0x2160E4u;
    {
        const bool branch_taken_0x2160e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2160E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2160E4u;
        // 0x2160e8: 0x246b0001  addiu       $t3, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2160e4) {
            ctx->pc = 0x21625Cu;
            goto label_21625c;
        }
    }
    ctx->pc = 0x2160ECu;
    // 0x2160ec: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2160ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2160f0: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x2160f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x2160f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2160f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2160f8: 0x8c6359f0  lw          $v1, 0x59F0($v1)
    ctx->pc = 0x2160f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 23024)));
    // 0x2160fc: 0x600008  jr          $v1
    ctx->pc = 0x2160FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x216108u: goto label_216108;
            case 0x216160u: goto label_216160;
            case 0x216178u: goto label_216178;
            case 0x2161B8u: goto label_2161b8;
            case 0x216200u: goto label_216200;
            case 0x21625Cu: goto label_21625c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2160FCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x216104u;
    // 0x216104: 0x0  nop
    ctx->pc = 0x216104u;
    // NOP
label_216108:
    // 0x216108: 0x9203002b  lbu         $v1, 0x2B($s0)
    ctx->pc = 0x216108u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 43)));
    // 0x21610c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21610cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x216110: 0x14620053  bne         $v1, $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x216110u;
    {
        const bool branch_taken_0x216110 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x216114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216110u;
        // 0x216114: 0x8f82a530  lw          $v0, -0x5AD0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944048)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216110) {
            ctx->pc = 0x216260u;
            goto label_216260;
        }
    }
    ctx->pc = 0x216118u;
    // 0x216118: 0x92020028  lbu         $v0, 0x28($s0)
    ctx->pc = 0x216118u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x21611c: 0x14c20008  bne         $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21611Cu;
    {
        const bool branch_taken_0x21611c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x216120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21611Cu;
        // 0x216120: 0x28c203e8  slti        $v0, $a2, 0x3E8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)1000) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21611c) {
            ctx->pc = 0x216140u;
            goto label_216140;
        }
    }
    ctx->pc = 0x216124u;
    // 0x216124: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x216124u;
    {
        const bool branch_taken_0x216124 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x216128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216124u;
        // 0x216128: 0x240b03e7  addiu       $t3, $zero, 0x3E7 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216124) {
            ctx->pc = 0x216144u;
            goto label_216144;
        }
    }
    ctx->pc = 0x21612Cu;
    // 0x21612c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x21612cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x216130: 0x3c0780ff  lui         $a3, 0x80FF
    ctx->pc = 0x216130u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)33023 << 16));
    // 0x216134: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x216134u;
    {
        const bool branch_taken_0x216134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216134u;
        // 0x216138: 0x24845958  addiu       $a0, $a0, 0x5958 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22872));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216134) {
            ctx->pc = 0x21620Cu;
            goto label_21620c;
        }
    }
    ctx->pc = 0x21613Cu;
    // 0x21613c: 0x0  nop
    ctx->pc = 0x21613cu;
    // NOP
label_216140:
    // 0x216140: 0x240b03e7  addiu       $t3, $zero, 0x3E7
    ctx->pc = 0x216140u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
label_216144:
    // 0x216144: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x216144u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x216148: 0x3c0780ff  lui         $a3, 0x80FF
    ctx->pc = 0x216148u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)33023 << 16));
    // 0x21614c: 0xc2580b  movn        $t3, $a2, $v0
    ctx->pc = 0x21614cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 6));
    // 0x216150: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x216150u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x216154: 0x24845970  addiu       $a0, $a0, 0x5970
    ctx->pc = 0x216154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22896));
    // 0x216158: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x216158u;
    {
        const bool branch_taken_0x216158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21615Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216158u;
        // 0x21615c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216158) {
            ctx->pc = 0x2161E0u;
            goto label_2161e0;
        }
    }
    ctx->pc = 0x216160u;
label_216160:
    // 0x216160: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x216160u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x216164: 0x3c0780ff  lui         $a3, 0x80FF
    ctx->pc = 0x216164u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)33023 << 16));
    // 0x216168: 0x24845988  addiu       $a0, $a0, 0x5988
    ctx->pc = 0x216168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22920));
    // 0x21616c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x21616Cu;
    {
        const bool branch_taken_0x21616c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21616Cu;
        // 0x216170: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21616c) {
            ctx->pc = 0x2161DCu;
            goto label_2161dc;
        }
    }
    ctx->pc = 0x216174u;
    // 0x216174: 0x0  nop
    ctx->pc = 0x216174u;
    // NOP
label_216178:
    // 0x216178: 0x920b00fc  lbu         $t3, 0xFC($s0)
    ctx->pc = 0x216178u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 252)));
    // 0x21617c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x21617cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x216180: 0x3c0780ff  lui         $a3, 0x80FF
    ctx->pc = 0x216180u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)33023 << 16));
    // 0x216184: 0x248459a8  addiu       $a0, $a0, 0x59A8
    ctx->pc = 0x216184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22952));
    // 0x216188: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x216188u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x21618c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x21618cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x216190: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x216190u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x216194: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x216194u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x216198: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x216198u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21619c: 0x24090140  addiu       $t1, $zero, 0x140
    ctx->pc = 0x21619cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x2161a0: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2161A0u;
    SET_GPR_U32(ctx, 31, 0x2161A8u);
    ctx->pc = 0x2161A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2161A0u;
    // 0x2161a4: 0x240a002c  addiu       $t2, $zero, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2161A0u, 0x2161A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2161A8u;
label_2161a8:
    // 0x2161a8: 0xc08739c  jal         func_21CE70
    ctx->pc = 0x2161A8u;
    SET_GPR_U32(ctx, 31, 0x2161B0u);
    ctx->pc = 0x2161ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2161A8u;
    // 0x2161ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21CE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21CE70u, 0x2161A8u, 0x2161B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2161B0u;
label_2161b0:
    // 0x2161b0: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x2161B0u;
    {
        const bool branch_taken_0x2161b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2161B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2161B0u;
        // 0x2161b4: 0x8f82a530  lw          $v0, -0x5AD0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944048)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2161b0) {
            ctx->pc = 0x216260u;
            goto label_216260;
        }
    }
    ctx->pc = 0x2161B8u;
label_2161b8:
    // 0x2161b8: 0x8e0200e4  lw          $v0, 0xE4($s0)
    ctx->pc = 0x2161b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x2161bc: 0x240b03e7  addiu       $t3, $zero, 0x3E7
    ctx->pc = 0x2161bcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
    // 0x2161c0: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x2161c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x2161c4: 0x3c0780ff  lui         $a3, 0x80FF
    ctx->pc = 0x2161c4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)33023 << 16));
    // 0x2161c8: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x2161c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2161cc: 0x248459c0  addiu       $a0, $a0, 0x59C0
    ctx->pc = 0x2161ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22976));
    // 0x2161d0: 0x28c203e8  slti        $v0, $a2, 0x3E8
    ctx->pc = 0x2161d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)1000) ? 1 : 0);
    // 0x2161d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2161d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2161d8: 0xc2580b  movn        $t3, $a2, $v0
    ctx->pc = 0x2161d8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 6));
label_2161dc:
    // 0x2161dc: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x2161dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2161e0:
    // 0x2161e0: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x2161e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x2161e4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2161e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2161e8: 0x24090140  addiu       $t1, $zero, 0x140
    ctx->pc = 0x2161e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x2161ec: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2161ECu;
    SET_GPR_U32(ctx, 31, 0x2161F4u);
    ctx->pc = 0x2161F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2161ECu;
    // 0x2161f0: 0x240a002c  addiu       $t2, $zero, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2161ECu, 0x2161F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2161F4u;
label_2161f4:
    // 0x2161f4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2161F4u;
    {
        const bool branch_taken_0x2161f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2161F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2161F4u;
        // 0x2161f8: 0x8f82a530  lw          $v0, -0x5AD0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944048)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2161f4) {
            ctx->pc = 0x216260u;
            goto label_216260;
        }
    }
    ctx->pc = 0x2161FCu;
    // 0x2161fc: 0x0  nop
    ctx->pc = 0x2161fcu;
    // NOP
label_216200:
    // 0x216200: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x216200u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x216204: 0x3c0780ff  lui         $a3, 0x80FF
    ctx->pc = 0x216204u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)33023 << 16));
    // 0x216208: 0x248459d8  addiu       $a0, $a0, 0x59D8
    ctx->pc = 0x216208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23000));
label_21620c:
    // 0x21620c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x21620cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x216210: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x216210u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x216214: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x216214u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x216218: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x216218u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21621c: 0x24090140  addiu       $t1, $zero, 0x140
    ctx->pc = 0x21621cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x216220: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x216220u;
    SET_GPR_U32(ctx, 31, 0x216228u);
    ctx->pc = 0x216224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216220u;
    // 0x216224: 0x240a002c  addiu       $t2, $zero, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x216220u, 0x216228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216228u;
label_216228:
    // 0x216228: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x216228u;
    {
        const bool branch_taken_0x216228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21622Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216228u;
        // 0x21622c: 0x8f82a530  lw          $v0, -0x5AD0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944048)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216228) {
            ctx->pc = 0x216260u;
            goto label_216260;
        }
    }
    ctx->pc = 0x216230u;
label_216230:
    // 0x216230: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x216230u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
label_216234:
    // 0x216234: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x216234u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x216238: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x216238u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x21623c: 0x3c0142e8  lui         $at, 0x42E8
    ctx->pc = 0x21623cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17128 << 16));
    // 0x216240: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x216240u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x216244: 0x2484c450  addiu       $a0, $a0, -0x3BB0
    ctx->pc = 0x216244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952016));
    // 0x216248: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x216248u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21624c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21624cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216250: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x216250u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216254: 0xc0a5ee2  jal         func_297B88
    ctx->pc = 0x216254u;
    SET_GPR_U32(ctx, 31, 0x21625Cu);
    ctx->pc = 0x216258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216254u;
    // 0x216258: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297B88u, 0x216254u, 0x21625Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21625Cu;
label_21625c:
    // 0x21625c: 0x8f82a530  lw          $v0, -0x5AD0($gp)
    ctx->pc = 0x21625cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944048)));
label_216260:
    // 0x216260: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x216260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x216264: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x216264u;
    {
        const bool branch_taken_0x216264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x216268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216264u;
        // 0x216268: 0x8f82c91c  lw          $v0, -0x36E4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953244)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216264) {
            ctx->pc = 0x216284u;
            goto label_216284;
        }
    }
    ctx->pc = 0x21626Cu;
    // 0x21626c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21626Cu;
    {
        const bool branch_taken_0x21626c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x216270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21626Cu;
        // 0x216270: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21626c) {
            ctx->pc = 0x216288u;
            goto label_216288;
        }
    }
    ctx->pc = 0x216274u;
    // 0x216274: 0xc0a6100  jal         func_298400
    ctx->pc = 0x216274u;
    SET_GPR_U32(ctx, 31, 0x21627Cu);
    ctx->pc = 0x298400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298400u, 0x216274u, 0x21627Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21627Cu;
label_21627c:
    // 0x21627c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21627Cu;
    {
        const bool branch_taken_0x21627c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x216280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21627Cu;
        // 0x216280: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21627c) {
            ctx->pc = 0x216298u;
            goto label_216298;
        }
    }
    ctx->pc = 0x216284u;
label_216284:
    // 0x216284: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x216284u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_216288:
    // 0x216288: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x216288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21628c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21628cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x216290: 0x3e00008  jr          $ra
    ctx->pc = 0x216290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216290u;
        // 0x216294: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x216298u;
label_216298:
    // 0x216298: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x216298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21629c: 0x80a4c82  j           func_293208
    ctx->pc = 0x21629Cu;
    ctx->pc = 0x2162A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21629Cu;
    // 0x2162a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293208u;
    sub_00293208_0x293208(rdram, ctx, runtime); return;
    ctx->pc = 0x2162A4u;
    // 0x2162a4: 0x0  nop
    ctx->pc = 0x2162a4u;
    // NOP
    ctx->pc = 0x2162a8u;
}
