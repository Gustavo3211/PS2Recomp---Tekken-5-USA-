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

// Function: sub_002D0358
// Address: 0x2d0358 - 0x2d0550
void sub_002D0358_0x2d0358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D0358_0x2d0358");
#endif

    switch (ctx->pc) {
        case 0x2d03a8u: goto label_2d03a8;
        case 0x2d03ccu: goto label_2d03cc;
        case 0x2d0408u: goto label_2d0408;
        case 0x2d04a8u: goto label_2d04a8;
        case 0x2d04c0u: goto label_2d04c0;
        default: break;
    }

    ctx->pc = 0x2d0358u;

    // 0x2d0358: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d0358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d035c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d035cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d0360: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d0360u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0364: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d0364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d0368: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d0368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d036c: 0x8e020310  lw          $v0, 0x310($s0)
    ctx->pc = 0x2d036cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 784)));
    // 0x2d0370: 0x54400072  bnel        $v0, $zero, . + 4 + (0x72 << 2)
    ctx->pc = 0x2D0370u;
    {
        const bool branch_taken_0x2d0370 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d0370) {
            ctx->pc = 0x2D0374u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0370u;
            // 0x2d0374: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D053Cu;
            goto label_2d053c;
        }
    }
    ctx->pc = 0x2D0378u;
    // 0x2d0378: 0x860202c4  lh          $v0, 0x2C4($s0)
    ctx->pc = 0x2d0378u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 708)));
    // 0x2d037c: 0x2842001a  slti        $v0, $v0, 0x1A
    ctx->pc = 0x2d037cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)26) ? 1 : 0);
    // 0x2d0380: 0x5040006e  beql        $v0, $zero, . + 4 + (0x6E << 2)
    ctx->pc = 0x2D0380u;
    {
        const bool branch_taken_0x2d0380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0380) {
            ctx->pc = 0x2D0384u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0380u;
            // 0x2d0384: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D053Cu;
            goto label_2d053c;
        }
    }
    ctx->pc = 0x2D0388u;
    // 0x2d0388: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x2d0388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x2d038c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2d038cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0390: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x2d0390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x2d0394: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2d0394u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0398: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x2d0398u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x2d039c: 0x86050096  lh          $a1, 0x96($s0)
    ctx->pc = 0x2d039cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 150)));
    // 0x2d03a0: 0xc0b4066  jal         func_2D0198
    ctx->pc = 0x2D03A0u;
    SET_GPR_U32(ctx, 31, 0x2D03A8u);
    ctx->pc = 0x2D03A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D03A0u;
    // 0x2d03a4: 0x8c640014  lw          $a0, 0x14($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0198u, 0x2D03A0u, 0x2D03A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D03A8u;
label_2d03a8:
    // 0x2d03a8: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x2d03a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2d03ac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d03acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d03b0: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x2d03b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d03b4: 0x1043002c  beq         $v0, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x2D03B4u;
    {
        const bool branch_taken_0x2d03b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2D03B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D03B4u;
        // 0x2d03b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d03b4) {
            ctx->pc = 0x2D0468u;
            goto label_2d0468;
        }
    }
    ctx->pc = 0x2D03BCu;
    // 0x2d03bc: 0x96220008  lhu         $v0, 0x8($s1)
    ctx->pc = 0x2d03bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2d03c0: 0xa6020304  sh          $v0, 0x304($s0)
    ctx->pc = 0x2d03c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 772), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d03c4: 0xc09905e  jal         func_264178
    ctx->pc = 0x2D03C4u;
    SET_GPR_U32(ctx, 31, 0x2D03CCu);
    ctx->pc = 0x2D03C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D03C4u;
    // 0x2d03c8: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x264178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264178u, 0x2D03C4u, 0x2D03CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D03CCu;
label_2d03cc:
    // 0x2d03cc: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x2d03ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2d03d0: 0xae020310  sw          $v0, 0x310($s0)
    ctx->pc = 0x2d03d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 784), GPR_U32(ctx, 2));
    // 0x2d03d4: 0x96230014  lhu         $v1, 0x14($s1)
    ctx->pc = 0x2d03d4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2d03d8: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x2d03d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2d03dc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2d03dcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2d03e0: 0x14440004  bne         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D03E0u;
    {
        const bool branch_taken_0x2d03e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x2D03E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D03E0u;
        // 0x2d03e4: 0xa60302fe  sh          $v1, 0x2FE($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 766), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d03e0) {
            ctx->pc = 0x2D03F4u;
            goto label_2d03f4;
        }
    }
    ctx->pc = 0x2D03E8u;
    // 0x2d03e8: 0x8e0200c4  lw          $v0, 0xC4($s0)
    ctx->pc = 0x2d03e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x2d03ec: 0x94430024  lhu         $v1, 0x24($v0)
    ctx->pc = 0x2d03ecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x2d03f0: 0xa60302fe  sh          $v1, 0x2FE($s0)
    ctx->pc = 0x2d03f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 766), (uint16_t)GPR_U32(ctx, 3));
label_2d03f4:
    // 0x2d03f4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2d03f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2d03f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d03f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d03fc: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x2d03fcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d0400: 0xc09ec2c  jal         func_27B0B0
    ctx->pc = 0x2D0400u;
    SET_GPR_U32(ctx, 31, 0x2D0408u);
    ctx->pc = 0x2D0404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0400u;
    // 0x2d0404: 0x30a53fff  andi        $a1, $a1, 0x3FFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16383);
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B0B0u, 0x2D0400u, 0x2D0408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0408u;
label_2d0408:
    // 0x2d0408: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2d0408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d040c: 0xa6020300  sh          $v0, 0x300($s0)
    ctx->pc = 0x2d040cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 768), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d0410: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2d0410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2d0414: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2d0414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d0418: 0x213c3  sra         $v0, $v0, 15
    ctx->pc = 0x2d0418u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 15));
    // 0x2d041c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2d041cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2d0420: 0xa202030d  sb          $v0, 0x30D($s0)
    ctx->pc = 0x2d0420u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 781), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d0424: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2d0424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2d0428: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2d0428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d042c: 0x21383  sra         $v0, $v0, 14
    ctx->pc = 0x2d042cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 14));
    // 0x2d0430: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2d0430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2d0434: 0xa202030c  sb          $v0, 0x30C($s0)
    ctx->pc = 0x2d0434u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 780), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d0438: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2d0438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2d043c: 0x84620002  lh          $v0, 0x2($v1)
    ctx->pc = 0x2d043cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d0440: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2d0440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2d0444: 0xa202030e  sb          $v0, 0x30E($s0)
    ctx->pc = 0x2d0444u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 782), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d0448: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x2d0448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2d044c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2d044cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d0450: 0xa2050190  sb          $a1, 0x190($s0)
    ctx->pc = 0x2d0450u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 400), (uint8_t)GPR_U32(ctx, 5));
    // 0x2d0454: 0x31c43  sra         $v1, $v1, 17
    ctx->pc = 0x2d0454u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 17));
    // 0x2d0458: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2d0458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2d045c: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x2D045Cu;
    {
        const bool branch_taken_0x2d045c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D045Cu;
        // 0x2d0460: 0xa203030f  sb          $v1, 0x30F($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 783), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d045c) {
            ctx->pc = 0x2D052Cu;
            goto label_2d052c;
        }
    }
    ctx->pc = 0x2D0464u;
    // 0x2d0464: 0x0  nop
    ctx->pc = 0x2d0464u;
    // NOP
label_2d0468:
    // 0x2d0468: 0x8e0400c4  lw          $a0, 0xC4($s0)
    ctx->pc = 0x2d0468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x2d046c: 0x86030146  lh          $v1, 0x146($s0)
    ctx->pc = 0x2d046cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 326)));
    // 0x2d0470: 0x86050096  lh          $a1, 0x96($s0)
    ctx->pc = 0x2d0470u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 150)));
    // 0x2d0474: 0x94820024  lhu         $v0, 0x24($a0)
    ctx->pc = 0x2d0474u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x2d0478: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x2d0478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2d047c: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x2d047cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2d0480: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D0480u;
    {
        const bool branch_taken_0x2d0480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D0484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0480u;
        // 0x2d0484: 0x96030096  lhu         $v1, 0x96($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 150)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0480) {
            ctx->pc = 0x2D0490u;
            goto label_2d0490;
        }
    }
    ctx->pc = 0x2D0488u;
    // 0x2d0488: 0x5ca0002c  bgtzl       $a1, . + 4 + (0x2C << 2)
    ctx->pc = 0x2D0488u;
    {
        const bool branch_taken_0x2d0488 = (GPR_S32(ctx, 5) > 0);
        if (branch_taken_0x2d0488) {
            ctx->pc = 0x2D048Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0488u;
            // 0x2d048c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D053Cu;
            goto label_2d053c;
        }
    }
    ctx->pc = 0x2D0490u;
label_2d0490:
    // 0x2d0490: 0xa60302fe  sh          $v1, 0x2FE($s0)
    ctx->pc = 0x2d0490u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 766), (uint16_t)GPR_U32(ctx, 3));
    // 0x2d0494: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d0494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0498: 0x96220008  lhu         $v0, 0x8($s1)
    ctx->pc = 0x2d0498u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2d049c: 0xa6020304  sh          $v0, 0x304($s0)
    ctx->pc = 0x2d049cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 772), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d04a0: 0xc09905e  jal         func_264178
    ctx->pc = 0x2D04A0u;
    SET_GPR_U32(ctx, 31, 0x2D04A8u);
    ctx->pc = 0x2D04A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D04A0u;
    // 0x2d04a4: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x264178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264178u, 0x2D04A0u, 0x2D04A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D04A8u;
label_2d04a8:
    // 0x2d04a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d04a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d04ac: 0xae020310  sw          $v0, 0x310($s0)
    ctx->pc = 0x2d04acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 784), GPR_U32(ctx, 2));
    // 0x2d04b0: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2d04b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2d04b4: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x2d04b4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d04b8: 0xc09ec2c  jal         func_27B0B0
    ctx->pc = 0x2D04B8u;
    SET_GPR_U32(ctx, 31, 0x2D04C0u);
    ctx->pc = 0x2D04BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D04B8u;
    // 0x2d04bc: 0x30a53fff  andi        $a1, $a1, 0x3FFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16383);
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B0B0u, 0x2D04B8u, 0x2D04C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D04C0u;
label_2d04c0:
    // 0x2d04c0: 0x8e0500c4  lw          $a1, 0xC4($s0)
    ctx->pc = 0x2d04c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x2d04c4: 0xa6020300  sh          $v0, 0x300($s0)
    ctx->pc = 0x2d04c4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 768), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d04c8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2d04c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d04cc: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2d04ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2d04d0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2d04d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d04d4: 0x213c3  sra         $v0, $v0, 15
    ctx->pc = 0x2d04d4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 15));
    // 0x2d04d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2d04d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2d04dc: 0xa202030d  sb          $v0, 0x30D($s0)
    ctx->pc = 0x2d04dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 781), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d04e0: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2d04e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2d04e4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2d04e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d04e8: 0x21383  sra         $v0, $v0, 14
    ctx->pc = 0x2d04e8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 14));
    // 0x2d04ec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2d04ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2d04f0: 0xa202030c  sb          $v0, 0x30C($s0)
    ctx->pc = 0x2d04f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 780), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d04f4: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2d04f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2d04f8: 0x84620002  lh          $v0, 0x2($v1)
    ctx->pc = 0x2d04f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d04fc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2d04fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2d0500: 0xa202030e  sb          $v0, 0x30E($s0)
    ctx->pc = 0x2d0500u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 782), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d0504: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2d0504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2d0508: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2d0508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d050c: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x2d050cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x2d0510: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2d0510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2d0514: 0xa202030f  sb          $v0, 0x30F($s0)
    ctx->pc = 0x2d0514u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 783), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d0518: 0x8ca3003c  lw          $v1, 0x3C($a1)
    ctx->pc = 0x2d0518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x2d051c: 0xa2040190  sb          $a0, 0x190($s0)
    ctx->pc = 0x2d051cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 400), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d0520: 0x31f82  srl         $v1, $v1, 30
    ctx->pc = 0x2d0520u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 30));
    // 0x2d0524: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2d0524u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2d0528: 0xa20301b9  sb          $v1, 0x1B9($s0)
    ctx->pc = 0x2d0528u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 441), (uint8_t)GPR_U32(ctx, 3));
label_2d052c:
    // 0x2d052c: 0x96220008  lhu         $v0, 0x8($s1)
    ctx->pc = 0x2d052cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2d0530: 0x213c2  srl         $v0, $v0, 15
    ctx->pc = 0x2d0530u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 15));
    // 0x2d0534: 0xa6020306  sh          $v0, 0x306($s0)
    ctx->pc = 0x2d0534u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 774), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d0538: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d0538u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d053c:
    // 0x2d053c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d053cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d0540: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d0540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d0544: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0544u;
        // 0x2d0548: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D054Cu;
    // 0x2d054c: 0x0  nop
    ctx->pc = 0x2d054cu;
    // NOP
    ctx->pc = 0x2d0550u;
}
