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

// Function: sub_00283370
// Address: 0x283370 - 0x283590
void sub_00283370_0x283370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00283370_0x283370");
#endif

    switch (ctx->pc) {
        case 0x2833c4u: goto label_2833c4;
        case 0x2833e8u: goto label_2833e8;
        case 0x283438u: goto label_283438;
        case 0x2834dcu: goto label_2834dc;
        case 0x2834e8u: goto label_2834e8;
        case 0x283500u: goto label_283500;
        default: break;
    }

    ctx->pc = 0x283370u;

    // 0x283370: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x283370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x283374: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x283374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x283378: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x283378u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28337c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x28337cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x283380: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x283380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x283384: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x283384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x283388: 0x8e020310  lw          $v0, 0x310($s0)
    ctx->pc = 0x283388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 784)));
    // 0x28338c: 0x1440007a  bnez        $v0, . + 4 + (0x7A << 2)
    ctx->pc = 0x28338Cu;
    {
        const bool branch_taken_0x28338c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x283390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28338Cu;
        // 0x283390: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28338c) {
            ctx->pc = 0x283578u;
            goto label_283578;
        }
    }
    ctx->pc = 0x283394u;
    // 0x283394: 0x860202c4  lh          $v0, 0x2C4($s0)
    ctx->pc = 0x283394u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 708)));
    // 0x283398: 0x2842001a  slti        $v0, $v0, 0x1A
    ctx->pc = 0x283398u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)26) ? 1 : 0);
    // 0x28339c: 0x50400077  beql        $v0, $zero, . + 4 + (0x77 << 2)
    ctx->pc = 0x28339Cu;
    {
        const bool branch_taken_0x28339c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28339c) {
            ctx->pc = 0x2833A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28339Cu;
            // 0x2833a0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28357Cu;
            goto label_28357c;
        }
    }
    ctx->pc = 0x2833A4u;
    // 0x2833a4: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x2833a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x2833a8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2833a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2833ac: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x2833acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x2833b0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2833b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2833b4: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x2833b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x2833b8: 0x86050096  lh          $a1, 0x96($s0)
    ctx->pc = 0x2833b8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 150)));
    // 0x2833bc: 0xc0a0c66  jal         func_283198
    ctx->pc = 0x2833BCu;
    SET_GPR_U32(ctx, 31, 0x2833C4u);
    ctx->pc = 0x2833C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2833BCu;
    // 0x2833c0: 0x8c640014  lw          $a0, 0x14($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283198u, 0x2833BCu, 0x2833C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2833C4u;
label_2833c4:
    // 0x2833c4: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x2833c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2833c8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2833c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2833cc: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x2833ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2833d0: 0x10430031  beq         $v0, $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x2833D0u;
    {
        const bool branch_taken_0x2833d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2833D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2833D0u;
        // 0x2833d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2833d0) {
            ctx->pc = 0x283498u;
            goto label_283498;
        }
    }
    ctx->pc = 0x2833D8u;
    // 0x2833d8: 0x96220008  lhu         $v0, 0x8($s1)
    ctx->pc = 0x2833d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2833dc: 0xa6020304  sh          $v0, 0x304($s0)
    ctx->pc = 0x2833dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 772), (uint16_t)GPR_U32(ctx, 2));
    // 0x2833e0: 0xc09905e  jal         func_264178
    ctx->pc = 0x2833E0u;
    SET_GPR_U32(ctx, 31, 0x2833E8u);
    ctx->pc = 0x2833E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2833E0u;
    // 0x2833e4: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x264178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264178u, 0x2833E0u, 0x2833E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2833E8u;
label_2833e8:
    // 0x2833e8: 0x86030146  lh          $v1, 0x146($s0)
    ctx->pc = 0x2833e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 326)));
    // 0x2833ec: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2833ECu;
    {
        const bool branch_taken_0x2833ec = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2833F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2833ECu;
        // 0x2833f0: 0xae020310  sw          $v0, 0x310($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 784), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2833ec) {
            ctx->pc = 0x283400u;
            goto label_283400;
        }
    }
    ctx->pc = 0x2833F4u;
    // 0x2833f4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2833F4u;
    {
        const bool branch_taken_0x2833f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2833F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2833F4u;
        // 0x2833f8: 0x96220012  lhu         $v0, 0x12($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2833f4) {
            ctx->pc = 0x283404u;
            goto label_283404;
        }
    }
    ctx->pc = 0x2833FCu;
    // 0x2833fc: 0x0  nop
    ctx->pc = 0x2833fcu;
    // NOP
label_283400:
    // 0x283400: 0x96220014  lhu         $v0, 0x14($s1)
    ctx->pc = 0x283400u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
label_283404:
    // 0x283404: 0xa60202fe  sh          $v0, 0x2FE($s0)
    ctx->pc = 0x283404u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 766), (uint16_t)GPR_U32(ctx, 2));
    // 0x283408: 0x860302fe  lh          $v1, 0x2FE($s0)
    ctx->pc = 0x283408u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
    // 0x28340c: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x28340cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x283410: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x283410u;
    {
        const bool branch_taken_0x283410 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x283410) {
            ctx->pc = 0x283414u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x283410u;
            // 0x283414: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x283428u;
            goto label_283428;
        }
    }
    ctx->pc = 0x283418u;
    // 0x283418: 0x8e0200c4  lw          $v0, 0xC4($s0)
    ctx->pc = 0x283418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x28341c: 0x94430024  lhu         $v1, 0x24($v0)
    ctx->pc = 0x28341cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x283420: 0xa60302fe  sh          $v1, 0x2FE($s0)
    ctx->pc = 0x283420u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 766), (uint16_t)GPR_U32(ctx, 3));
    // 0x283424: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x283424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_283428:
    // 0x283428: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x283428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28342c: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x28342cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x283430: 0xc09ec2c  jal         func_27B0B0
    ctx->pc = 0x283430u;
    SET_GPR_U32(ctx, 31, 0x283438u);
    ctx->pc = 0x283434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283430u;
    // 0x283434: 0x30a53fff  andi        $a1, $a1, 0x3FFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16383);
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B0B0u, 0x283430u, 0x283438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283438u;
label_283438:
    // 0x283438: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x283438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28343c: 0xa6020300  sh          $v0, 0x300($s0)
    ctx->pc = 0x28343cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 768), (uint16_t)GPR_U32(ctx, 2));
    // 0x283440: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x283440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x283444: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x283444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x283448: 0x213c3  sra         $v0, $v0, 15
    ctx->pc = 0x283448u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 15));
    // 0x28344c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28344cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x283450: 0xa202030d  sb          $v0, 0x30D($s0)
    ctx->pc = 0x283450u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 781), (uint8_t)GPR_U32(ctx, 2));
    // 0x283454: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x283454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x283458: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x283458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28345c: 0x21383  sra         $v0, $v0, 14
    ctx->pc = 0x28345cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 14));
    // 0x283460: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x283460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x283464: 0xa202030c  sb          $v0, 0x30C($s0)
    ctx->pc = 0x283464u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 780), (uint8_t)GPR_U32(ctx, 2));
    // 0x283468: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x283468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x28346c: 0x84620002  lh          $v0, 0x2($v1)
    ctx->pc = 0x28346cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x283470: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x283470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x283474: 0xa202030e  sb          $v0, 0x30E($s0)
    ctx->pc = 0x283474u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 782), (uint8_t)GPR_U32(ctx, 2));
    // 0x283478: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x283478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x28347c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x28347cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x283480: 0xa2050190  sb          $a1, 0x190($s0)
    ctx->pc = 0x283480u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 400), (uint8_t)GPR_U32(ctx, 5));
    // 0x283484: 0x31c43  sra         $v1, $v1, 17
    ctx->pc = 0x283484u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 17));
    // 0x283488: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x283488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x28348c: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x28348Cu;
    {
        const bool branch_taken_0x28348c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28348Cu;
        // 0x283490: 0xa203030f  sb          $v1, 0x30F($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 783), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28348c) {
            ctx->pc = 0x28356Cu;
            goto label_28356c;
        }
    }
    ctx->pc = 0x283494u;
    // 0x283494: 0x0  nop
    ctx->pc = 0x283494u;
    // NOP
label_283498:
    // 0x283498: 0x8e0400c4  lw          $a0, 0xC4($s0)
    ctx->pc = 0x283498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x28349c: 0x86030146  lh          $v1, 0x146($s0)
    ctx->pc = 0x28349cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 326)));
    // 0x2834a0: 0x86050096  lh          $a1, 0x96($s0)
    ctx->pc = 0x2834a0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 150)));
    // 0x2834a4: 0x94820024  lhu         $v0, 0x24($a0)
    ctx->pc = 0x2834a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x2834a8: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x2834a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2834ac: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x2834acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2834b0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2834B0u;
    {
        const bool branch_taken_0x2834b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2834B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2834B0u;
        // 0x2834b4: 0x96030096  lhu         $v1, 0x96($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 150)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2834b0) {
            ctx->pc = 0x2834C0u;
            goto label_2834c0;
        }
    }
    ctx->pc = 0x2834B8u;
    // 0x2834b8: 0x5ca00030  bgtzl       $a1, . + 4 + (0x30 << 2)
    ctx->pc = 0x2834B8u;
    {
        const bool branch_taken_0x2834b8 = (GPR_S32(ctx, 5) > 0);
        if (branch_taken_0x2834b8) {
            ctx->pc = 0x2834BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2834B8u;
            // 0x2834bc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28357Cu;
            goto label_28357c;
        }
    }
    ctx->pc = 0x2834C0u;
label_2834c0:
    // 0x2834c0: 0xa60302fe  sh          $v1, 0x2FE($s0)
    ctx->pc = 0x2834c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 766), (uint16_t)GPR_U32(ctx, 3));
    // 0x2834c4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2834c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2834c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2834c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2834cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2834ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2834d0: 0x96220008  lhu         $v0, 0x8($s1)
    ctx->pc = 0x2834d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2834d4: 0xc09ec0e  jal         func_27B038
    ctx->pc = 0x2834D4u;
    SET_GPR_U32(ctx, 31, 0x2834DCu);
    ctx->pc = 0x2834D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2834D4u;
    // 0x2834d8: 0xa6020304  sh          $v0, 0x304($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 772), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B038u, 0x2834D4u, 0x2834DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2834DCu;
label_2834dc:
    // 0x2834dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2834dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2834e0: 0xc09905e  jal         func_264178
    ctx->pc = 0x2834E0u;
    SET_GPR_U32(ctx, 31, 0x2834E8u);
    ctx->pc = 0x2834E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2834E0u;
    // 0x2834e4: 0x96050304  lhu         $a1, 0x304($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 772)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264178u, 0x2834E0u, 0x2834E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2834E8u;
label_2834e8:
    // 0x2834e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2834e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2834ec: 0xae020310  sw          $v0, 0x310($s0)
    ctx->pc = 0x2834ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 784), GPR_U32(ctx, 2));
    // 0x2834f0: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2834f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2834f4: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x2834f4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2834f8: 0xc09ec2c  jal         func_27B0B0
    ctx->pc = 0x2834F8u;
    SET_GPR_U32(ctx, 31, 0x283500u);
    ctx->pc = 0x2834FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2834F8u;
    // 0x2834fc: 0x30a53fff  andi        $a1, $a1, 0x3FFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16383);
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B0B0u, 0x2834F8u, 0x283500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283500u;
label_283500:
    // 0x283500: 0x8e0500c4  lw          $a1, 0xC4($s0)
    ctx->pc = 0x283500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x283504: 0xa6020300  sh          $v0, 0x300($s0)
    ctx->pc = 0x283504u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 768), (uint16_t)GPR_U32(ctx, 2));
    // 0x283508: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x283508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x28350c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x28350cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x283510: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x283510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x283514: 0x213c3  sra         $v0, $v0, 15
    ctx->pc = 0x283514u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 15));
    // 0x283518: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x283518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28351c: 0xa202030d  sb          $v0, 0x30D($s0)
    ctx->pc = 0x28351cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 781), (uint8_t)GPR_U32(ctx, 2));
    // 0x283520: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x283520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x283524: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x283524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x283528: 0x21383  sra         $v0, $v0, 14
    ctx->pc = 0x283528u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 14));
    // 0x28352c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28352cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x283530: 0xa202030c  sb          $v0, 0x30C($s0)
    ctx->pc = 0x283530u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 780), (uint8_t)GPR_U32(ctx, 2));
    // 0x283534: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x283534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x283538: 0x84620002  lh          $v0, 0x2($v1)
    ctx->pc = 0x283538u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x28353c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28353cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x283540: 0xa202030e  sb          $v0, 0x30E($s0)
    ctx->pc = 0x283540u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 782), (uint8_t)GPR_U32(ctx, 2));
    // 0x283544: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x283544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x283548: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x283548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28354c: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x28354cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x283550: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x283550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x283554: 0xa202030f  sb          $v0, 0x30F($s0)
    ctx->pc = 0x283554u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 783), (uint8_t)GPR_U32(ctx, 2));
    // 0x283558: 0x8ca3003c  lw          $v1, 0x3C($a1)
    ctx->pc = 0x283558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x28355c: 0xa2040190  sb          $a0, 0x190($s0)
    ctx->pc = 0x28355cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 400), (uint8_t)GPR_U32(ctx, 4));
    // 0x283560: 0x31f82  srl         $v1, $v1, 30
    ctx->pc = 0x283560u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 30));
    // 0x283564: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x283564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x283568: 0xa20301b9  sb          $v1, 0x1B9($s0)
    ctx->pc = 0x283568u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 441), (uint8_t)GPR_U32(ctx, 3));
label_28356c:
    // 0x28356c: 0x96220008  lhu         $v0, 0x8($s1)
    ctx->pc = 0x28356cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x283570: 0x213c2  srl         $v0, $v0, 15
    ctx->pc = 0x283570u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 15));
    // 0x283574: 0xa6020306  sh          $v0, 0x306($s0)
    ctx->pc = 0x283574u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 774), (uint16_t)GPR_U32(ctx, 2));
label_283578:
    // 0x283578: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x283578u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28357c:
    // 0x28357c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x28357cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x283580: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x283580u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x283584: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x283584u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x283588: 0x3e00008  jr          $ra
    ctx->pc = 0x283588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28358Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283588u;
        // 0x28358c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283590u;
}
