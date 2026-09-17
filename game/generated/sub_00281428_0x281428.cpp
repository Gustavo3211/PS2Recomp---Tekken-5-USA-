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

// Function: sub_00281428
// Address: 0x281428 - 0x281670
void sub_00281428_0x281428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281428_0x281428");
#endif

    switch (ctx->pc) {
        case 0x281440u: goto label_281440;
        case 0x281460u: goto label_281460;
        case 0x2815d8u: goto label_2815d8;
        case 0x28160cu: goto label_28160c;
        case 0x281628u: goto label_281628;
        case 0x28163cu: goto label_28163c;
        case 0x281650u: goto label_281650;
        case 0x281658u: goto label_281658;
        default: break;
    }

    ctx->pc = 0x281428u;

    // 0x281428: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x281428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28142c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28142cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x281430: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x281430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x281434: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x281434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x281438: 0xc07e232  jal         func_1F88C8
    ctx->pc = 0x281438u;
    SET_GPR_U32(ctx, 31, 0x281440u);
    ctx->pc = 0x28143Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281438u;
    // 0x28143c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F88C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F88C8u, 0x281438u, 0x281440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281440u;
label_281440:
    // 0x281440: 0x54400086  bnel        $v0, $zero, . + 4 + (0x86 << 2)
    ctx->pc = 0x281440u;
    {
        const bool branch_taken_0x281440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x281440) {
            ctx->pc = 0x281444u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x281440u;
            // 0x281444: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28165Cu;
            goto label_28165c;
        }
    }
    ctx->pc = 0x281448u;
    // 0x281448: 0x8f82974c  lw          $v0, -0x68B4($gp)
    ctx->pc = 0x281448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940492)));
    // 0x28144c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28144Cu;
    {
        const bool branch_taken_0x28144c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x281450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28144Cu;
        // 0x281450: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28144c) {
            ctx->pc = 0x281468u;
            goto label_281468;
        }
    }
    ctx->pc = 0x281454u;
    // 0x281454: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x281454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281458: 0xc0a04b6  jal         func_2812D8
    ctx->pc = 0x281458u;
    SET_GPR_U32(ctx, 31, 0x281460u);
    ctx->pc = 0x28145Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281458u;
    // 0x28145c: 0xaf82974c  sw          $v0, -0x68B4($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940492), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2812D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2812D8u, 0x281458u, 0x281460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281460u;
label_281460:
    // 0x281460: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x281460u;
    {
        const bool branch_taken_0x281460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281460u;
        // 0x281464: 0x92020204  lbu         $v0, 0x204($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 516)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281460) {
            ctx->pc = 0x28162Cu;
            goto label_28162c;
        }
    }
    ctx->pc = 0x281468u;
label_281468:
    // 0x281468: 0xa2000204  sb          $zero, 0x204($s0)
    ctx->pc = 0x281468u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 516), (uint8_t)GPR_U32(ctx, 0));
    // 0x28146c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28146cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281470: 0x8e0500c4  lw          $a1, 0xC4($s0)
    ctx->pc = 0x281470u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x281474: 0x8ca2003c  lw          $v0, 0x3C($a1)
    ctx->pc = 0x281474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x281478: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x281478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28147c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x28147Cu;
    {
        const bool branch_taken_0x28147c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x281480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28147Cu;
        // 0x281480: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28147c) {
            ctx->pc = 0x28149Cu;
            goto label_28149c;
        }
    }
    ctx->pc = 0x281484u;
    // 0x281484: 0x92020187  lbu         $v0, 0x187($s0)
    ctx->pc = 0x281484u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 391)));
    // 0x281488: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x281488u;
    {
        const bool branch_taken_0x281488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x281488) {
            ctx->pc = 0x28148Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x281488u;
            // 0x28148c: 0x8ca2003c  lw          $v0, 0x3C($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2814A4u;
            goto label_2814a4;
        }
    }
    ctx->pc = 0x281490u;
    // 0x281490: 0x86020148  lh          $v0, 0x148($s0)
    ctx->pc = 0x281490u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x281494: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x281494u;
    {
        const bool branch_taken_0x281494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x281494) {
            ctx->pc = 0x281498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x281494u;
            // 0x281498: 0x8ca2003c  lw          $v0, 0x3C($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2814A4u;
            goto label_2814a4;
        }
    }
    ctx->pc = 0x28149Cu;
label_28149c:
    // 0x28149c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x28149cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2814a0: 0x8ca2003c  lw          $v0, 0x3C($a1)
    ctx->pc = 0x2814a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
label_2814a4:
    // 0x2814a4: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x2814a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x2814a8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2814a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2814ac: 0x30440002  andi        $a0, $v0, 0x2
    ctx->pc = 0x2814acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2814b0: 0x14800019  bnez        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2814B0u;
    {
        const bool branch_taken_0x2814b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2814B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2814B0u;
        // 0x2814b4: 0x433024  and         $a2, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2814b0) {
            ctx->pc = 0x281518u;
            goto label_281518;
        }
    }
    ctx->pc = 0x2814B8u;
    // 0x2814b8: 0x9202030c  lbu         $v0, 0x30C($s0)
    ctx->pc = 0x2814b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 780)));
    // 0x2814bc: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x2814BCu;
    {
        const bool branch_taken_0x2814bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2814bc) {
            ctx->pc = 0x2814C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2814BCu;
            // 0x2814c0: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28151Cu;
            goto label_28151c;
        }
    }
    ctx->pc = 0x2814C4u;
    // 0x2814c4: 0x94a20044  lhu         $v0, 0x44($a1)
    ctx->pc = 0x2814c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x2814c8: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2814C8u;
    {
        const bool branch_taken_0x2814c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2814c8) {
            ctx->pc = 0x2814CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2814C8u;
            // 0x2814cc: 0x86020156  lh          $v0, 0x156($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 342)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2814F8u;
            goto label_2814f8;
        }
    }
    ctx->pc = 0x2814D0u;
    // 0x2814d0: 0x94a20046  lhu         $v0, 0x46($a1)
    ctx->pc = 0x2814d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 70)));
    // 0x2814d4: 0x86030096  lh          $v1, 0x96($s0)
    ctx->pc = 0x2814d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 150)));
    // 0x2814d8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2814d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2814dc: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2814DCu;
    {
        const bool branch_taken_0x2814dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2814dc) {
            ctx->pc = 0x2814E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2814DCu;
            // 0x2814e0: 0x86020156  lh          $v0, 0x156($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 342)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2814F8u;
            goto label_2814f8;
        }
    }
    ctx->pc = 0x2814E4u;
    // 0x2814e4: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x2814e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x2814e8: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x2814e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x2814ec: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2814ECu;
    {
        const bool branch_taken_0x2814ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2814ec) {
            ctx->pc = 0x2814F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2814ECu;
            // 0x2814f0: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28151Cu;
            goto label_28151c;
        }
    }
    ctx->pc = 0x2814F4u;
    // 0x2814f4: 0x86020156  lh          $v0, 0x156($s0)
    ctx->pc = 0x2814f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 342)));
label_2814f8:
    // 0x2814f8: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2814F8u;
    {
        const bool branch_taken_0x2814f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2814f8) {
            ctx->pc = 0x2814FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2814F8u;
            // 0x2814fc: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28151Cu;
            goto label_28151c;
        }
    }
    ctx->pc = 0x281500u;
    // 0x281500: 0x920201f9  lbu         $v0, 0x1F9($s0)
    ctx->pc = 0x281500u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 505)));
    // 0x281504: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x281504u;
    {
        const bool branch_taken_0x281504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x281504) {
            ctx->pc = 0x281508u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x281504u;
            // 0x281508: 0x920201ef  lbu         $v0, 0x1EF($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 495)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x281520u;
            goto label_281520;
        }
    }
    ctx->pc = 0x28150Cu;
    // 0x28150c: 0x92020187  lbu         $v0, 0x187($s0)
    ctx->pc = 0x28150cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 391)));
    // 0x281510: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x281510u;
    {
        const bool branch_taken_0x281510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x281510) {
            ctx->pc = 0x281514u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x281510u;
            // 0x281514: 0x920201ef  lbu         $v0, 0x1EF($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 495)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x281520u;
            goto label_281520;
        }
    }
    ctx->pc = 0x281518u;
label_281518:
    // 0x281518: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x281518u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28151c:
    // 0x28151c: 0x920201ef  lbu         $v0, 0x1EF($s0)
    ctx->pc = 0x28151cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 495)));
label_281520:
    // 0x281520: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x281520u;
    {
        const bool branch_taken_0x281520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x281524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281520u;
        // 0x281524: 0x8e0307c8  lw          $v1, 0x7C8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1992)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281520) {
            ctx->pc = 0x281530u;
            goto label_281530;
        }
    }
    ctx->pc = 0x281528u;
    // 0x281528: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x281528u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28152c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x28152cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_281530:
    // 0x281530: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x281530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x281534: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x281534u;
    {
        const bool branch_taken_0x281534 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x281538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281534u;
        // 0x281538: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x281534) {
            ctx->pc = 0x281560u;
            goto label_281560;
        }
    }
    ctx->pc = 0x28153Cu;
    // 0x28153c: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x28153Cu;
    {
        const bool branch_taken_0x28153c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x281540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28153Cu;
        // 0x281540: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28153c) {
            ctx->pc = 0x2815C4u;
            goto label_2815c4;
        }
    }
    ctx->pc = 0x281544u;
    // 0x281544: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x281544u;
    {
        const bool branch_taken_0x281544 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x281548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281544u;
        // 0x281548: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281544) {
            ctx->pc = 0x281580u;
            goto label_281580;
        }
    }
    ctx->pc = 0x28154Cu;
    // 0x28154c: 0x50620014  beql        $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x28154Cu;
    {
        const bool branch_taken_0x28154c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x28154c) {
            ctx->pc = 0x281550u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28154Cu;
            // 0x281550: 0x8e020804  lw          $v0, 0x804($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2052)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2815A0u;
            goto label_2815a0;
        }
    }
    ctx->pc = 0x281554u;
    // 0x281554: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x281554u;
    {
        const bool branch_taken_0x281554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x281554) {
            ctx->pc = 0x2815C4u;
            goto label_2815c4;
        }
    }
    ctx->pc = 0x28155Cu;
    // 0x28155c: 0x0  nop
    ctx->pc = 0x28155cu;
    // NOP
label_281560:
    // 0x281560: 0x8e020804  lw          $v0, 0x804($s0)
    ctx->pc = 0x281560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2052)));
    // 0x281564: 0x58400017  blezl       $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x281564u;
    {
        const bool branch_taken_0x281564 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x281564) {
            ctx->pc = 0x281568u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x281564u;
            // 0x281568: 0xae0007c8  sw          $zero, 0x7C8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 1992), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2815C4u;
            goto label_2815c4;
        }
    }
    ctx->pc = 0x28156Cu;
    // 0x28156c: 0x10e00018  beqz        $a3, . + 4 + (0x18 << 2)
    ctx->pc = 0x28156Cu;
    {
        const bool branch_taken_0x28156c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x28156c) {
            ctx->pc = 0x2815D0u;
            goto label_2815d0;
        }
    }
    ctx->pc = 0x281574u;
    // 0x281574: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x281574u;
    {
        const bool branch_taken_0x281574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281574u;
        // 0x281578: 0xae0007c8  sw          $zero, 0x7C8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1992), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281574) {
            ctx->pc = 0x2815C4u;
            goto label_2815c4;
        }
    }
    ctx->pc = 0x28157Cu;
    // 0x28157c: 0x0  nop
    ctx->pc = 0x28157cu;
    // NOP
label_281580:
    // 0x281580: 0x8e020804  lw          $v0, 0x804($s0)
    ctx->pc = 0x281580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2052)));
    // 0x281584: 0x8e0307fc  lw          $v1, 0x7FC($s0)
    ctx->pc = 0x281584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2044)));
    // 0x281588: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x281588u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x28158c: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x28158Cu;
    {
        const bool branch_taken_0x28158c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28158c) {
            ctx->pc = 0x281590u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28158Cu;
            // 0x281590: 0xae0007c8  sw          $zero, 0x7C8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 1992), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2815C4u;
            goto label_2815c4;
        }
    }
    ctx->pc = 0x281594u;
    // 0x281594: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x281594u;
    {
        const bool branch_taken_0x281594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x281594) {
            ctx->pc = 0x2815BCu;
            goto label_2815bc;
        }
    }
    ctx->pc = 0x28159Cu;
    // 0x28159c: 0x0  nop
    ctx->pc = 0x28159cu;
    // NOP
label_2815a0:
    // 0x2815a0: 0x8e0307fc  lw          $v1, 0x7FC($s0)
    ctx->pc = 0x2815a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2044)));
    // 0x2815a4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2815a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2815a8: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2815A8u;
    {
        const bool branch_taken_0x2815a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2815a8) {
            ctx->pc = 0x2815ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2815A8u;
            // 0x2815ac: 0xae0007c8  sw          $zero, 0x7C8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 1992), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2815C4u;
            goto label_2815c4;
        }
    }
    ctx->pc = 0x2815B0u;
    // 0x2815b0: 0x920201f7  lbu         $v0, 0x1F7($s0)
    ctx->pc = 0x2815b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 503)));
    // 0x2815b4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2815B4u;
    {
        const bool branch_taken_0x2815b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2815b4) {
            ctx->pc = 0x2815B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2815B4u;
            // 0x2815b8: 0xae0007c8  sw          $zero, 0x7C8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 1992), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2815C4u;
            goto label_2815c4;
        }
    }
    ctx->pc = 0x2815BCu;
label_2815bc:
    // 0x2815bc: 0x56200001  bnel        $s1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2815BCu;
    {
        const bool branch_taken_0x2815bc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2815bc) {
            ctx->pc = 0x2815C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2815BCu;
            // 0x2815c0: 0xae0007c8  sw          $zero, 0x7C8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 1992), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2815C4u;
            goto label_2815c4;
        }
    }
    ctx->pc = 0x2815C4u;
label_2815c4:
    // 0x2815c4: 0x54e00007  bnel        $a3, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2815C4u;
    {
        const bool branch_taken_0x2815c4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x2815c4) {
            ctx->pc = 0x2815C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2815C4u;
            // 0x2815c8: 0x8e0307c8  lw          $v1, 0x7C8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1992)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2815E4u;
            goto label_2815e4;
        }
    }
    ctx->pc = 0x2815CCu;
    // 0x2815cc: 0x0  nop
    ctx->pc = 0x2815ccu;
    // NOP
label_2815d0:
    // 0x2815d0: 0xc0a059c  jal         func_281670
    ctx->pc = 0x2815D0u;
    SET_GPR_U32(ctx, 31, 0x2815D8u);
    ctx->pc = 0x2815D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2815D0u;
    // 0x2815d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281670u, 0x2815D0u, 0x2815D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2815D8u;
label_2815d8:
    // 0x2815d8: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x2815D8u;
    {
        const bool branch_taken_0x2815d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2815d8) {
            ctx->pc = 0x2815DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2815D8u;
            // 0x2815dc: 0x92020204  lbu         $v0, 0x204($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 516)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28162Cu;
            goto label_28162c;
        }
    }
    ctx->pc = 0x2815E0u;
    // 0x2815e0: 0x8e0307c8  lw          $v1, 0x7C8($s0)
    ctx->pc = 0x2815e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1992)));
label_2815e4:
    // 0x2815e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2815e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2815e8: 0x50620010  beql        $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2815E8u;
    {
        const bool branch_taken_0x2815e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2815e8) {
            ctx->pc = 0x2815ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2815E8u;
            // 0x2815ec: 0x92020204  lbu         $v0, 0x204($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 516)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28162Cu;
            goto label_28162c;
        }
    }
    ctx->pc = 0x2815F0u;
    // 0x2815f0: 0x5620000e  bnel        $s1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2815F0u;
    {
        const bool branch_taken_0x2815f0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2815f0) {
            ctx->pc = 0x2815F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2815F0u;
            // 0x2815f4: 0x92020204  lbu         $v0, 0x204($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 516)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28162Cu;
            goto label_28162c;
        }
    }
    ctx->pc = 0x2815F8u;
    // 0x2815f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2815f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2815fc: 0x5062000b  beql        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2815FCu;
    {
        const bool branch_taken_0x2815fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2815fc) {
            ctx->pc = 0x281600u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2815FCu;
            // 0x281600: 0x92020204  lbu         $v0, 0x204($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 516)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28162Cu;
            goto label_28162c;
        }
    }
    ctx->pc = 0x281604u;
    // 0x281604: 0xc0a05da  jal         func_281768
    ctx->pc = 0x281604u;
    SET_GPR_U32(ctx, 31, 0x28160Cu);
    ctx->pc = 0x281608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281604u;
    // 0x281608: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281768u, 0x281604u, 0x28160Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28160Cu;
label_28160c:
    // 0x28160c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x28160Cu;
    {
        const bool branch_taken_0x28160c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28160c) {
            ctx->pc = 0x281610u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28160Cu;
            // 0x281610: 0x92020204  lbu         $v0, 0x204($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 516)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28162Cu;
            goto label_28162c;
        }
    }
    ctx->pc = 0x281614u;
    // 0x281614: 0x8e0207c8  lw          $v0, 0x7C8($s0)
    ctx->pc = 0x281614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1992)));
    // 0x281618: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x281618u;
    {
        const bool branch_taken_0x281618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x281618) {
            ctx->pc = 0x28161Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x281618u;
            // 0x28161c: 0x92020204  lbu         $v0, 0x204($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 516)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28162Cu;
            goto label_28162c;
        }
    }
    ctx->pc = 0x281620u;
    // 0x281620: 0xc0a062e  jal         func_2818B8
    ctx->pc = 0x281620u;
    SET_GPR_U32(ctx, 31, 0x281628u);
    ctx->pc = 0x281624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281620u;
    // 0x281624: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2818B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2818B8u, 0x281620u, 0x281628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281628u;
label_281628:
    // 0x281628: 0x92020204  lbu         $v0, 0x204($s0)
    ctx->pc = 0x281628u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 516)));
label_28162c:
    // 0x28162c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28162Cu;
    {
        const bool branch_taken_0x28162c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28162c) {
            ctx->pc = 0x281648u;
            goto label_281648;
        }
    }
    ctx->pc = 0x281634u;
    // 0x281634: 0xc0a0646  jal         func_281918
    ctx->pc = 0x281634u;
    SET_GPR_U32(ctx, 31, 0x28163Cu);
    ctx->pc = 0x281638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281634u;
    // 0x281638: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281918u, 0x281634u, 0x28163Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28163Cu;
label_28163c:
    // 0x28163c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x28163Cu;
    {
        const bool branch_taken_0x28163c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28163c) {
            ctx->pc = 0x281650u;
            goto label_281650;
        }
    }
    ctx->pc = 0x281644u;
    // 0x281644: 0x0  nop
    ctx->pc = 0x281644u;
    // NOP
label_281648:
    // 0x281648: 0xc0a07ac  jal         func_281EB0
    ctx->pc = 0x281648u;
    SET_GPR_U32(ctx, 31, 0x281650u);
    ctx->pc = 0x28164Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281648u;
    // 0x28164c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281EB0u, 0x281648u, 0x281650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281650u;
label_281650:
    // 0x281650: 0xc0a04ac  jal         func_2812B0
    ctx->pc = 0x281650u;
    SET_GPR_U32(ctx, 31, 0x281658u);
    ctx->pc = 0x281654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281650u;
    // 0x281654: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2812B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2812B0u, 0x281650u, 0x281658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281658u;
label_281658:
    // 0x281658: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x281658u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28165c:
    // 0x28165c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x28165cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x281660: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x281660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x281664: 0x3e00008  jr          $ra
    ctx->pc = 0x281664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281664u;
        // 0x281668: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281664u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28166Cu;
    // 0x28166c: 0x0  nop
    ctx->pc = 0x28166cu;
    // NOP
    ctx->pc = 0x281670u;
}
