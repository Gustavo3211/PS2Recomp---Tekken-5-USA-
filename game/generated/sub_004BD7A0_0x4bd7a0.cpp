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

// Function: sub_004BD7A0
// Address: 0x4bd7a0 - 0x4bdf58
void sub_004BD7A0_0x4bd7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BD7A0_0x4bd7a0");
#endif

    switch (ctx->pc) {
        case 0x4bd7a4u: goto label_4bd7a4;
        case 0x4bd7b8u: goto label_4bd7b8;
        case 0x4bd7ccu: goto label_4bd7cc;
        case 0x4bd808u: goto label_4bd808;
        case 0x4bd930u: goto label_4bd930;
        case 0x4bd960u: goto label_4bd960;
        case 0x4bd988u: goto label_4bd988;
        case 0x4bda20u: goto label_4bda20;
        case 0x4bdb44u: goto label_4bdb44;
        case 0x4bdb5cu: goto label_4bdb5c;
        case 0x4bdb70u: goto label_4bdb70;
        case 0x4bdd3cu: goto label_4bdd3c;
        case 0x4bde78u: goto label_4bde78;
        case 0x4bdeb0u: goto label_4bdeb0;
        case 0x4bdec4u: goto label_4bdec4;
        case 0x4bded8u: goto label_4bded8;
        case 0x4bdf34u: goto label_4bdf34;
        case 0x4bdf3cu: goto label_4bdf3c;
        case 0x4bdf44u: goto label_4bdf44;
        default: break;
    }

    ctx->pc = 0x4bd7a0u;

    // 0x4bd7a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4bd7a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4bd7a4:
    // 0x4bd7a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4bd7a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4bd7a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4bd7a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4bd7ac: 0x3e00008  jr          $ra
    ctx->pc = 0x4BD7ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BD7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BD7ACu;
        // 0x4bd7b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BD7ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BD7B4u;
    // 0x4bd7b4: 0x0  nop
    ctx->pc = 0x4bd7b4u;
    // NOP
label_4bd7b8:
    // 0x4bd7b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4bd7b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4bd7bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4bd7bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4bd7c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4bd7c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4bd7c4: 0xc12b5dc  jal         func_4AD770
    ctx->pc = 0x4BD7C4u;
    SET_GPR_U32(ctx, 31, 0x4BD7CCu);
    ctx->pc = 0x4BD7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BD7C4u;
    // 0x4bd7c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD770u, 0x4BD7C4u, 0x4BD7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BD7CCu;
label_4bd7cc:
    // 0x4bd7cc: 0x24030025  addiu       $v1, $zero, 0x25
    ctx->pc = 0x4bd7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x4bd7d0: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x4bd7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x4bd7d4: 0xa444015e  sh          $a0, 0x15E($v0)
    ctx->pc = 0x4bd7d4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 350), (uint16_t)GPR_U32(ctx, 4));
    // 0x4bd7d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4bd7d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bd7dc: 0xac500140  sw          $s0, 0x140($v0)
    ctx->pc = 0x4bd7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 320), GPR_U32(ctx, 16));
    // 0x4bd7e0: 0x260501bc  addiu       $a1, $s0, 0x1BC
    ctx->pc = 0x4bd7e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 444));
    // 0x4bd7e4: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x4bd7e4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x4bd7e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4bd7e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4bd7ec: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4bd7ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4bd7f0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4bd7f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4bd7f4: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4bd7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4bd7f8: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x4bd7f8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4bd7fc: 0x812f602  j           func_4BD808
    ctx->pc = 0x4BD7FCu;
    ctx->pc = 0x4BD800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BD7FCu;
    // 0x4bd800: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BD808u;
    goto label_4bd808;
    ctx->pc = 0x4BD804u;
    // 0x4bd804: 0x0  nop
    ctx->pc = 0x4bd804u;
    // NOP
label_4bd808:
    // 0x4bd808: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4bd808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4bd80c: 0x3c0d007f  lui         $t5, 0x7F
    ctx->pc = 0x4bd80cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)127 << 16));
    // 0x4bd810: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4bd810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4bd814: 0x25ad0e44  addiu       $t5, $t5, 0xE44
    ctx->pc = 0x4bd814u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 3652));
    // 0x4bd818: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4bd818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4bd81c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4bd81cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bd820: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4bd820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4bd824: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4bd824u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4bd828: 0x3c0e007f  lui         $t6, 0x7F
    ctx->pc = 0x4bd828u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)127 << 16));
    // 0x4bd82c: 0x3c0f007f  lui         $t7, 0x7F
    ctx->pc = 0x4bd82cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)127 << 16));
    // 0x4bd830: 0x86220012  lh          $v0, 0x12($s1)
    ctx->pc = 0x4bd830u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x4bd834: 0x25ce0e48  addiu       $t6, $t6, 0xE48
    ctx->pc = 0x4bd834u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 3656));
    // 0x4bd838: 0x8da50000  lw          $a1, 0x0($t5)
    ctx->pc = 0x4bd838u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F0E44u));
    // 0x4bd83c: 0x25ef0e4c  addiu       $t7, $t7, 0xE4C
    ctx->pc = 0x4bd83cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 3660));
    // 0x4bd840: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4bd840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4bd844: 0x8dc60000  lw          $a2, 0x0($t6)
    ctx->pc = 0x4bd844u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7F0E48u));
    // 0x4bd848: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4bd848u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4bd84c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4bd84cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4bd850: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4bd850u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4bd854: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4bd854u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4bd858: 0xada50000  sw          $a1, 0x0($t5)
    ctx->pc = 0x4bd858u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 5));
    // 0x4bd85c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4bd85cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4bd860: 0x3c0c007f  lui         $t4, 0x7F
    ctx->pc = 0x4bd860u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)127 << 16));
    // 0x4bd864: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x4bd864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x4bd868: 0x258c0e3c  addiu       $t4, $t4, 0xE3C
    ctx->pc = 0x4bd868u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 3644));
    // 0x4bd86c: 0x8c700e50  lw          $s0, 0xE50($v1)
    ctx->pc = 0x4bd86cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3664)));
    // 0x4bd870: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4bd870u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4bd874: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4bd874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x4bd878: 0x8de80000  lw          $t0, 0x0($t7)
    ctx->pc = 0x4bd878u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x4bd87c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4bd87cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4bd880: 0x85ab0000  lh          $t3, 0x0($t5)
    ctx->pc = 0x4bd880u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4bd884: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4bd884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4bd888: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4bd888u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4bd88c: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4bd88cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4bd890: 0x34631400  ori         $v1, $v1, 0x1400
    ctx->pc = 0x4bd890u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5120);
    // 0x4bd894: 0xadc60000  sw          $a2, 0x0($t6)
    ctx->pc = 0x4bd894u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 6));
    // 0x4bd898: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4bd898u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4bd89c: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x4bd89cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x4bd8a0: 0x85ca0000  lh          $t2, 0x0($t6)
    ctx->pc = 0x4bd8a0u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4bd8a4: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4bd8a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x4bd8a8: 0x8d890000  lw          $t1, 0x0($t4)
    ctx->pc = 0x4bd8a8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4bd8ac: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4bd8acu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4bd8b0: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4bd8b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4bd8b4: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x4bd8b4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x4bd8b8: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x4bd8b8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x4bd8bc: 0x1234824  and         $t1, $t1, $v1
    ctx->pc = 0x4bd8bcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x4bd8c0: 0xade80000  sw          $t0, 0x0($t7)
    ctx->pc = 0x4bd8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 8));
    // 0x4bd8c4: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4bd8c4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4bd8c8: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x4bd8c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bd8cc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4bd8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4bd8d0: 0x85e30000  lh          $v1, 0x0($t7)
    ctx->pc = 0x4bd8d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x4bd8d4: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4bd8d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x4bd8d8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4bd8d8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4bd8dc: 0x1625823  subu        $t3, $t3, $v0
    ctx->pc = 0x4bd8dcu;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x4bd8e0: 0x1675825  or          $t3, $t3, $a3
    ctx->pc = 0x4bd8e0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 7));
    // 0x4bd8e4: 0xab2824  and         $a1, $a1, $t3
    ctx->pc = 0x4bd8e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 11));
    // 0x4bd8e8: 0xada50000  sw          $a1, 0x0($t5)
    ctx->pc = 0x4bd8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 5));
    // 0x4bd8ec: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x4bd8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4bd8f0: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4bd8f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x4bd8f4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4bd8f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4bd8f8: 0x1425023  subu        $t2, $t2, $v0
    ctx->pc = 0x4bd8f8u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x4bd8fc: 0x1475025  or          $t2, $t2, $a3
    ctx->pc = 0x4bd8fcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 7));
    // 0x4bd900: 0xca3024  and         $a2, $a2, $t2
    ctx->pc = 0x4bd900u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 10));
    // 0x4bd904: 0xadc60000  sw          $a2, 0x0($t6)
    ctx->pc = 0x4bd904u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 6));
    // 0x4bd908: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x4bd908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x4bd90c: 0xad890000  sw          $t1, 0x0($t4)
    ctx->pc = 0x4bd90cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 9));
    // 0x4bd910: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4bd910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x4bd914: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4bd914u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4bd918: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4bd918u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4bd91c: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x4bd91cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x4bd920: 0x1034024  and         $t0, $t0, $v1
    ctx->pc = 0x4bd920u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x4bd924: 0xade80000  sw          $t0, 0x0($t7)
    ctx->pc = 0x4bd924u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 8));
    // 0x4bd928: 0xc122d6e  jal         func_48B5B8
    ctx->pc = 0x4BD928u;
    SET_GPR_U32(ctx, 31, 0x4BD930u);
    ctx->pc = 0x4BD92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BD928u;
    // 0x4bd92c: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B5B8u, 0x4BD928u, 0x4BD930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BD930u;
label_4bd930:
    // 0x4bd930: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4BD930u;
    {
        const bool branch_taken_0x4bd930 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BD934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BD930u;
        // 0x4bd934: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bd930) {
            ctx->pc = 0x4BD950u;
            goto label_4bd950;
        }
    }
    ctx->pc = 0x4BD938u;
    // 0x4bd938: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4bd938u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4bd93c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4bd93cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4bd940: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4bd940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4bd944: 0x812f7ac  j           func_4BDEB0
    ctx->pc = 0x4BD944u;
    ctx->pc = 0x4BD948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BD944u;
    // 0x4bd948: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BDEB0u;
    goto label_4bdeb0;
    ctx->pc = 0x4BD94Cu;
    // 0x4bd94c: 0x0  nop
    ctx->pc = 0x4bd94cu;
    // NOP
label_4bd950:
    // 0x4bd950: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x4bd950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x4bd954: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4bd954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x4bd958: 0xc1297fa  jal         func_4A5FE8
    ctx->pc = 0x4BD958u;
    SET_GPR_U32(ctx, 31, 0x4BD960u);
    ctx->pc = 0x4BD95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BD958u;
    // 0x4bd95c: 0xa443fa44  sh          $v1, -0x5BC($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294965828), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5FE8u, 0x4BD958u, 0x4BD960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BD960u;
label_4bd960:
    // 0x4bd960: 0x262301bc  addiu       $v1, $s1, 0x1BC
    ctx->pc = 0x4bd960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 444));
    // 0x4bd964: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4bd964u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4bd968: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4bd968u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4bd96c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4bd96cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bd970: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4bd970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4bd974: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4bd974u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4bd978: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4bd978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4bd97c: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4bd97cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4bd980: 0x812f662  j           func_4BD988
    ctx->pc = 0x4BD980u;
    ctx->pc = 0x4BD984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BD980u;
    // 0x4bd984: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BD988u;
    goto label_4bd988;
    ctx->pc = 0x4BD988u;
label_4bd988:
    // 0x4bd988: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4bd988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4bd98c: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4bd98cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4bd990: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4bd990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4bd994: 0x24c60e38  addiu       $a2, $a2, 0xE38
    ctx->pc = 0x4bd994u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3640));
    // 0x4bd998: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4bd998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4bd99c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x4bd99cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bd9a0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4bd9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0E38u));
    // 0x4bd9a4: 0x34420300  ori         $v0, $v0, 0x300
    ctx->pc = 0x4bd9a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)768);
    // 0x4bd9a8: 0x25090136  addiu       $t1, $t0, 0x136
    ctx->pc = 0x4bd9a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 310));
    // 0x4bd9ac: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4bd9acu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4bd9b0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bd9b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bd9b4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bd9b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bd9b8: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4bd9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4bd9bc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bd9bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bd9c0: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x4bd9c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4bd9c4: 0x85250000  lh          $a1, 0x0($t1)
    ctx->pc = 0x4bd9c4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4bd9c8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4bd9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4bd9cc: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4bd9ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4bd9d0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bd9d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bd9d4: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4bd9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4bd9d8: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4bd9d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4bd9dc: 0xa5220000  sh          $v0, 0x0($t1)
    ctx->pc = 0x4bd9dcu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4bd9e0: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x4bd9e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4bd9e4: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4BD9E4u;
    {
        const bool branch_taken_0x4bd9e4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4BD9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BD9E4u;
        // 0x4bd9e8: 0x250a01bc  addiu       $t2, $t0, 0x1BC (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), 444));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bd9e4) {
            ctx->pc = 0x4BD9F8u;
            goto label_4bd9f8;
        }
    }
    ctx->pc = 0x4BD9ECu;
    // 0x4bd9ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4bd9ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4bd9f0: 0x812f7ac  j           func_4BDEB0
    ctx->pc = 0x4BD9F0u;
    ctx->pc = 0x4BD9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BD9F0u;
    // 0x4bd9f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BDEB0u;
    goto label_4bdeb0;
    ctx->pc = 0x4BD9F8u;
label_4bd9f8:
    // 0x4bd9f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4bd9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4bd9fc: 0x24038000  addiu       $v1, $zero, -0x8000
    ctx->pc = 0x4bd9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x4bda00: 0xa5020160  sh          $v0, 0x160($t0)
    ctx->pc = 0x4bda00u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 352), (uint16_t)GPR_U32(ctx, 2));
    // 0x4bda04: 0xa5230000  sh          $v1, 0x0($t1)
    ctx->pc = 0x4bda04u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4bda08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4bda08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4bda0c: 0x95420000  lhu         $v0, 0x0($t2)
    ctx->pc = 0x4bda0cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4bda10: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4bda10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4bda14: 0xa5420000  sh          $v0, 0x0($t2)
    ctx->pc = 0x4bda14u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4bda18: 0x812f688  j           func_4BDA20
    ctx->pc = 0x4BDA18u;
    ctx->pc = 0x4BDA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BDA18u;
    // 0x4bda1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BDA20u;
    goto label_4bda20;
    ctx->pc = 0x4BDA20u;
label_4bda20:
    // 0x4bda20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4bda20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4bda24: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4bda24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4bda28: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4bda28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4bda2c: 0x3c14ffff  lui         $s4, 0xFFFF
    ctx->pc = 0x4bda2cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65535 << 16));
    // 0x4bda30: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4bda30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4bda34: 0x24760e38  addiu       $s6, $v1, 0xE38
    ctx->pc = 0x4bda34u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 3640));
    // 0x4bda38: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x4bda38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x4bda3c: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x4bda3cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bda40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4bda40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4bda44: 0x27c5015e  addiu       $a1, $fp, 0x15E
    ctx->pc = 0x4bda44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 350));
    // 0x4bda48: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4bda48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4bda4c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4bda4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4bda50: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4bda50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4bda54: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4bda54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4bda58: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4bda58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x4bda5c: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x4bda5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x4bda60: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4bda60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4bda64: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4bda64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4bda68: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x4bda68u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4bda6c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4bda6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4bda70: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4bda70u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4bda74: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x4bda74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4bda78: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4bda78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4bda7c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bda7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bda80: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bda80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bda84: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x4bda84u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x4bda88: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bda88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bda8c: 0x96c20000  lhu         $v0, 0x0($s6)
    ctx->pc = 0x4bda8cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4bda90: 0x304200bf  andi        $v0, $v0, 0xBF
    ctx->pc = 0x4bda90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)191);
    // 0x4bda94: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4bda94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4bda98: 0x623024  and         $a2, $v1, $v0
    ctx->pc = 0x4bda98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bda9c: 0xaec60000  sw          $a2, 0x0($s6)
    ctx->pc = 0x4bda9cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 6));
    // 0x4bdaa0: 0x86c20000  lh          $v0, 0x0($s6)
    ctx->pc = 0x4bdaa0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4bdaa4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4BDAA4u;
    {
        const bool branch_taken_0x4bdaa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BDAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BDAA4u;
        // 0x4bdaa8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bdaa4) {
            ctx->pc = 0x4BDAD8u;
            goto label_4bdad8;
        }
    }
    ctx->pc = 0x4BDAACu;
    // 0x4bdaac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4bdaacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4bdab0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4bdab0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4bdab4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4bdab4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4bdab8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4bdab8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4bdabc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4bdabcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4bdac0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4bdac0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4bdac4: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4bdac4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4bdac8: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4bdac8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4bdacc: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4bdaccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4bdad0: 0x812f7ac  j           func_4BDEB0
    ctx->pc = 0x4BDAD0u;
    ctx->pc = 0x4BDAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BDAD0u;
    // 0x4bdad4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BDEB0u;
    goto label_4bdeb0;
    ctx->pc = 0x4BDAD8u;
label_4bdad8:
    // 0x4bdad8: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4bdad8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4bdadc: 0x3c12007f  lui         $s2, 0x7F
    ctx->pc = 0x4bdadcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)127 << 16));
    // 0x4bdae0: 0x26100e44  addiu       $s0, $s0, 0xE44
    ctx->pc = 0x4bdae0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3652));
    // 0x4bdae4: 0x26520e4c  addiu       $s2, $s2, 0xE4C
    ctx->pc = 0x4bdae4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3660));
    // 0x4bdae8: 0x3c11007f  lui         $s1, 0x7F
    ctx->pc = 0x4bdae8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    // 0x4bdaec: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4bdaecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0E44u));
    // 0x4bdaf0: 0x26310e48  addiu       $s1, $s1, 0xE48
    ctx->pc = 0x4bdaf0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3656));
    // 0x4bdaf4: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x4bdaf4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7F0E4Cu));
    // 0x4bdaf8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x4bdaf8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F0E48u));
    // 0x4bdafc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4bdafcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4bdb00: 0x3442003c  ori         $v0, $v0, 0x3C
    ctx->pc = 0x4bdb00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)60);
    // 0x4bdb04: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bdb04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bdb08: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4bdb08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4bdb0c: 0xb42824  and         $a1, $a1, $s4
    ctx->pc = 0x4bdb0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 20));
    // 0x4bdb10: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4bdb10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4bdb14: 0x741824  and         $v1, $v1, $s4
    ctx->pc = 0x4bdb14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 20));
    // 0x4bdb18: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4bdb18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4bdb1c: 0x34c3ffff  ori         $v1, $a2, 0xFFFF
    ctx->pc = 0x4bdb1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4bdb20: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x4bdb20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x4bdb24: 0x27d3011c  addiu       $s3, $fp, 0x11C
    ctx->pc = 0x4bdb24u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), 284));
    // 0x4bdb28: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x4bdb28u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x4bdb2c: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x4bdb2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4bdb30: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4bdb30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4bdb34: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bdb34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bdb38: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x4bdb38u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x4bdb3c: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4BDB3Cu;
    SET_GPR_U32(ctx, 31, 0x4BDB44u);
    ctx->pc = 0x4BDB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BDB3Cu;
    // 0x4bdb40: 0x86c40000  lh          $a0, 0x0($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4BDB3Cu, 0x4BDB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BDB44u;
label_4bdb44:
    // 0x4bdb44: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4bdb44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4bdb48: 0x24750e3c  addiu       $s5, $v1, 0xE3C
    ctx->pc = 0x4bdb48u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 3644));
    // 0x4bdb4c: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x4bdb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x4bdb50: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x4bdb50u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7F0E3Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0E3Cu, _value); } while (0);
    // 0x4bdb54: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4BDB54u;
    SET_GPR_U32(ctx, 31, 0x4BDB5Cu);
    ctx->pc = 0x4BDB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BDB54u;
    // 0x4bdb58: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4BDB54u, 0x4BDB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BDB5Cu;
label_4bdb5c:
    // 0x4bdb5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4bdb5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bdb60: 0x8ec60000  lw          $a2, 0x0($s6)
    ctx->pc = 0x4bdb60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4bdb64: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4bdb64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bdb68: 0xc12b87a  jal         func_4AE1E8
    ctx->pc = 0x4BDB68u;
    SET_GPR_U32(ctx, 31, 0x4BDB70u);
    ctx->pc = 0x4BDB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BDB68u;
    // 0x4bdb6c: 0x8ea70000  lw          $a3, 0x0($s5) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE1E8u, 0x4BDB68u, 0x4BDB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BDB70u;
label_4bdb70:
    // 0x4bdb70: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4bdb70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4bdb74: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x4bdb74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x4bdb78: 0x3c060073  lui         $a2, 0x73
    ctx->pc = 0x4bdb78u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)115 << 16));
    // 0x4bdb7c: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x4bdb7cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4bdb80: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4bdb80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4bdb84: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x4bdb84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x4bdb88: 0x86250000  lh          $a1, 0x0($s1)
    ctx->pc = 0x4bdb88u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4bdb8c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4bdb8cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4bdb90: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x4bdb90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4bdb94: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4bdb94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4bdb98: 0x864b0000  lh          $t3, 0x0($s2)
    ctx->pc = 0x4bdb98u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4bdb9c: 0x741825  or          $v1, $v1, $s4
    ctx->pc = 0x4bdb9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 20));
    // 0x4bdba0: 0x8e490000  lw          $t1, 0x0($s2)
    ctx->pc = 0x4bdba0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4bdba4: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4bdba4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4bdba8: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4bdba8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4bdbac: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4bdbacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4bdbb0: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4bdbb0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4bdbb4: 0x24d7d680  addiu       $s7, $a2, -0x2980
    ctx->pc = 0x4bdbb4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956672));
    // 0x4bdbb8: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x4bdbb8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x4bdbbc: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x4bdbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x4bdbc0: 0x3c0a007f  lui         $t2, 0x7F
    ctx->pc = 0x4bdbc0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)127 << 16));
    // 0x4bdbc4: 0x8c6d0e50  lw          $t5, 0xE50($v1)
    ctx->pc = 0x4bdbc4u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x7F0E50u));
    // 0x4bdbc8: 0x254a0e40  addiu       $t2, $t2, 0xE40
    ctx->pc = 0x4bdbc8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 3648));
    // 0x4bdbcc: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x4bdbccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x4bdbd0: 0x960e0000  lhu         $t6, 0x0($s0)
    ctx->pc = 0x4bdbd0u;
    SET_GPR_ZE32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4bdbd4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4bdbd4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4bdbd8: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x4bdbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4bdbdc: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x4bdbdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4bdbe0: 0x8ea60000  lw          $a2, 0x0($s5)
    ctx->pc = 0x4bdbe0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4bdbe4: 0xb42825  or          $a1, $a1, $s4
    ctx->pc = 0x4bdbe4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 20));
    // 0x4bdbe8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4bdbe8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4bdbec: 0xe53824  and         $a3, $a3, $a1
    ctx->pc = 0x4bdbecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x4bdbf0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4bdbf0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4bdbf4: 0xae270000  sw          $a3, 0x0($s1)
    ctx->pc = 0x4bdbf4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 7));
    // 0x4bdbf8: 0xe6400  sll         $t4, $t6, 16
    ctx->pc = 0x4bdbf8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x4bdbfc: 0xc6403  sra         $t4, $t4, 16
    ctx->pc = 0x4bdbfcu;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 12), 16));
    // 0x4bdc00: 0x26ef2494  addiu       $t7, $s7, 0x2494
    ctx->pc = 0x4bdc00u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 23), 9364));
    // 0x4bdc04: 0x8fc20018  lw          $v0, 0x18($fp)
    ctx->pc = 0x4bdc04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x4bdc08: 0x96280000  lhu         $t0, 0x0($s1)
    ctx->pc = 0x4bdc08u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4bdc0c: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x4bdc0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x4bdc10: 0x8d450000  lw          $a1, 0x0($t2)
    ctx->pc = 0x4bdc10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4bdc14: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4bdc14u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4bdc18: 0xa6ee2334  sh          $t6, 0x2334($s7)
    ctx->pc = 0x4bdc18u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 9012), (uint16_t)GPR_U32(ctx, 14));
    // 0x4bdc1c: 0x1625821  addu        $t3, $t3, $v0
    ctx->pc = 0x4bdc1cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x4bdc20: 0xa6e82336  sh          $t0, 0x2336($s7)
    ctx->pc = 0x4bdc20u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 9014), (uint16_t)GPR_U32(ctx, 8));
    // 0x4bdc24: 0x1745825  or          $t3, $t3, $s4
    ctx->pc = 0x4bdc24u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 20));
    // 0x4bdc28: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x4bdc28u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x4bdc2c: 0x12b4824  and         $t1, $t1, $t3
    ctx->pc = 0x4bdc2cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 11));
    // 0x4bdc30: 0x26eb249c  addiu       $t3, $s7, 0x249C
    ctx->pc = 0x4bdc30u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 23), 9372));
    // 0x4bdc34: 0xae490000  sw          $t1, 0x0($s2)
    ctx->pc = 0x4bdc34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 9));
    // 0x4bdc38: 0x84403  sra         $t0, $t0, 16
    ctx->pc = 0x4bdc38u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 16));
    // 0x4bdc3c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4bdc3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4bdc40: 0x26ee2498  addiu       $t6, $s7, 0x2498
    ctx->pc = 0x4bdc40u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 23), 9368));
    // 0x4bdc44: 0x96470000  lhu         $a3, 0x0($s2)
    ctx->pc = 0x4bdc44u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4bdc48: 0xa6e72338  sh          $a3, 0x2338($s7)
    ctx->pc = 0x4bdc48u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 9016), (uint16_t)GPR_U32(ctx, 7));
    // 0x4bdc4c: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x4bdc4cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x4bdc50: 0x73c03  sra         $a3, $a3, 16
    ctx->pc = 0x4bdc50u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 16));
    // 0x4bdc54: 0x8da20000  lw          $v0, 0x0($t5)
    ctx->pc = 0x4bdc54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4bdc58: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x4bdc58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x4bdc5c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4bdc5cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4bdc60: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4bdc60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4bdc64: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4bdc64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4bdc68: 0xaec40000  sw          $a0, 0x0($s6)
    ctx->pc = 0x4bdc68u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 4));
    // 0x4bdc6c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4bdc6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4bdc70: 0x8da20004  lw          $v0, 0x4($t5)
    ctx->pc = 0x4bdc70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x4bdc74: 0x86c30000  lh          $v1, 0x0($s6)
    ctx->pc = 0x4bdc74u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4bdc78: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x4bdc78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x4bdc7c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4bdc7cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4bdc80: 0x6c1823  subu        $v1, $v1, $t4
    ctx->pc = 0x4bdc80u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x4bdc84: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4bdc84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4bdc88: 0x741825  or          $v1, $v1, $s4
    ctx->pc = 0x4bdc88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 20));
    // 0x4bdc8c: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4bdc8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4bdc90: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4bdc90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4bdc94: 0xaea60000  sw          $a2, 0x0($s5)
    ctx->pc = 0x4bdc94u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 6));
    // 0x4bdc98: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4bdc98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4bdc9c: 0x8da20008  lw          $v0, 0x8($t5)
    ctx->pc = 0x4bdc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 8)));
    // 0x4bdca0: 0x86a30000  lh          $v1, 0x0($s5)
    ctx->pc = 0x4bdca0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4bdca4: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x4bdca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x4bdca8: 0xaec40000  sw          $a0, 0x0($s6)
    ctx->pc = 0x4bdca8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 4));
    // 0x4bdcac: 0x681823  subu        $v1, $v1, $t0
    ctx->pc = 0x4bdcacu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x4bdcb0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4bdcb0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4bdcb4: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4bdcb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4bdcb8: 0x741825  or          $v1, $v1, $s4
    ctx->pc = 0x4bdcb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 20));
    // 0x4bdcbc: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4bdcbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4bdcc0: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x4bdcc0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x4bdcc4: 0xad450000  sw          $a1, 0x0($t2)
    ctx->pc = 0x4bdcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 5));
    // 0x4bdcc8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4bdcc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4bdccc: 0xaea60000  sw          $a2, 0x0($s5)
    ctx->pc = 0x4bdcccu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 6));
    // 0x4bdcd0: 0x85420000  lh          $v0, 0x0($t2)
    ctx->pc = 0x4bdcd0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4bdcd4: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x4bdcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x4bdcd8: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4bdcd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4bdcdc: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4bdcdcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4bdce0: 0xad450000  sw          $a1, 0x0($t2)
    ctx->pc = 0x4bdce0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 5));
    // 0x4bdce4: 0x96c60000  lhu         $a2, 0x0($s6)
    ctx->pc = 0x4bdce4u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4bdce8: 0x95470000  lhu         $a3, 0x0($t2)
    ctx->pc = 0x4bdce8u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4bdcec: 0x96a40000  lhu         $a0, 0x0($s5)
    ctx->pc = 0x4bdcecu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4bdcf0: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x4bdcf0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x4bdcf4: 0x8de50000  lw          $a1, 0x0($t7)
    ctx->pc = 0x4bdcf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x4bdcf8: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x4bdcf8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x4bdcfc: 0x8dc30000  lw          $v1, 0x0($t6)
    ctx->pc = 0x4bdcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4bdd00: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x4bdd00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4bdd04: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x4bdd04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4bdd08: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4bdd08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4bdd0c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4bdd0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4bdd10: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4bdd10u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4bdd14: 0xb42825  or          $a1, $a1, $s4
    ctx->pc = 0x4bdd14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 20));
    // 0x4bdd18: 0x741825  or          $v1, $v1, $s4
    ctx->pc = 0x4bdd18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 20));
    // 0x4bdd1c: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4bdd1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4bdd20: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4bdd20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4bdd24: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x4bdd24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x4bdd28: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4bdd28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x4bdd2c: 0xade50000  sw          $a1, 0x0($t7)
    ctx->pc = 0x4bdd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 5));
    // 0x4bdd30: 0xadc30000  sw          $v1, 0x0($t6)
    ctx->pc = 0x4bdd30u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 3));
    // 0x4bdd34: 0xc12b8da  jal         func_4AE368
    ctx->pc = 0x4BDD34u;
    SET_GPR_U32(ctx, 31, 0x4BDD3Cu);
    ctx->pc = 0x4BDD38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BDD34u;
    // 0x4bdd38: 0xad620000  sw          $v0, 0x0($t3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE368u, 0x4BDD34u, 0x4BDD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BDD3Cu;
label_4bdd3c:
    // 0x4bdd3c: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x4bdd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4bdd40: 0x86e224a2  lh          $v0, 0x24A2($s7)
    ctx->pc = 0x4bdd40u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 9378)));
    // 0x4bdd44: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bdd44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bdd48: 0x96e624a2  lhu         $a2, 0x24A2($s7)
    ctx->pc = 0x4bdd48u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 9378)));
    // 0x4bdd4c: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4bdd4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4bdd50: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bdd50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bdd54: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x4bdd54u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x4bdd58: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bdd58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bdd5c: 0x86640000  lh          $a0, 0x0($s3)
    ctx->pc = 0x4bdd5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4bdd60: 0x86a20000  lh          $v0, 0x0($s5)
    ctx->pc = 0x4bdd60u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4bdd64: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x4bdd64u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4bdd68: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4bdd68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4bdd6c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bdd6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bdd70: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x4bdd70u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x4bdd74: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bdd74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bdd78: 0x86a20000  lh          $v0, 0x0($s5)
    ctx->pc = 0x4bdd78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4bdd7c: 0x24423000  addiu       $v0, $v0, 0x3000
    ctx->pc = 0x4bdd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12288));
    // 0x4bdd80: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4bdd80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4bdd84: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bdd84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bdd88: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x4bdd88u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x4bdd8c: 0x96a20000  lhu         $v0, 0x0($s5)
    ctx->pc = 0x4bdd8cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4bdd90: 0x2c426000  sltiu       $v0, $v0, 0x6000
    ctx->pc = 0x4bdd90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)24576) ? 1 : 0);
    // 0x4bdd94: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x4BDD94u;
    {
        const bool branch_taken_0x4bdd94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4bdd94) {
            ctx->pc = 0x4BDD98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4BDD94u;
            // 0x4bdd98: 0x86e224a0  lh          $v0, 0x24A0($s7) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 9376)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4BDDD0u;
            goto label_4bddd0;
        }
    }
    ctx->pc = 0x4BDD9Cu;
    // 0x4bdd9c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x4bdd9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bdda0: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4bdda0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4bdda4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4bdda4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4bdda8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4bdda8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4bddac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4bddacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4bddb0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4bddb0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4bddb4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4bddb4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4bddb8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4bddb8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4bddbc: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4bddbcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4bddc0: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4bddc0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4bddc4: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4bddc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4bddc8: 0x812f7ac  j           func_4BDEB0
    ctx->pc = 0x4BDDC8u;
    ctx->pc = 0x4BDDCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BDDC8u;
    // 0x4bddcc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BDEB0u;
    goto label_4bdeb0;
    ctx->pc = 0x4BDDD0u;
label_4bddd0:
    // 0x4bddd0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bddd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bddd4: 0x96e524a0  lhu         $a1, 0x24A0($s7)
    ctx->pc = 0x4bddd4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 9376)));
    // 0x4bddd8: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4bddd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4bdddc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bdddcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bdde0: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x4bdde0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x4bdde4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bdde4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bdde8: 0x86a20000  lh          $v0, 0x0($s5)
    ctx->pc = 0x4bdde8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4bddec: 0x87c40118  lh          $a0, 0x118($fp)
    ctx->pc = 0x4bddecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 280)));
    // 0x4bddf0: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x4bddf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4bddf4: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4bddf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4bddf8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bddf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bddfc: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x4bddfcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x4bde00: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bde00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4bde04: 0x86a20000  lh          $v0, 0x0($s5)
    ctx->pc = 0x4bde04u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4bde08: 0x24423000  addiu       $v0, $v0, 0x3000
    ctx->pc = 0x4bde08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12288));
    // 0x4bde0c: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4bde0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4bde10: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bde10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4bde14: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x4bde14u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x4bde18: 0x96a20000  lhu         $v0, 0x0($s5)
    ctx->pc = 0x4bde18u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4bde1c: 0x2c426000  sltiu       $v0, $v0, 0x6000
    ctx->pc = 0x4bde1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)24576) ? 1 : 0);
    // 0x4bde20: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x4BDE20u;
    {
        const bool branch_taken_0x4bde20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4bde20) {
            ctx->pc = 0x4BDE24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4BDE20u;
            // 0x4bde24: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4BDE60u;
            goto label_4bde60;
        }
    }
    ctx->pc = 0x4BDE28u;
    // 0x4bde28: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x4bde28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bde2c: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4bde2cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4bde30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4bde30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4bde34: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4bde34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4bde38: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4bde38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4bde3c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4bde3cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4bde40: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4bde40u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4bde44: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4bde44u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4bde48: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4bde48u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4bde4c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4bde4cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4bde50: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4bde50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4bde54: 0x812f7ac  j           func_4BDEB0
    ctx->pc = 0x4BDE54u;
    ctx->pc = 0x4BDE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BDE54u;
    // 0x4bde58: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BDEB0u;
    goto label_4bdeb0;
    ctx->pc = 0x4BDE5Cu;
    // 0x4bde5c: 0x0  nop
    ctx->pc = 0x4bde5cu;
    // NOP
label_4bde60:
    // 0x4bde60: 0xa6e5233a  sh          $a1, 0x233A($s7)
    ctx->pc = 0x4bde60u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 9018), (uint16_t)GPR_U32(ctx, 5));
    // 0x4bde64: 0xa6e22330  sh          $v0, 0x2330($s7)
    ctx->pc = 0x4bde64u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 9008), (uint16_t)GPR_U32(ctx, 2));
    // 0x4bde68: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x4bde68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bde6c: 0xa6e6233c  sh          $a2, 0x233C($s7)
    ctx->pc = 0x4bde6cu;
    WRITE16(ADD32(GPR_U32(ctx, 23), 9020), (uint16_t)GPR_U32(ctx, 6));
    // 0x4bde70: 0xc127a50  jal         func_49E940
    ctx->pc = 0x4BDE70u;
    SET_GPR_U32(ctx, 31, 0x4BDE78u);
    ctx->pc = 0x4BDE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BDE70u;
    // 0x4bde74: 0xa6e0233e  sh          $zero, 0x233E($s7) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 23), 9022), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49E940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49E940u, 0x4BDE70u, 0x4BDE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BDE78u;
label_4bde78:
    // 0x4bde78: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x4bde78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bde7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4bde7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4bde80: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4bde80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4bde84: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4bde84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4bde88: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4bde88u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4bde8c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4bde8cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4bde90: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4bde90u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4bde94: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4bde94u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4bde98: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4bde98u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4bde9c: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4bde9cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4bdea0: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4bdea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4bdea4: 0x812f7ac  j           func_4BDEB0
    ctx->pc = 0x4BDEA4u;
    ctx->pc = 0x4BDEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BDEA4u;
    // 0x4bdea8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BDEB0u;
    goto label_4bdeb0;
    ctx->pc = 0x4BDEACu;
    // 0x4bdeac: 0x0  nop
    ctx->pc = 0x4bdeacu;
    // NOP
label_4bdeb0:
    // 0x4bdeb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4bdeb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4bdeb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4bdeb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4bdeb8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4bdeb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4bdebc: 0xc122db4  jal         func_48B6D0
    ctx->pc = 0x4BDEBCu;
    SET_GPR_U32(ctx, 31, 0x4BDEC4u);
    ctx->pc = 0x4BDEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BDEBCu;
    // 0x4bdec0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B6D0u, 0x4BDEBCu, 0x4BDEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BDEC4u;
label_4bdec4:
    // 0x4bdec4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4bdec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bdec8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4BDEC8u;
    {
        const bool branch_taken_0x4bdec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BDECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BDEC8u;
        // 0x4bdecc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bdec8) {
            ctx->pc = 0x4BDEF0u;
            goto label_4bdef0;
        }
    }
    ctx->pc = 0x4BDED0u;
    // 0x4bded0: 0xc126ee2  jal         func_49BB88
    ctx->pc = 0x4BDED0u;
    SET_GPR_U32(ctx, 31, 0x4BDED8u);
    ctx->pc = 0x49BB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49BB88u, 0x4BDED0u, 0x4BDED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BDED8u;
label_4bded8:
    // 0x4bded8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4BDED8u;
    {
        const bool branch_taken_0x4bded8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BDEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BDED8u;
        // 0x4bdedc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bded8) {
            ctx->pc = 0x4BDEF0u;
            goto label_4bdef0;
        }
    }
    ctx->pc = 0x4BDEE0u;
    // 0x4bdee0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4bdee0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4bdee4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4bdee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4bdee8: 0x812f7c0  j           func_4BDF00
    ctx->pc = 0x4BDEE8u;
    ctx->pc = 0x4BDEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BDEE8u;
    // 0x4bdeec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BDF00u;
    goto label_4bdf00;
    ctx->pc = 0x4BDEF0u;
label_4bdef0:
    // 0x4bdef0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4bdef0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4bdef4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4bdef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4bdef8: 0x3e00008  jr          $ra
    ctx->pc = 0x4BDEF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BDEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BDEF8u;
        // 0x4bdefc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BDEF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BDF00u;
label_4bdf00:
    // 0x4bdf00: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4bdf00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4bdf04: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4bdf04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4bdf08: 0x2463d680  addiu       $v1, $v1, -0x2980
    ctx->pc = 0x4bdf08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956672));
    // 0x4bdf0c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x4bdf0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x4bdf10: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x4bdf10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x4bdf14: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4bdf14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4bdf18: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4bdf18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4bdf1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4bdf1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bdf20: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4bdf20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4bdf24: 0xa46223c4  sh          $v0, 0x23C4($v1)
    ctx->pc = 0x4bdf24u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x72FA44u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72FA44u, _value); } while (0);
    // 0x4bdf28: 0xa465232c  sh          $a1, 0x232C($v1)
    ctx->pc = 0x4bdf28u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x72F9ACu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9ACu, _value); } while (0);
    // 0x4bdf2c: 0xc13d772  jal         func_4F5DC8
    ctx->pc = 0x4BDF2Cu;
    SET_GPR_U32(ctx, 31, 0x4BDF34u);
    ctx->pc = 0x4BDF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BDF2Cu;
    // 0x4bdf30: 0xa466232e  sh          $a2, 0x232E($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 9006), (uint16_t)GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5DC8u, 0x4BDF2Cu, 0x4BDF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BDF34u;
label_4bdf34:
    // 0x4bdf34: 0xc122efc  jal         func_48BBF0
    ctx->pc = 0x4BDF34u;
    SET_GPR_U32(ctx, 31, 0x4BDF3Cu);
    ctx->pc = 0x4BDF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BDF34u;
    // 0x4bdf38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48BBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48BBF0u, 0x4BDF34u, 0x4BDF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BDF3Cu;
label_4bdf3c:
    // 0x4bdf3c: 0xc1297fa  jal         func_4A5FE8
    ctx->pc = 0x4BDF3Cu;
    SET_GPR_U32(ctx, 31, 0x4BDF44u);
    ctx->pc = 0x4A5FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5FE8u, 0x4BDF3Cu, 0x4BDF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BDF44u;
label_4bdf44:
    // 0x4bdf44: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4bdf44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4bdf48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4bdf48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bdf4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4bdf4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4bdf50: 0x812b62c  j           func_4AD8B0
    ctx->pc = 0x4BDF50u;
    ctx->pc = 0x4BDF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BDF50u;
    // 0x4bdf54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    sub_004AD8B0_0x4ad8b0(rdram, ctx, runtime); return;
    ctx->pc = 0x4BDF58u;
}
