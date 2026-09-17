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

// Function: sub_0010A3A8
// Address: 0x10a3a8 - 0x10a4e8
void sub_0010A3A8_0x10a3a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010A3A8_0x10a3a8");
#endif

    switch (ctx->pc) {
        case 0x10a3f8u: goto label_10a3f8;
        case 0x10a434u: goto label_10a434;
        case 0x10a450u: goto label_10a450;
        case 0x10a47cu: goto label_10a47c;
        default: break;
    }

    ctx->pc = 0x10a3a8u;

    // 0x10a3a8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x10a3a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x10a3ac: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x10a3acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x10a3b0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10a3b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10a3b4: 0x34c62010  ori         $a2, $a2, 0x2010
    ctx->pc = 0x10a3b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8208);
    // 0x10a3b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10a3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10a3bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10a3bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a3c0: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x10a3c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x10a3c4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x10a3c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a3c8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x10a3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x10a3cc: 0x3c02ff7f  lui         $v0, 0xFF7F
    ctx->pc = 0x10a3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
    // 0x10a3d0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x10a3d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x10a3d4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x10a3d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x10a3d8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10a3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10a3dc: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x10a3dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x10a3e0: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x10a3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x10a3e4: 0xae300858  sw          $s0, 0x858($s1)
    ctx->pc = 0x10a3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2136), GPR_U32(ctx, 16));
    // 0x10a3e8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x10a3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u)); // MMIO: 0x10002010
    // 0x10a3ec: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x10a3ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x10a3f0: 0xc0421a2  jal         func_108688
    ctx->pc = 0x10A3F0u;
    SET_GPR_U32(ctx, 31, 0x10A3F8u);
    ctx->pc = 0x10A3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A3F0u;
    // 0x10a3f4: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108688u, 0x10A3F0u, 0x10A3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A3F8u;
label_10a3f8:
    // 0x10a3f8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x10a3f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a3fc: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x10a3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
    // 0x10a400: 0x121442  srl         $v0, $s2, 17
    ctx->pc = 0x10a400u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 17));
    // 0x10a404: 0x30750fff  andi        $s5, $v1, 0xFFF
    ctx->pc = 0x10a404u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x10a408: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x10a408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x10a40c: 0x122342  srl         $a0, $s2, 13
    ctx->pc = 0x10a40cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 18), 13));
    // 0x10a410: 0x121bc2  srl         $v1, $s2, 15
    ctx->pc = 0x10a410u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 15));
    // 0x10a414: 0x30940003  andi        $s4, $a0, 0x3
    ctx->pc = 0x10a414u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x10a418: 0x30730003  andi        $s3, $v1, 0x3
    ctx->pc = 0x10a418u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x10a41c: 0x10500005  beq         $v0, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10A41Cu;
    {
        const bool branch_taken_0x10a41c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x10A420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A41Cu;
        // 0x10a420: 0xae220150  sw          $v0, 0x150($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 336), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a41c) {
            ctx->pc = 0x10A434u;
            goto label_10a434;
        }
    }
    ctx->pc = 0x10A424u;
    // 0x10a424: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x10a424u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x10a428: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10a428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a42c: 0xc0417dc  jal         func_105F70
    ctx->pc = 0x10A42Cu;
    SET_GPR_U32(ctx, 31, 0x10A434u);
    ctx->pc = 0x10A430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A42Cu;
    // 0x10a430: 0x24a5db50  addiu       $a1, $a1, -0x24B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105F70u, 0x10A42Cu, 0x10A434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A434u;
label_10a434:
    // 0x10a434: 0x1214c2  srl         $v0, $s2, 19
    ctx->pc = 0x10a434u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 19));
    // 0x10a438: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10a438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a43c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x10a43cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x10a440: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x10a440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x10a444: 0xae22014c  sw          $v0, 0x14C($s1)
    ctx->pc = 0x10a444u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 332), GPR_U32(ctx, 2));
    // 0x10a448: 0xc0421a2  jal         func_108688
    ctx->pc = 0x10A448u;
    SET_GPR_U32(ctx, 31, 0x10A450u);
    ctx->pc = 0x10A44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A448u;
    // 0x10a44c: 0x128502  srl         $s0, $s2, 20 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 18), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108688u, 0x10A448u, 0x10A450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A450u;
label_10a450:
    // 0x10a450: 0x29202  srl         $s2, $v0, 8
    ctx->pc = 0x10a450u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x10a454: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x10a454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x10a458: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x10A458u;
    {
        const bool branch_taken_0x10a458 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x10A45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A458u;
        // 0x10a45c: 0x24020058  addiu       $v0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a458) {
            ctx->pc = 0x10A47Cu;
            goto label_10a47c;
        }
    }
    ctx->pc = 0x10A460u;
    // 0x10a460: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10A460u;
    {
        const bool branch_taken_0x10a460 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x10A464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A460u;
        // 0x10a464: 0x24020044  addiu       $v0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a460) {
            ctx->pc = 0x10A47Cu;
            goto label_10a47c;
        }
    }
    ctx->pc = 0x10A468u;
    // 0x10a468: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10A468u;
    {
        const bool branch_taken_0x10a468 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x10A46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A468u;
        // 0x10a46c: 0x3c050015  lui         $a1, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a468) {
            ctx->pc = 0x10A47Cu;
            goto label_10a47c;
        }
    }
    ctx->pc = 0x10A470u;
    // 0x10a470: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10a470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a474: 0xc0417dc  jal         func_105F70
    ctx->pc = 0x10A474u;
    SET_GPR_U32(ctx, 31, 0x10A47Cu);
    ctx->pc = 0x10A478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A474u;
    // 0x10a478: 0x24a5db78  addiu       $a1, $a1, -0x2488 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105F70u, 0x10A474u, 0x10A47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A47Cu;
label_10a47c:
    // 0x10a47c: 0x8e240134  lw          $a0, 0x134($s1)
    ctx->pc = 0x10a47cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 308)));
    // 0x10a480: 0x154480  sll         $t0, $s5, 18
    ctx->pc = 0x10a480u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 21), 18));
    // 0x10a484: 0x8e230138  lw          $v1, 0x138($s1)
    ctx->pc = 0x10a484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 312)));
    // 0x10a488: 0x124a80  sll         $t1, $s2, 10
    ctx->pc = 0x10a488u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 18), 10));
    // 0x10a48c: 0x8e260144  lw          $a2, 0x144($s1)
    ctx->pc = 0x10a48cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 324)));
    // 0x10a490: 0x133b00  sll         $a3, $s3, 12
    ctx->pc = 0x10a490u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 19), 12));
    // 0x10a494: 0x8e220148  lw          $v0, 0x148($s1)
    ctx->pc = 0x10a494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x10a498: 0x142b00  sll         $a1, $s4, 12
    ctx->pc = 0x10a498u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 12));
    // 0x10a49c: 0x30840fff  andi        $a0, $a0, 0xFFF
    ctx->pc = 0x10a49cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x10a4a0: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x10a4a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x10a4a4: 0xe43825  or          $a3, $a3, $a0
    ctx->pc = 0x10a4a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
    // 0x10a4a8: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x10a4a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x10a4ac: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x10a4acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x10a4b0: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x10a4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x10a4b4: 0xae220148  sw          $v0, 0x148($s1)
    ctx->pc = 0x10a4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 2));
    // 0x10a4b8: 0xae270134  sw          $a3, 0x134($s1)
    ctx->pc = 0x10a4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 308), GPR_U32(ctx, 7));
    // 0x10a4bc: 0xae250138  sw          $a1, 0x138($s1)
    ctx->pc = 0x10a4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 312), GPR_U32(ctx, 5));
    // 0x10a4c0: 0xae260144  sw          $a2, 0x144($s1)
    ctx->pc = 0x10a4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 324), GPR_U32(ctx, 6));
    // 0x10a4c4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x10a4c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10a4c8: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x10a4c8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10a4cc: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x10a4ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10a4d0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x10a4d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10a4d4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10a4d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10a4d8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10a4d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a4dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10a4dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10a4e0: 0x3e00008  jr          $ra
    ctx->pc = 0x10A4E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A4E0u;
        // 0x10a4e4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A4E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10A4E8u;
}
