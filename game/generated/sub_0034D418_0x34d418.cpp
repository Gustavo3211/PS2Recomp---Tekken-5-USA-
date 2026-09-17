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

// Function: sub_0034D418
// Address: 0x34d418 - 0x34d550
void sub_0034D418_0x34d418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034D418_0x34d418");
#endif

    switch (ctx->pc) {
        case 0x34d468u: goto label_34d468;
        case 0x34d494u: goto label_34d494;
        case 0x34d4f4u: goto label_34d4f4;
        case 0x34d508u: goto label_34d508;
        default: break;
    }

    ctx->pc = 0x34d418u;

    // 0x34d418: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x34d418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x34d41c: 0xffbe0030  sd          $fp, 0x30($sp)
    ctx->pc = 0x34d41cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 30));
    // 0x34d420: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x34d420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x34d424: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x34d424u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d428: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x34d428u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x34d42c: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x34d42cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x34d430: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x34d430u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x34d434: 0xafc7000c  sw          $a3, 0xC($fp)
    ctx->pc = 0x34d434u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 7));
    // 0x34d438: 0xafc80010  sw          $t0, 0x10($fp)
    ctx->pc = 0x34d438u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 8));
    // 0x34d43c: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x34d43cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x34d440: 0x2442b240  addiu       $v0, $v0, -0x4DC0
    ctx->pc = 0x34d440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947392));
    // 0x34d444: 0xafc20024  sw          $v0, 0x24($fp)
    ctx->pc = 0x34d444u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 36), GPR_U32(ctx, 2));
    // 0x34d448: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x34d448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x34d44c: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x34d44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x34d450: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x34d450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x34d454: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x34d454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x34d458: 0x8fc40004  lw          $a0, 0x4($fp)
    ctx->pc = 0x34d458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x34d45c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x34d45cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d460: 0xc043f26  jal         func_10FC98
    ctx->pc = 0x34D460u;
    SET_GPR_U32(ctx, 31, 0x34D468u);
    ctx->pc = 0x10FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC98u, 0x34D460u, 0x34D468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D468u;
label_34d468:
    // 0x34d468: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x34d468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x34d46c: 0xafc20014  sw          $v0, 0x14($fp)
    ctx->pc = 0x34d46cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
    // 0x34d470: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x34d470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x34d474: 0x2443000f  addiu       $v1, $v0, 0xF
    ctx->pc = 0x34d474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x34d478: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x34d478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x34d47c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x34d47cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x34d480: 0xafc20014  sw          $v0, 0x14($fp)
    ctx->pc = 0x34d480u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
    // 0x34d484: 0x8fc20024  lw          $v0, 0x24($fp)
    ctx->pc = 0x34d484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
    // 0x34d488: 0x8c440404  lw          $a0, 0x404($v0)
    ctx->pc = 0x34d488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1028)));
    // 0x34d48c: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x34D48Cu;
    SET_GPR_U32(ctx, 31, 0x34D494u);
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x34D48Cu, 0x34D494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D494u;
label_34d494:
    // 0x34d494: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x34d494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x34d498: 0x2442b680  addiu       $v0, $v0, -0x4980
    ctx->pc = 0x34d498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948480));
    // 0x34d49c: 0xafc2001c  sw          $v0, 0x1C($fp)
    ctx->pc = 0x34d49cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 28), GPR_U32(ctx, 2));
    // 0x34d4a0: 0x8fc3001c  lw          $v1, 0x1C($fp)
    ctx->pc = 0x34d4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x34d4a4: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x34d4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x34d4a8: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x34d4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x34d4ac: 0x8fc3001c  lw          $v1, 0x1C($fp)
    ctx->pc = 0x34d4acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x34d4b0: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x34d4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x34d4b4: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x34d4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x34d4b8: 0x8fc3001c  lw          $v1, 0x1C($fp)
    ctx->pc = 0x34d4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x34d4bc: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x34d4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x34d4c0: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x34d4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x34d4c4: 0x8fc3001c  lw          $v1, 0x1C($fp)
    ctx->pc = 0x34d4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x34d4c8: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x34d4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x34d4cc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x34d4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x34d4d0: 0x8fc3001c  lw          $v1, 0x1C($fp)
    ctx->pc = 0x34d4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x34d4d4: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x34d4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x34d4d8: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x34d4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x34d4dc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x34d4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x34d4e0: 0x8fc5001c  lw          $a1, 0x1C($fp)
    ctx->pc = 0x34d4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x34d4e4: 0x8fc60014  lw          $a2, 0x14($fp)
    ctx->pc = 0x34d4e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x34d4e8: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x34d4e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x34d4ec: 0xc0d2e32  jal         func_34B8C8
    ctx->pc = 0x34D4ECu;
    SET_GPR_U32(ctx, 31, 0x34D4F4u);
    ctx->pc = 0x34B8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34B8C8u, 0x34D4ECu, 0x34D4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D4F4u;
label_34d4f4:
    // 0x34d4f4: 0xafc20018  sw          $v0, 0x18($fp)
    ctx->pc = 0x34d4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 2));
    // 0x34d4f8: 0x8fc20024  lw          $v0, 0x24($fp)
    ctx->pc = 0x34d4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
    // 0x34d4fc: 0x8c440404  lw          $a0, 0x404($v0)
    ctx->pc = 0x34d4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1028)));
    // 0x34d500: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x34D500u;
    SET_GPR_U32(ctx, 31, 0x34D508u);
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x34D500u, 0x34D508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D508u;
label_34d508:
    // 0x34d508: 0x8fc20018  lw          $v0, 0x18($fp)
    ctx->pc = 0x34d508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x34d50c: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34D50Cu;
    {
        const bool branch_taken_0x34d50c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x34d50c) {
            ctx->pc = 0x34D524u;
            goto label_34d524;
        }
    }
    ctx->pc = 0x34D514u;
    // 0x34d514: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x34d514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x34d518: 0x3442feff  ori         $v0, $v0, 0xFEFF
    ctx->pc = 0x34d518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65279);
    // 0x34d51c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x34D51Cu;
    {
        const bool branch_taken_0x34d51c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34d51c) {
            ctx->pc = 0x34D538u;
            goto label_34d538;
        }
    }
    ctx->pc = 0x34D524u;
label_34d524:
    // 0x34d524: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x34d524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x34d528: 0x2442b680  addiu       $v0, $v0, -0x4980
    ctx->pc = 0x34d528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948480));
    // 0x34d52c: 0xafc20020  sw          $v0, 0x20($fp)
    ctx->pc = 0x34d52cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 2));
    // 0x34d530: 0x8fc20020  lw          $v0, 0x20($fp)
    ctx->pc = 0x34d530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x34d534: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x34d534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_34d538:
    // 0x34d538: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x34d538u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d53c: 0xdfbe0030  ld          $fp, 0x30($sp)
    ctx->pc = 0x34d53cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34d540: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x34d540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34d544: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x34d544u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x34d548: 0x3e00008  jr          $ra
    ctx->pc = 0x34D548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34D548u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34D550u;
}
