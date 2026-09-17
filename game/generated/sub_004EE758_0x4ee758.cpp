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

// Function: sub_004EE758
// Address: 0x4ee758 - 0x4ee938
void sub_004EE758_0x4ee758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EE758_0x4ee758");
#endif

    switch (ctx->pc) {
        case 0x4ee7b4u: goto label_4ee7b4;
        case 0x4ee7c8u: goto label_4ee7c8;
        case 0x4ee7ecu: goto label_4ee7ec;
        case 0x4ee858u: goto label_4ee858;
        case 0x4ee8f4u: goto label_4ee8f4;
        default: break;
    }

    ctx->pc = 0x4ee758u;

    // 0x4ee758: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ee758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ee75c: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x4ee75cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x4ee760: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ee760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ee764: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ee764u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ee768: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4ee768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4ee76c: 0x3c0a007f  lui         $t2, 0x7F
    ctx->pc = 0x4ee76cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)127 << 16));
    // 0x4ee770: 0x252911f4  addiu       $t1, $t1, 0x11F4
    ctx->pc = 0x4ee770u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4596));
    // 0x4ee774: 0x254a11f8  addiu       $t2, $t2, 0x11F8
    ctx->pc = 0x4ee774u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4600));
    // 0x4ee778: 0x8d280000  lw          $t0, 0x0($t1)
    ctx->pc = 0x4ee778u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x7F11F4u));
    // 0x4ee77c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4ee77cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4ee780: 0x8d470000  lw          $a3, 0x0($t2)
    ctx->pc = 0x4ee780u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x7F11F8u));
    // 0x4ee784: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4ee784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4ee788: 0x346304be  ori         $v1, $v1, 0x4BE
    ctx->pc = 0x4ee788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1214);
    // 0x4ee78c: 0x344204b5  ori         $v0, $v0, 0x4B5
    ctx->pc = 0x4ee78cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1205);
    // 0x4ee790: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4ee790u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4ee794: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4ee794u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4ee798: 0x1034024  and         $t0, $t0, $v1
    ctx->pc = 0x4ee798u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x4ee79c: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4ee79cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4ee7a0: 0xad280000  sw          $t0, 0x0($t1)
    ctx->pc = 0x4ee7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 8));
    // 0x4ee7a4: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x4ee7a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ee7a8: 0xad470000  sw          $a3, 0x0($t2)
    ctx->pc = 0x4ee7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 7));
    // 0x4ee7ac: 0xc12b698  jal         func_4ADA60
    ctx->pc = 0x4EE7ACu;
    SET_GPR_U32(ctx, 31, 0x4EE7B4u);
    ctx->pc = 0x4EE7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EE7ACu;
    // 0x4ee7b0: 0x140302d  daddu       $a2, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADA60u, 0x4EE7ACu, 0x4EE7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EE7B4u;
label_4ee7b4:
    // 0x4ee7b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ee7b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ee7b8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4ee7b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ee7bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ee7bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ee7c0: 0x813b9f2  j           func_4EE7C8
    ctx->pc = 0x4EE7C0u;
    ctx->pc = 0x4EE7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EE7C0u;
    // 0x4ee7c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EE7C8u;
    goto label_4ee7c8;
    ctx->pc = 0x4EE7C8u;
label_4ee7c8:
    // 0x4ee7c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ee7c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ee7cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ee7ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ee7d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ee7d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ee7d4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4ee7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4ee7d8: 0x2603011c  addiu       $v1, $s0, 0x11C
    ctx->pc = 0x4ee7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 284));
    // 0x4ee7dc: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4ee7dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4ee7e0: 0x2442ff80  addiu       $v0, $v0, -0x80
    ctx->pc = 0x4ee7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
    // 0x4ee7e4: 0xc127e84  jal         func_49FA10
    ctx->pc = 0x4EE7E4u;
    SET_GPR_U32(ctx, 31, 0x4EE7ECu);
    ctx->pc = 0x4EE7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EE7E4u;
    // 0x4ee7e8: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FA10u, 0x4EE7E4u, 0x4EE7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EE7ECu;
label_4ee7ec:
    // 0x4ee7ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ee7ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ee7f0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4ee7f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ee7f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ee7f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ee7f8: 0x813ba00  j           func_4EE800
    ctx->pc = 0x4EE7F8u;
    ctx->pc = 0x4EE7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EE7F8u;
    // 0x4ee7fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EE800u;
    goto label_4ee800;
    ctx->pc = 0x4EE800u;
label_4ee800:
    // 0x4ee800: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4ee800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4ee804: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4ee804u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4ee808: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ee808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ee80c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ee80cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ee810: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4ee810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4ee814: 0x26110014  addiu       $s1, $s0, 0x14
    ctx->pc = 0x4ee814u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x4ee818: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4ee818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4ee81c: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4ee81cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4ee820: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4ee820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4ee824: 0x3c13007f  lui         $s3, 0x7F
    ctx->pc = 0x4ee824u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)127 << 16));
    // 0x4ee828: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4ee828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4ee82c: 0x267211e8  addiu       $s2, $s3, 0x11E8
    ctx->pc = 0x4ee82cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 4584));
    // 0x4ee830: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4ee830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4ee834: 0x651024  and         $v0, $v1, $a1
    ctx->pc = 0x4ee834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4ee838: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x4ee838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x4ee83c: 0x3c01003c  lui         $at, 0x3C
    ctx->pc = 0x4ee83cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)60 << 16));
    // 0x4ee840: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x4ee840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x4ee844: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4ee844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4ee848: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ee848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ee84c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4ee84cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4ee850: 0xc126ee2  jal         func_49BB88
    ctx->pc = 0x4EE850u;
    SET_GPR_U32(ctx, 31, 0x4EE858u);
    ctx->pc = 0x4EE854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EE850u;
    // 0x4ee854: 0x8cc51208  lw          $a1, 0x1208($a2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4616)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49BB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49BB88u, 0x4EE850u, 0x4EE858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EE858u;
label_4ee858:
    // 0x4ee858: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ee858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ee85c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4EE85Cu;
    {
        const bool branch_taken_0x4ee85c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4EE860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EE85Cu;
        // 0x4ee860: 0x3c05ffff  lui         $a1, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ee85c) {
            ctx->pc = 0x4EE870u;
            goto label_4ee870;
        }
    }
    ctx->pc = 0x4EE864u;
    // 0x4ee864: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4ee864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4ee868: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4EE868u;
    {
        const bool branch_taken_0x4ee868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EE86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EE868u;
        // 0x4ee86c: 0x344200ff  ori         $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ee868) {
            ctx->pc = 0x4EE87Cu;
            goto label_4ee87c;
        }
    }
    ctx->pc = 0x4EE870u;
label_4ee870:
    // 0x4ee870: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4ee870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4ee874: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4ee874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4ee878: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4ee878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4ee87c:
    // 0x4ee87c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4ee87cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x4ee880: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4ee880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4ee884: 0x651024  and         $v0, $v1, $a1
    ctx->pc = 0x4ee884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4ee888: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x4ee888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x4ee88c: 0x3c05ffc4  lui         $a1, 0xFFC4
    ctx->pc = 0x4ee88cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65476 << 16));
    // 0x4ee890: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4ee890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4ee894: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4ee894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4ee898: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ee898u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ee89c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4ee89cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4ee8a0: 0x866211e8  lh          $v0, 0x11E8($s3)
    ctx->pc = 0x4ee8a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 4584)));
    // 0x4ee8a4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4EE8A4u;
    {
        const bool branch_taken_0x4ee8a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4EE8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EE8A4u;
        // 0x4ee8a8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ee8a4) {
            ctx->pc = 0x4EE8C8u;
            goto label_4ee8c8;
        }
    }
    ctx->pc = 0x4EE8ACu;
    // 0x4ee8ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4ee8acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ee8b0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4ee8b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ee8b4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4ee8b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4ee8b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4ee8b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ee8bc: 0x813ba38  j           func_4EE8E0
    ctx->pc = 0x4EE8BCu;
    ctx->pc = 0x4EE8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EE8BCu;
    // 0x4ee8c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EE8E0u;
    goto label_4ee8e0;
    ctx->pc = 0x4EE8C4u;
    // 0x4ee8c4: 0x0  nop
    ctx->pc = 0x4ee8c4u;
    // NOP
label_4ee8c8:
    // 0x4ee8c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4ee8c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ee8cc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4ee8ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ee8d0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4ee8d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4ee8d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4ee8d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ee8d8: 0x3e00008  jr          $ra
    ctx->pc = 0x4EE8D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EE8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EE8D8u;
        // 0x4ee8dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EE8D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EE8E0u;
label_4ee8e0:
    // 0x4ee8e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ee8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ee8e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ee8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ee8e8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4ee8e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4ee8ec: 0xc13ba8a  jal         func_4EEA28
    ctx->pc = 0x4EE8ECu;
    SET_GPR_U32(ctx, 31, 0x4EE8F4u);
    ctx->pc = 0x4EE8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EE8ECu;
    // 0x4ee8f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EEA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EEA28u, 0x4EE8ECu, 0x4EE8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EE8F4u;
label_4ee8f4:
    // 0x4ee8f4: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4ee8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4ee8f8: 0x240704b5  addiu       $a3, $zero, 0x4B5
    ctx->pc = 0x4ee8f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1205));
    // 0x4ee8fc: 0x8c431208  lw          $v1, 0x1208($v0)
    ctx->pc = 0x4ee8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F1208u));
    // 0x4ee900: 0x2405011f  addiu       $a1, $zero, 0x11F
    ctx->pc = 0x4ee900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 287));
    // 0x4ee904: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x4ee904u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x4ee908: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ee908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ee90c: 0x24630160  addiu       $v1, $v1, 0x160
    ctx->pc = 0x4ee90cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 352));
    // 0x4ee910: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4ee910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ee914: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4ee914u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4ee918: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x4ee918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x4ee91c: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4ee91cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ee920: 0xa607000c  sh          $a3, 0xC($s0)
    ctx->pc = 0x4ee920u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 7));
    // 0x4ee924: 0xa605014a  sh          $a1, 0x14A($s0)
    ctx->pc = 0x4ee924u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 330), (uint16_t)GPR_U32(ctx, 5));
    // 0x4ee928: 0xa60601bc  sh          $a2, 0x1BC($s0)
    ctx->pc = 0x4ee928u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 444), (uint16_t)GPR_U32(ctx, 6));
    // 0x4ee92c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ee92cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ee930: 0x813ba4e  j           func_4EE938
    ctx->pc = 0x4EE930u;
    ctx->pc = 0x4EE934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EE930u;
    // 0x4ee934: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EE938u;
    sub_004EE938_0x4ee938(rdram, ctx, runtime); return;
    ctx->pc = 0x4EE938u;
}
