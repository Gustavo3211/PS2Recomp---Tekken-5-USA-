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

// Function: sub_0027A350
// Address: 0x27a350 - 0x27a498
void sub_0027A350_0x27a350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027A350_0x27a350");
#endif

    switch (ctx->pc) {
        case 0x27a3a8u: goto label_27a3a8;
        case 0x27a420u: goto label_27a420;
        case 0x27a434u: goto label_27a434;
        case 0x27a448u: goto label_27a448;
        default: break;
    }

    ctx->pc = 0x27a350u;

    // 0x27a350: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x27a350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x27a354: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x27a354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x27a358: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27a358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27a35c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27a35cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a360: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x27a360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x27a364: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x27a364u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a368: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x27a368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x27a36c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x27a36cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a370: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x27a370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x27a374: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x27a374u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a378: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x27a378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x27a37c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x27a37cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x27a380: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x27a380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x27a384: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x27a384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x27a388: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x27a388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x27a38c: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x27a38cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27a390: 0x10620035  beq         $v1, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x27A390u;
    {
        const bool branch_taken_0x27a390 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27A394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A390u;
        // 0x27a394: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a390) {
            ctx->pc = 0x27A468u;
            goto label_27a468;
        }
    }
    ctx->pc = 0x27A398u;
    // 0x27a398: 0x34178005  ori         $s7, $zero, 0x8005
    ctx->pc = 0x27a398u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32773);
    // 0x27a39c: 0x34168006  ori         $s6, $zero, 0x8006
    ctx->pc = 0x27a39cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32774);
    // 0x27a3a0: 0x34158000  ori         $s5, $zero, 0x8000
    ctx->pc = 0x27a3a0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x27a3a4: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x27a3a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_27a3a8:
    // 0x27a3a8: 0x1457000b  bne         $v0, $s7, . + 4 + (0xB << 2)
    ctx->pc = 0x27A3A8u;
    {
        const bool branch_taken_0x27a3a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        if (branch_taken_0x27a3a8) {
            ctx->pc = 0x27A3D8u;
            goto label_27a3d8;
        }
    }
    ctx->pc = 0x27A3B0u;
    // 0x27a3b0: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x27a3b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a3b4: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x27a3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x27a3b8: 0x96840008  lhu         $a0, 0x8($s4)
    ctx->pc = 0x27a3b8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x27a3bc: 0x8c6501b0  lw          $a1, 0x1B0($v1)
    ctx->pc = 0x27a3bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 432)));
    // 0x27a3c0: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x27a3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x27a3c4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x27a3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x27a3c8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x27a3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x27a3cc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x27A3CCu;
    {
        const bool branch_taken_0x27a3cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A3CCu;
        // 0x27a3d0: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a3cc) {
            ctx->pc = 0x27A3E8u;
            goto label_27a3e8;
        }
    }
    ctx->pc = 0x27A3D4u;
    // 0x27a3d4: 0x0  nop
    ctx->pc = 0x27a3d4u;
    // NOP
label_27a3d8:
    // 0x27a3d8: 0x54560004  bnel        $v0, $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x27A3D8u;
    {
        const bool branch_taken_0x27a3d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x27a3d8) {
            ctx->pc = 0x27A3DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27A3D8u;
            // 0x27a3dc: 0x96020010  lhu         $v0, 0x10($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27A3ECu;
            goto label_27a3ec;
        }
    }
    ctx->pc = 0x27A3E0u;
    // 0x27a3e0: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x27A3E0u;
    {
        const bool branch_taken_0x27a3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A3E0u;
        // 0x27a3e4: 0x280802d  daddu       $s0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a3e0) {
            ctx->pc = 0x27A458u;
            goto label_27a458;
        }
    }
    ctx->pc = 0x27A3E8u;
label_27a3e8:
    // 0x27a3e8: 0x96020010  lhu         $v0, 0x10($s0)
    ctx->pc = 0x27a3e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
label_27a3ec:
    // 0x27a3ec: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x27a3ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x27a3f0: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x27A3F0u;
    {
        const bool branch_taken_0x27a3f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27a3f0) {
            ctx->pc = 0x27A3F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27A3F0u;
            // 0x27a3f4: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27A45Cu;
            goto label_27a45c;
        }
    }
    ctx->pc = 0x27A3F8u;
    // 0x27a3f8: 0x96020012  lhu         $v0, 0x12($s0)
    ctx->pc = 0x27a3f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x27a3fc: 0x53102a  slt         $v0, $v0, $s3
    ctx->pc = 0x27a3fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x27a400: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x27A400u;
    {
        const bool branch_taken_0x27a400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27a400) {
            ctx->pc = 0x27A404u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27A400u;
            // 0x27a404: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27A45Cu;
            goto label_27a45c;
        }
    }
    ctx->pc = 0x27A408u;
    // 0x27a408: 0x96020016  lhu         $v0, 0x16($s0)
    ctx->pc = 0x27a408u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x27a40c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x27a40cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x27a410: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x27A410u;
    {
        const bool branch_taken_0x27a410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A410u;
        // 0x27a414: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a410) {
            ctx->pc = 0x27A458u;
            goto label_27a458;
        }
    }
    ctx->pc = 0x27A418u;
    // 0x27a418: 0xc09e32e  jal         func_278CB8
    ctx->pc = 0x27A418u;
    SET_GPR_U32(ctx, 31, 0x27A420u);
    ctx->pc = 0x27A41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A418u;
    // 0x27a41c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278CB8u, 0x27A418u, 0x27A420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A420u;
label_27a420:
    // 0x27a420: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x27A420u;
    {
        const bool branch_taken_0x27a420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A420u;
        // 0x27a424: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a420) {
            ctx->pc = 0x27A458u;
            goto label_27a458;
        }
    }
    ctx->pc = 0x27A428u;
    // 0x27a428: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27a428u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a42c: 0xc09fad8  jal         func_27EB60
    ctx->pc = 0x27A42Cu;
    SET_GPR_U32(ctx, 31, 0x27A434u);
    ctx->pc = 0x27A430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A42Cu;
    // 0x27a430: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EB60u, 0x27A42Cu, 0x27A434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A434u;
label_27a434:
    // 0x27a434: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x27A434u;
    {
        const bool branch_taken_0x27a434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A434u;
        // 0x27a438: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a434) {
            ctx->pc = 0x27A458u;
            goto label_27a458;
        }
    }
    ctx->pc = 0x27A43Cu;
    // 0x27a43c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27a43cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a440: 0xc09ec0e  jal         func_27B038
    ctx->pc = 0x27A440u;
    SET_GPR_U32(ctx, 31, 0x27A448u);
    ctx->pc = 0x27A444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A440u;
    // 0x27a444: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B038u, 0x27A440u, 0x27A448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A448u;
label_27a448:
    // 0x27a448: 0x96020016  lhu         $v0, 0x16($s0)
    ctx->pc = 0x27a448u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x27a44c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x27a44cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x27a450: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27A450u;
    {
        const bool branch_taken_0x27a450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27A454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A450u;
        // 0x27a454: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a450) {
            ctx->pc = 0x27A46Cu;
            goto label_27a46c;
        }
    }
    ctx->pc = 0x27A458u;
label_27a458:
    // 0x27a458: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x27a458u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_27a45c:
    // 0x27a45c: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x27a45cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27a460: 0x1475ffd1  bne         $v1, $s5, . + 4 + (-0x2F << 2)
    ctx->pc = 0x27A460u;
    {
        const bool branch_taken_0x27a460 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 21));
        ctx->pc = 0x27A464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A460u;
        // 0x27a464: 0x3062ffff  andi        $v0, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a460) {
            ctx->pc = 0x27A3A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27a3a8;
        }
    }
    ctx->pc = 0x27A468u;
label_27a468:
    // 0x27a468: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x27a468u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27a46c:
    // 0x27a46c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27a46cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27a470: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x27a470u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27a474: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x27a474u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27a478: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x27a478u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x27a47c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x27a47cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27a480: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x27a480u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x27a484: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x27a484u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27a488: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x27a488u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x27a48c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x27a48cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27a490: 0x3e00008  jr          $ra
    ctx->pc = 0x27A490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27A494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A490u;
        // 0x27a494: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27A490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27A498u;
}
