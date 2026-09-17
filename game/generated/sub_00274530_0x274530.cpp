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

// Function: sub_00274530
// Address: 0x274530 - 0x2745f8
void sub_00274530_0x274530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00274530_0x274530");
#endif

    switch (ctx->pc) {
        case 0x274594u: goto label_274594;
        case 0x2745bcu: goto label_2745bc;
        default: break;
    }

    ctx->pc = 0x274530u;

    // 0x274530: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x274530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x274534: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x274534u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274538: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x274538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27453c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27453cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x274540: 0x14e20019  bne         $a3, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x274540u;
    {
        const bool branch_taken_0x274540 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x274544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274540u;
        // 0x274544: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274540) {
            ctx->pc = 0x2745A8u;
            goto label_2745a8;
        }
    }
    ctx->pc = 0x274548u;
    // 0x274548: 0x8f85aa80  lw          $a1, -0x5580($gp)
    ctx->pc = 0x274548u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
    // 0x27454c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x27454cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274550: 0x8f84aa7c  lw          $a0, -0x5584($gp)
    ctx->pc = 0x274550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x274554: 0x94a2007e  lhu         $v0, 0x7E($a1)
    ctx->pc = 0x274554u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 126)));
    // 0x274558: 0x8c8606b8  lw          $a2, 0x6B8($a0)
    ctx->pc = 0x274558u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1720)));
    // 0x27455c: 0x24437fff  addiu       $v1, $v0, 0x7FFF
    ctx->pc = 0x27455cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 32767));
    // 0x274560: 0x3401feff  ori         $at, $zero, 0xFEFF
    ctx->pc = 0x274560u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65279);
    // 0x274564: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x274564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x274568: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x274568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x27456c: 0x8ca406b8  lw          $a0, 0x6B8($a1)
    ctx->pc = 0x27456cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1720)));
    // 0x274570: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x274570u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x274574: 0x2c427eff  sltiu       $v0, $v0, 0x7EFF
    ctx->pc = 0x274574u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32511) ? 1 : 0);
    // 0x274578: 0x2c637efe  sltiu       $v1, $v1, 0x7EFE
    ctx->pc = 0x274578u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)32510) ? 1 : 0);
    // 0x27457c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27457Cu;
    {
        const bool branch_taken_0x27457c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x274580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27457Cu;
        // 0x274580: 0x86802a  slt         $s0, $a0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27457c) {
            ctx->pc = 0x27459Cu;
            goto label_27459c;
        }
    }
    ctx->pc = 0x274584u;
    // 0x274584: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x274584u;
    {
        const bool branch_taken_0x274584 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x274588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274584u;
        // 0x274588: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274584) {
            ctx->pc = 0x27459Cu;
            goto label_27459c;
        }
    }
    ctx->pc = 0x27458Cu;
    // 0x27458c: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x27458Cu;
    SET_GPR_U32(ctx, 31, 0x274594u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x27458Cu, 0x274594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274594u;
label_274594:
    // 0x274594: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x274594u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x274598: 0x30470001  andi        $a3, $v0, 0x1
    ctx->pc = 0x274598u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_27459c:
    // 0x27459c: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x27459Cu;
    {
        const bool branch_taken_0x27459c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2745A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27459Cu;
        // 0x2745a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27459c) {
            ctx->pc = 0x2745A8u;
            goto label_2745a8;
        }
    }
    ctx->pc = 0x2745A4u;
    // 0x2745a4: 0x473823  subu        $a3, $v0, $a3
    ctx->pc = 0x2745a4u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_2745a8:
    // 0x2745a8: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x2745a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x2745ac: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x2745acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
    // 0x2745b0: 0x24212da0  addiu       $at, $at, 0x2DA0
    ctx->pc = 0x2745b0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 11680));
    // 0x2745b4: 0xc0997d8  jal         func_265F60
    ctx->pc = 0x2745B4u;
    SET_GPR_U32(ctx, 31, 0x2745BCu);
    ctx->pc = 0x2745B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2745B4u;
    // 0x2745b8: 0x242021  addu        $a0, $at, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265F60u, 0x2745B4u, 0x2745BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2745BCu;
label_2745bc:
    // 0x2745bc: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x2745bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2745c0: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x2745c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2745c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2745c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2745c8: 0xac600048  sw          $zero, 0x48($v1)
    ctx->pc = 0x2745c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 0));
    // 0x2745cc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2745ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2745d0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2745d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2745d4: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x2745d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2745d8: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x2745d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
    // 0x2745dc: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x2745dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2745e0: 0xac640054  sw          $a0, 0x54($v1)
    ctx->pc = 0x2745e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 4));
    // 0x2745e4: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x2745e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2745e8: 0xac450064  sw          $a1, 0x64($v0)
    ctx->pc = 0x2745e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 5));
    // 0x2745ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2745ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2745F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2745ECu;
        // 0x2745f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2745ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2745F4u;
    // 0x2745f4: 0x0  nop
    ctx->pc = 0x2745f4u;
    // NOP
    ctx->pc = 0x2745f8u;
}
