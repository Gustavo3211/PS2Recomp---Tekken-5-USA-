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

// Function: sub_0034D624
// Address: 0x34d624 - 0x34d75c
void sub_0034D624_0x34d624(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034D624_0x34d624");
#endif

    switch (ctx->pc) {
        case 0x34d674u: goto label_34d674;
        case 0x34d6a0u: goto label_34d6a0;
        case 0x34d700u: goto label_34d700;
        case 0x34d714u: goto label_34d714;
        default: break;
    }

    ctx->pc = 0x34d624u;

    // 0x34d624: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x34d624u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x34d628: 0xffbe0030  sd          $fp, 0x30($sp)
    ctx->pc = 0x34d628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 30));
    // 0x34d62c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x34d62cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x34d630: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x34d630u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d634: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x34d634u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x34d638: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x34d638u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x34d63c: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x34d63cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x34d640: 0xafc7000c  sw          $a3, 0xC($fp)
    ctx->pc = 0x34d640u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 7));
    // 0x34d644: 0xafc80010  sw          $t0, 0x10($fp)
    ctx->pc = 0x34d644u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 8));
    // 0x34d648: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x34d648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x34d64c: 0x2442b240  addiu       $v0, $v0, -0x4DC0
    ctx->pc = 0x34d64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947392));
    // 0x34d650: 0xafc20024  sw          $v0, 0x24($fp)
    ctx->pc = 0x34d650u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 36), GPR_U32(ctx, 2));
    // 0x34d654: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x34d654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x34d658: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x34d658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x34d65c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x34d65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x34d660: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x34d660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x34d664: 0x8fc40004  lw          $a0, 0x4($fp)
    ctx->pc = 0x34d664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x34d668: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x34d668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d66c: 0xc043f26  jal         func_10FC98
    ctx->pc = 0x34D66Cu;
    SET_GPR_U32(ctx, 31, 0x34D674u);
    ctx->pc = 0x10FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC98u, 0x34D66Cu, 0x34D674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D674u;
label_34d674:
    // 0x34d674: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x34d674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x34d678: 0xafc20014  sw          $v0, 0x14($fp)
    ctx->pc = 0x34d678u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
    // 0x34d67c: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x34d67cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x34d680: 0x2443000f  addiu       $v1, $v0, 0xF
    ctx->pc = 0x34d680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x34d684: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x34d684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x34d688: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x34d688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x34d68c: 0xafc20014  sw          $v0, 0x14($fp)
    ctx->pc = 0x34d68cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
    // 0x34d690: 0x8fc20024  lw          $v0, 0x24($fp)
    ctx->pc = 0x34d690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
    // 0x34d694: 0x8c440404  lw          $a0, 0x404($v0)
    ctx->pc = 0x34d694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1028)));
    // 0x34d698: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x34D698u;
    SET_GPR_U32(ctx, 31, 0x34D6A0u);
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x34D698u, 0x34D6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D6A0u;
label_34d6a0:
    // 0x34d6a0: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x34d6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x34d6a4: 0x2442b680  addiu       $v0, $v0, -0x4980
    ctx->pc = 0x34d6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948480));
    // 0x34d6a8: 0xafc2001c  sw          $v0, 0x1C($fp)
    ctx->pc = 0x34d6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 28), GPR_U32(ctx, 2));
    // 0x34d6ac: 0x8fc3001c  lw          $v1, 0x1C($fp)
    ctx->pc = 0x34d6acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x34d6b0: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x34d6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x34d6b4: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x34d6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x34d6b8: 0x8fc3001c  lw          $v1, 0x1C($fp)
    ctx->pc = 0x34d6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x34d6bc: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x34d6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x34d6c0: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x34d6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x34d6c4: 0x8fc3001c  lw          $v1, 0x1C($fp)
    ctx->pc = 0x34d6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x34d6c8: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x34d6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x34d6cc: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x34d6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x34d6d0: 0x8fc3001c  lw          $v1, 0x1C($fp)
    ctx->pc = 0x34d6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x34d6d4: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x34d6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x34d6d8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x34d6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x34d6dc: 0x8fc3001c  lw          $v1, 0x1C($fp)
    ctx->pc = 0x34d6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x34d6e0: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x34d6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x34d6e4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x34d6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x34d6e8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x34d6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x34d6ec: 0x8fc5001c  lw          $a1, 0x1C($fp)
    ctx->pc = 0x34d6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x34d6f0: 0x8fc60014  lw          $a2, 0x14($fp)
    ctx->pc = 0x34d6f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x34d6f4: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x34d6f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x34d6f8: 0xc0d2e32  jal         func_34B8C8
    ctx->pc = 0x34D6F8u;
    SET_GPR_U32(ctx, 31, 0x34D700u);
    ctx->pc = 0x34B8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34B8C8u, 0x34D6F8u, 0x34D700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D700u;
label_34d700:
    // 0x34d700: 0xafc20018  sw          $v0, 0x18($fp)
    ctx->pc = 0x34d700u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 2));
    // 0x34d704: 0x8fc20024  lw          $v0, 0x24($fp)
    ctx->pc = 0x34d704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
    // 0x34d708: 0x8c440404  lw          $a0, 0x404($v0)
    ctx->pc = 0x34d708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1028)));
    // 0x34d70c: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x34D70Cu;
    SET_GPR_U32(ctx, 31, 0x34D714u);
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x34D70Cu, 0x34D714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D714u;
label_34d714:
    // 0x34d714: 0x8fc20018  lw          $v0, 0x18($fp)
    ctx->pc = 0x34d714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x34d718: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34D718u;
    {
        const bool branch_taken_0x34d718 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x34d718) {
            ctx->pc = 0x34D730u;
            goto label_34d730;
        }
    }
    ctx->pc = 0x34D720u;
    // 0x34d720: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x34d720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x34d724: 0x3442feff  ori         $v0, $v0, 0xFEFF
    ctx->pc = 0x34d724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65279);
    // 0x34d728: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x34D728u;
    {
        const bool branch_taken_0x34d728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34d728) {
            ctx->pc = 0x34D744u;
            goto label_34d744;
        }
    }
    ctx->pc = 0x34D730u;
label_34d730:
    // 0x34d730: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x34d730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x34d734: 0x2442b680  addiu       $v0, $v0, -0x4980
    ctx->pc = 0x34d734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948480));
    // 0x34d738: 0xafc20020  sw          $v0, 0x20($fp)
    ctx->pc = 0x34d738u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 2));
    // 0x34d73c: 0x8fc20020  lw          $v0, 0x20($fp)
    ctx->pc = 0x34d73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x34d740: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x34d740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_34d744:
    // 0x34d744: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x34d744u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d748: 0xdfbe0030  ld          $fp, 0x30($sp)
    ctx->pc = 0x34d748u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34d74c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x34d74cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34d750: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x34d750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x34d754: 0x3e00008  jr          $ra
    ctx->pc = 0x34D754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34D754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34D75Cu;
}
