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

// Function: sub_0034E4F0
// Address: 0x34e4f0 - 0x34e64c
void sub_0034E4F0_0x34e4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034E4F0_0x34e4f0");
#endif

    switch (ctx->pc) {
        case 0x34e52cu: goto label_34e52c;
        case 0x34e58cu: goto label_34e58c;
        case 0x34e5b4u: goto label_34e5b4;
        case 0x34e5f0u: goto label_34e5f0;
        case 0x34e604u: goto label_34e604;
        default: break;
    }

    ctx->pc = 0x34e4f0u;

    // 0x34e4f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x34e4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x34e4f4: 0xffbe0030  sd          $fp, 0x30($sp)
    ctx->pc = 0x34e4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 30));
    // 0x34e4f8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x34e4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x34e4fc: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x34e4fcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e500: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x34e500u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x34e504: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x34e504u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x34e508: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x34e508u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x34e50c: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x34e50cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x34e510: 0x2442b240  addiu       $v0, $v0, -0x4DC0
    ctx->pc = 0x34e510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947392));
    // 0x34e514: 0xafc20020  sw          $v0, 0x20($fp)
    ctx->pc = 0x34e514u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 2));
    // 0x34e518: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x34e518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x34e51c: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x34e51cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x34e520: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x34e520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x34e524: 0xc04a4d1  jal         func_129344
    ctx->pc = 0x34E524u;
    SET_GPR_U32(ctx, 31, 0x34E52Cu);
    ctx->pc = 0x129344u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129344u, 0x34E524u, 0x34E52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E52Cu;
label_34e52c:
    // 0x34e52c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x34e52cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x34e530: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x34e530u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x34e534: 0x8fc3000c  lw          $v1, 0xC($fp)
    ctx->pc = 0x34e534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x34e538: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x34e538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x34e53c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x34e53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x34e540: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x34e540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x34e544: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x34e544u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x34e548: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x34e548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x34e54c: 0x28420401  slti        $v0, $v0, 0x401
    ctx->pc = 0x34e54cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1025) ? 1 : 0);
    // 0x34e550: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34E550u;
    {
        const bool branch_taken_0x34e550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34e550) {
            ctx->pc = 0x34E568u;
            goto label_34e568;
        }
    }
    ctx->pc = 0x34E558u;
    // 0x34e558: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x34e558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x34e55c: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x34e55cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x34e560: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x34E560u;
    {
        const bool branch_taken_0x34e560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e560) {
            ctx->pc = 0x34E634u;
            goto label_34e634;
        }
    }
    ctx->pc = 0x34E568u;
label_34e568:
    // 0x34e568: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x34e568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x34e56c: 0x2443000f  addiu       $v1, $v0, 0xF
    ctx->pc = 0x34e56cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x34e570: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x34e570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x34e574: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x34e574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x34e578: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x34e578u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x34e57c: 0x8fc20020  lw          $v0, 0x20($fp)
    ctx->pc = 0x34e57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x34e580: 0x8c440404  lw          $a0, 0x404($v0)
    ctx->pc = 0x34e580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1028)));
    // 0x34e584: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x34E584u;
    SET_GPR_U32(ctx, 31, 0x34E58Cu);
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x34E584u, 0x34E58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E58Cu;
label_34e58c:
    // 0x34e58c: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x34e58cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x34e590: 0x2442b680  addiu       $v0, $v0, -0x4980
    ctx->pc = 0x34e590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948480));
    // 0x34e594: 0xafc20018  sw          $v0, 0x18($fp)
    ctx->pc = 0x34e594u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 2));
    // 0x34e598: 0x8fc20018  lw          $v0, 0x18($fp)
    ctx->pc = 0x34e598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x34e59c: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x34e59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x34e5a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x34e5a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e5a4: 0x8fc50000  lw          $a1, 0x0($fp)
    ctx->pc = 0x34e5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x34e5a8: 0x8fc60010  lw          $a2, 0x10($fp)
    ctx->pc = 0x34e5a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x34e5ac: 0xc04a125  jal         func_128494
    ctx->pc = 0x34E5ACu;
    SET_GPR_U32(ctx, 31, 0x34E5B4u);
    ctx->pc = 0x128494u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128494u, 0x34E5ACu, 0x34E5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E5B4u;
label_34e5b4:
    // 0x34e5b4: 0x8fc30018  lw          $v1, 0x18($fp)
    ctx->pc = 0x34e5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x34e5b8: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x34e5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x34e5bc: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x34e5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x34e5c0: 0x8fc30018  lw          $v1, 0x18($fp)
    ctx->pc = 0x34e5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x34e5c4: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x34e5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x34e5c8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x34e5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x34e5cc: 0x8fc30018  lw          $v1, 0x18($fp)
    ctx->pc = 0x34e5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x34e5d0: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x34e5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x34e5d4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x34e5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x34e5d8: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x34e5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x34e5dc: 0x8fc50018  lw          $a1, 0x18($fp)
    ctx->pc = 0x34e5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x34e5e0: 0x8fc6000c  lw          $a2, 0xC($fp)
    ctx->pc = 0x34e5e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x34e5e4: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x34e5e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x34e5e8: 0xc0d2e32  jal         func_34B8C8
    ctx->pc = 0x34E5E8u;
    SET_GPR_U32(ctx, 31, 0x34E5F0u);
    ctx->pc = 0x34B8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34B8C8u, 0x34E5E8u, 0x34E5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E5F0u;
label_34e5f0:
    // 0x34e5f0: 0xafc20014  sw          $v0, 0x14($fp)
    ctx->pc = 0x34e5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
    // 0x34e5f4: 0x8fc20020  lw          $v0, 0x20($fp)
    ctx->pc = 0x34e5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x34e5f8: 0x8c440404  lw          $a0, 0x404($v0)
    ctx->pc = 0x34e5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1028)));
    // 0x34e5fc: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x34E5FCu;
    SET_GPR_U32(ctx, 31, 0x34E604u);
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x34E5FCu, 0x34E604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E604u;
label_34e604:
    // 0x34e604: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x34e604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x34e608: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34E608u;
    {
        const bool branch_taken_0x34e608 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x34e608) {
            ctx->pc = 0x34E620u;
            goto label_34e620;
        }
    }
    ctx->pc = 0x34E610u;
    // 0x34e610: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x34e610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x34e614: 0x3442feff  ori         $v0, $v0, 0xFEFF
    ctx->pc = 0x34e614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65279);
    // 0x34e618: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x34E618u;
    {
        const bool branch_taken_0x34e618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e618) {
            ctx->pc = 0x34E634u;
            goto label_34e634;
        }
    }
    ctx->pc = 0x34E620u;
label_34e620:
    // 0x34e620: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x34e620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x34e624: 0x2442b680  addiu       $v0, $v0, -0x4980
    ctx->pc = 0x34e624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948480));
    // 0x34e628: 0xafc2001c  sw          $v0, 0x1C($fp)
    ctx->pc = 0x34e628u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 28), GPR_U32(ctx, 2));
    // 0x34e62c: 0x8fc2001c  lw          $v0, 0x1C($fp)
    ctx->pc = 0x34e62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x34e630: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x34e630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_34e634:
    // 0x34e634: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x34e634u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e638: 0xdfbe0030  ld          $fp, 0x30($sp)
    ctx->pc = 0x34e638u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34e63c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x34e63cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34e640: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x34e640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x34e644: 0x3e00008  jr          $ra
    ctx->pc = 0x34E644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34E644u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34E64Cu;
}
