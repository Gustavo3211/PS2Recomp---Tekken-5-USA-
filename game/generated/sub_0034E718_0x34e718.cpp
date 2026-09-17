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

// Function: sub_0034E718
// Address: 0x34e718 - 0x34e874
void sub_0034E718_0x34e718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034E718_0x34e718");
#endif

    switch (ctx->pc) {
        case 0x34e754u: goto label_34e754;
        case 0x34e7b4u: goto label_34e7b4;
        case 0x34e7dcu: goto label_34e7dc;
        case 0x34e818u: goto label_34e818;
        case 0x34e82cu: goto label_34e82c;
        default: break;
    }

    ctx->pc = 0x34e718u;

    // 0x34e718: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x34e718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x34e71c: 0xffbe0030  sd          $fp, 0x30($sp)
    ctx->pc = 0x34e71cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 30));
    // 0x34e720: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x34e720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x34e724: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x34e724u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e728: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x34e728u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x34e72c: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x34e72cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x34e730: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x34e730u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x34e734: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x34e734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x34e738: 0x2442b240  addiu       $v0, $v0, -0x4DC0
    ctx->pc = 0x34e738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947392));
    // 0x34e73c: 0xafc20020  sw          $v0, 0x20($fp)
    ctx->pc = 0x34e73cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 2));
    // 0x34e740: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x34e740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x34e744: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x34e744u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x34e748: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x34e748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x34e74c: 0xc04a4d1  jal         func_129344
    ctx->pc = 0x34E74Cu;
    SET_GPR_U32(ctx, 31, 0x34E754u);
    ctx->pc = 0x129344u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129344u, 0x34E74Cu, 0x34E754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E754u;
label_34e754:
    // 0x34e754: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x34e754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x34e758: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x34e758u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x34e75c: 0x8fc3000c  lw          $v1, 0xC($fp)
    ctx->pc = 0x34e75cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x34e760: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x34e760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x34e764: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x34e764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x34e768: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x34e768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x34e76c: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x34e76cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x34e770: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x34e770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x34e774: 0x28420401  slti        $v0, $v0, 0x401
    ctx->pc = 0x34e774u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1025) ? 1 : 0);
    // 0x34e778: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34E778u;
    {
        const bool branch_taken_0x34e778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34e778) {
            ctx->pc = 0x34E790u;
            goto label_34e790;
        }
    }
    ctx->pc = 0x34E780u;
    // 0x34e780: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x34e780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x34e784: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x34e784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x34e788: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x34E788u;
    {
        const bool branch_taken_0x34e788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e788) {
            ctx->pc = 0x34E85Cu;
            goto label_34e85c;
        }
    }
    ctx->pc = 0x34E790u;
label_34e790:
    // 0x34e790: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x34e790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x34e794: 0x2443000f  addiu       $v1, $v0, 0xF
    ctx->pc = 0x34e794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x34e798: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x34e798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x34e79c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x34e79cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x34e7a0: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x34e7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x34e7a4: 0x8fc20020  lw          $v0, 0x20($fp)
    ctx->pc = 0x34e7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x34e7a8: 0x8c440404  lw          $a0, 0x404($v0)
    ctx->pc = 0x34e7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1028)));
    // 0x34e7ac: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x34E7ACu;
    SET_GPR_U32(ctx, 31, 0x34E7B4u);
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x34E7ACu, 0x34E7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E7B4u;
label_34e7b4:
    // 0x34e7b4: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x34e7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x34e7b8: 0x2442b680  addiu       $v0, $v0, -0x4980
    ctx->pc = 0x34e7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948480));
    // 0x34e7bc: 0xafc20018  sw          $v0, 0x18($fp)
    ctx->pc = 0x34e7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 2));
    // 0x34e7c0: 0x8fc20018  lw          $v0, 0x18($fp)
    ctx->pc = 0x34e7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x34e7c4: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x34e7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x34e7c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x34e7c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e7cc: 0x8fc50000  lw          $a1, 0x0($fp)
    ctx->pc = 0x34e7ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x34e7d0: 0x8fc60010  lw          $a2, 0x10($fp)
    ctx->pc = 0x34e7d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x34e7d4: 0xc04a125  jal         func_128494
    ctx->pc = 0x34E7D4u;
    SET_GPR_U32(ctx, 31, 0x34E7DCu);
    ctx->pc = 0x128494u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128494u, 0x34E7D4u, 0x34E7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E7DCu;
label_34e7dc:
    // 0x34e7dc: 0x8fc30018  lw          $v1, 0x18($fp)
    ctx->pc = 0x34e7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x34e7e0: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x34e7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x34e7e4: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x34e7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x34e7e8: 0x8fc30018  lw          $v1, 0x18($fp)
    ctx->pc = 0x34e7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x34e7ec: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x34e7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x34e7f0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x34e7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x34e7f4: 0x8fc30018  lw          $v1, 0x18($fp)
    ctx->pc = 0x34e7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x34e7f8: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x34e7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x34e7fc: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x34e7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x34e800: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x34e800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x34e804: 0x8fc50018  lw          $a1, 0x18($fp)
    ctx->pc = 0x34e804u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x34e808: 0x8fc6000c  lw          $a2, 0xC($fp)
    ctx->pc = 0x34e808u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x34e80c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x34e80cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x34e810: 0xc0d2e32  jal         func_34B8C8
    ctx->pc = 0x34E810u;
    SET_GPR_U32(ctx, 31, 0x34E818u);
    ctx->pc = 0x34B8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34B8C8u, 0x34E810u, 0x34E818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E818u;
label_34e818:
    // 0x34e818: 0xafc20014  sw          $v0, 0x14($fp)
    ctx->pc = 0x34e818u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
    // 0x34e81c: 0x8fc20020  lw          $v0, 0x20($fp)
    ctx->pc = 0x34e81cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x34e820: 0x8c440404  lw          $a0, 0x404($v0)
    ctx->pc = 0x34e820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1028)));
    // 0x34e824: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x34E824u;
    SET_GPR_U32(ctx, 31, 0x34E82Cu);
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x34E824u, 0x34E82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E82Cu;
label_34e82c:
    // 0x34e82c: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x34e82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x34e830: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34E830u;
    {
        const bool branch_taken_0x34e830 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x34e830) {
            ctx->pc = 0x34E848u;
            goto label_34e848;
        }
    }
    ctx->pc = 0x34E838u;
    // 0x34e838: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x34e838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x34e83c: 0x3442feff  ori         $v0, $v0, 0xFEFF
    ctx->pc = 0x34e83cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65279);
    // 0x34e840: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x34E840u;
    {
        const bool branch_taken_0x34e840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e840) {
            ctx->pc = 0x34E85Cu;
            goto label_34e85c;
        }
    }
    ctx->pc = 0x34E848u;
label_34e848:
    // 0x34e848: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x34e848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x34e84c: 0x2442b680  addiu       $v0, $v0, -0x4980
    ctx->pc = 0x34e84cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948480));
    // 0x34e850: 0xafc2001c  sw          $v0, 0x1C($fp)
    ctx->pc = 0x34e850u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 28), GPR_U32(ctx, 2));
    // 0x34e854: 0x8fc2001c  lw          $v0, 0x1C($fp)
    ctx->pc = 0x34e854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x34e858: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x34e858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_34e85c:
    // 0x34e85c: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x34e85cu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e860: 0xdfbe0030  ld          $fp, 0x30($sp)
    ctx->pc = 0x34e860u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34e864: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x34e864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34e868: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x34e868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x34e86c: 0x3e00008  jr          $ra
    ctx->pc = 0x34E86Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34E86Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34E874u;
}
