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

// Function: sub_00281670
// Address: 0x281670 - 0x281768
void sub_00281670_0x281670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281670_0x281670");
#endif

    ctx->pc = 0x281670u;

    // 0x281670: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x281670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281674: 0x8ca607d4  lw          $a2, 0x7D4($a1)
    ctx->pc = 0x281674u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2004)));
    // 0x281678: 0x8ca700c4  lw          $a3, 0xC4($a1)
    ctx->pc = 0x281678u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 196)));
    // 0x28167c: 0x54c70006  bnel        $a2, $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x28167Cu;
    {
        const bool branch_taken_0x28167c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x28167c) {
            ctx->pc = 0x281680u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28167Cu;
            // 0x281680: 0x90a201f7  lbu         $v0, 0x1F7($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 503)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x281698u;
            goto label_281698;
        }
    }
    ctx->pc = 0x281684u;
    // 0x281684: 0x90a40190  lbu         $a0, 0x190($a1)
    ctx->pc = 0x281684u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 400)));
    // 0x281688: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x281688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x28168c: 0x14830034  bne         $a0, $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x28168Cu;
    {
        const bool branch_taken_0x28168c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x281690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28168Cu;
        // 0x281690: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28168c) {
            ctx->pc = 0x281760u;
            goto label_281760;
        }
    }
    ctx->pc = 0x281694u;
    // 0x281694: 0x90a201f7  lbu         $v0, 0x1F7($a1)
    ctx->pc = 0x281694u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 503)));
label_281698:
    // 0x281698: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x281698u;
    {
        const bool branch_taken_0x281698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x281698) {
            ctx->pc = 0x28169Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x281698u;
            // 0x28169c: 0x94e30024  lhu         $v1, 0x24($a3) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2816ACu;
            goto label_2816ac;
        }
    }
    ctx->pc = 0x2816A0u;
    // 0x2816a0: 0x50c7002f  beql        $a2, $a3, . + 4 + (0x2F << 2)
    ctx->pc = 0x2816A0u;
    {
        const bool branch_taken_0x2816a0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        if (branch_taken_0x2816a0) {
            ctx->pc = 0x2816A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2816A0u;
            // 0x2816a4: 0x90a20204  lbu         $v0, 0x204($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 516)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x281760u;
            goto label_281760;
        }
    }
    ctx->pc = 0x2816A8u;
    // 0x2816a8: 0x94e30024  lhu         $v1, 0x24($a3)
    ctx->pc = 0x2816a8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 36)));
label_2816ac:
    // 0x2816ac: 0x84a40096  lh          $a0, 0x96($a1)
    ctx->pc = 0x2816acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 150)));
    // 0x2816b0: 0x644023  subu        $t0, $v1, $a0
    ctx->pc = 0x2816b0u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2816b4: 0x29020000  slti        $v0, $t0, 0x0
    ctx->pc = 0x2816b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x2816b8: 0x2400b  movn        $t0, $zero, $v0
    ctx->pc = 0x2816b8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 0));
    // 0x2816bc: 0x1100001b  beqz        $t0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2816BCu;
    {
        const bool branch_taken_0x2816bc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x2816C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2816BCu;
        // 0x2816c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2816bc) {
            ctx->pc = 0x28172Cu;
            goto label_28172c;
        }
    }
    ctx->pc = 0x2816C4u;
    // 0x2816c4: 0x84a3016e  lh          $v1, 0x16E($a1)
    ctx->pc = 0x2816c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 366)));
    // 0x2816c8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2816c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2816cc: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2816CCu;
    {
        const bool branch_taken_0x2816cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2816cc) {
            ctx->pc = 0x2816D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2816CCu;
            // 0x2816d0: 0x94e20044  lhu         $v0, 0x44($a3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2816E0u;
            goto label_2816e0;
        }
    }
    ctx->pc = 0x2816D4u;
    // 0x2816d4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2816D4u;
    {
        const bool branch_taken_0x2816d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2816D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2816D4u;
        // 0x2816d8: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2816d4) {
            ctx->pc = 0x28172Cu;
            goto label_28172c;
        }
    }
    ctx->pc = 0x2816DCu;
    // 0x2816dc: 0x0  nop
    ctx->pc = 0x2816dcu;
    // NOP
label_2816e0:
    // 0x2816e0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2816E0u;
    {
        const bool branch_taken_0x2816e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2816E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2816E0u;
        // 0x2816e4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2816e0) {
            ctx->pc = 0x281718u;
            goto label_281718;
        }
    }
    ctx->pc = 0x2816E8u;
    // 0x2816e8: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x2816e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2816ec: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2816ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2816f0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2816F0u;
    {
        const bool branch_taken_0x2816f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2816F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2816F0u;
        // 0x2816f4: 0x106102a  slt         $v0, $t0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2816f0) {
            ctx->pc = 0x281730u;
            goto label_281730;
        }
    }
    ctx->pc = 0x2816F8u;
    // 0x2816f8: 0x641023  subu        $v0, $v1, $a0
    ctx->pc = 0x2816f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2816fc: 0x2446ffff  addiu       $a2, $v0, -0x1
    ctx->pc = 0x2816fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x281700: 0x28c30011  slti        $v1, $a2, 0x11
    ctx->pc = 0x281700u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x281704: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x281704u;
    {
        const bool branch_taken_0x281704 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x281704) {
            ctx->pc = 0x281708u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x281704u;
            // 0x281708: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28172Cu;
            goto label_28172c;
        }
    }
    ctx->pc = 0x28170Cu;
    // 0x28170c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x28170Cu;
    {
        const bool branch_taken_0x28170c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28170Cu;
        // 0x281710: 0x106102a  slt         $v0, $t0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28170c) {
            ctx->pc = 0x281730u;
            goto label_281730;
        }
    }
    ctx->pc = 0x281714u;
    // 0x281714: 0x0  nop
    ctx->pc = 0x281714u;
    // NOP
label_281718:
    // 0x281718: 0x84a20148  lh          $v0, 0x148($a1)
    ctx->pc = 0x281718u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 328)));
    // 0x28171c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x28171cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x281720: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x281720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x281724: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x281724u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x281728: 0x62300a  movz        $a2, $v1, $v0
    ctx->pc = 0x281728u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
label_28172c:
    // 0x28172c: 0x106102a  slt         $v0, $t0, $a2
    ctx->pc = 0x28172cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_281730:
    // 0x281730: 0x102300b  movn        $a2, $t0, $v0
    ctx->pc = 0x281730u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 8));
    // 0x281734: 0x28c30002  slti        $v1, $a2, 0x2
    ctx->pc = 0x281734u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x281738: 0x54600009  bnel        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x281738u;
    {
        const bool branch_taken_0x281738 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x281738) {
            ctx->pc = 0x28173Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x281738u;
            // 0x28173c: 0x90a20204  lbu         $v0, 0x204($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 516)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x281760u;
            goto label_281760;
        }
    }
    ctx->pc = 0x281740u;
    // 0x281740: 0x61300  sll         $v0, $a2, 12
    ctx->pc = 0x281740u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 12));
    // 0x281744: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x281744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x281748: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x281748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28174c: 0xa0a30204  sb          $v1, 0x204($a1)
    ctx->pc = 0x28174cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 516), (uint8_t)GPR_U32(ctx, 3));
    // 0x281750: 0xaca407c8  sw          $a0, 0x7C8($a1)
    ctx->pc = 0x281750u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1992), GPR_U32(ctx, 4));
    // 0x281754: 0xaca207c4  sw          $v0, 0x7C4($a1)
    ctx->pc = 0x281754u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1988), GPR_U32(ctx, 2));
    // 0x281758: 0xaca607c0  sw          $a2, 0x7C0($a1)
    ctx->pc = 0x281758u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1984), GPR_U32(ctx, 6));
    // 0x28175c: 0x90a20204  lbu         $v0, 0x204($a1)
    ctx->pc = 0x28175cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 516)));
label_281760:
    // 0x281760: 0x3e00008  jr          $ra
    ctx->pc = 0x281760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x281768u;
}
