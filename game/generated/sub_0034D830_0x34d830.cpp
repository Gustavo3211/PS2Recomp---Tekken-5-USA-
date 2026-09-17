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

// Function: sub_0034D830
// Address: 0x34d830 - 0x34d948
void sub_0034D830_0x34d830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034D830_0x34d830");
#endif

    switch (ctx->pc) {
        case 0x34d88cu: goto label_34d88c;
        case 0x34d8ecu: goto label_34d8ec;
        case 0x34d900u: goto label_34d900;
        default: break;
    }

    ctx->pc = 0x34d830u;

    // 0x34d830: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x34d830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x34d834: 0xffbe0030  sd          $fp, 0x30($sp)
    ctx->pc = 0x34d834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 30));
    // 0x34d838: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x34d838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x34d83c: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x34d83cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d840: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x34d840u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x34d844: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x34d844u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x34d848: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x34d848u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x34d84c: 0xafc7000c  sw          $a3, 0xC($fp)
    ctx->pc = 0x34d84cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 7));
    // 0x34d850: 0xafc80010  sw          $t0, 0x10($fp)
    ctx->pc = 0x34d850u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 8));
    // 0x34d854: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x34d854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x34d858: 0x2442b240  addiu       $v0, $v0, -0x4DC0
    ctx->pc = 0x34d858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947392));
    // 0x34d85c: 0xafc20024  sw          $v0, 0x24($fp)
    ctx->pc = 0x34d85cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 36), GPR_U32(ctx, 2));
    // 0x34d860: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x34d860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x34d864: 0xafc20014  sw          $v0, 0x14($fp)
    ctx->pc = 0x34d864u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
    // 0x34d868: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x34d868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x34d86c: 0x2443000f  addiu       $v1, $v0, 0xF
    ctx->pc = 0x34d86cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x34d870: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x34d870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x34d874: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x34d874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x34d878: 0xafc20014  sw          $v0, 0x14($fp)
    ctx->pc = 0x34d878u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
    // 0x34d87c: 0x8fc20024  lw          $v0, 0x24($fp)
    ctx->pc = 0x34d87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
    // 0x34d880: 0x8c440404  lw          $a0, 0x404($v0)
    ctx->pc = 0x34d880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1028)));
    // 0x34d884: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x34D884u;
    SET_GPR_U32(ctx, 31, 0x34D88Cu);
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x34D884u, 0x34D88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D88Cu;
label_34d88c:
    // 0x34d88c: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x34d88cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x34d890: 0x2442b680  addiu       $v0, $v0, -0x4980
    ctx->pc = 0x34d890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948480));
    // 0x34d894: 0xafc2001c  sw          $v0, 0x1C($fp)
    ctx->pc = 0x34d894u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 28), GPR_U32(ctx, 2));
    // 0x34d898: 0x8fc3001c  lw          $v1, 0x1C($fp)
    ctx->pc = 0x34d898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x34d89c: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x34d89cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x34d8a0: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x34d8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x34d8a4: 0x8fc3001c  lw          $v1, 0x1C($fp)
    ctx->pc = 0x34d8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x34d8a8: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x34d8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x34d8ac: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x34d8acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x34d8b0: 0x8fc3001c  lw          $v1, 0x1C($fp)
    ctx->pc = 0x34d8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x34d8b4: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x34d8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x34d8b8: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x34d8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x34d8bc: 0x8fc3001c  lw          $v1, 0x1C($fp)
    ctx->pc = 0x34d8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x34d8c0: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x34d8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x34d8c4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x34d8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x34d8c8: 0x8fc3001c  lw          $v1, 0x1C($fp)
    ctx->pc = 0x34d8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x34d8cc: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x34d8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x34d8d0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x34d8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x34d8d4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x34d8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x34d8d8: 0x8fc5001c  lw          $a1, 0x1C($fp)
    ctx->pc = 0x34d8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x34d8dc: 0x8fc60014  lw          $a2, 0x14($fp)
    ctx->pc = 0x34d8dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x34d8e0: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x34d8e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x34d8e4: 0xc0d2e32  jal         func_34B8C8
    ctx->pc = 0x34D8E4u;
    SET_GPR_U32(ctx, 31, 0x34D8ECu);
    ctx->pc = 0x34B8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34B8C8u, 0x34D8E4u, 0x34D8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D8ECu;
label_34d8ec:
    // 0x34d8ec: 0xafc20018  sw          $v0, 0x18($fp)
    ctx->pc = 0x34d8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 2));
    // 0x34d8f0: 0x8fc20024  lw          $v0, 0x24($fp)
    ctx->pc = 0x34d8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
    // 0x34d8f4: 0x8c440404  lw          $a0, 0x404($v0)
    ctx->pc = 0x34d8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1028)));
    // 0x34d8f8: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x34D8F8u;
    SET_GPR_U32(ctx, 31, 0x34D900u);
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x34D8F8u, 0x34D900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D900u;
label_34d900:
    // 0x34d900: 0x8fc20018  lw          $v0, 0x18($fp)
    ctx->pc = 0x34d900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x34d904: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34D904u;
    {
        const bool branch_taken_0x34d904 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x34d904) {
            ctx->pc = 0x34D91Cu;
            goto label_34d91c;
        }
    }
    ctx->pc = 0x34D90Cu;
    // 0x34d90c: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x34d90cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x34d910: 0x3442feff  ori         $v0, $v0, 0xFEFF
    ctx->pc = 0x34d910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65279);
    // 0x34d914: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x34D914u;
    {
        const bool branch_taken_0x34d914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34d914) {
            ctx->pc = 0x34D930u;
            goto label_34d930;
        }
    }
    ctx->pc = 0x34D91Cu;
label_34d91c:
    // 0x34d91c: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x34d91cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x34d920: 0x2442b680  addiu       $v0, $v0, -0x4980
    ctx->pc = 0x34d920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948480));
    // 0x34d924: 0xafc20020  sw          $v0, 0x20($fp)
    ctx->pc = 0x34d924u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 2));
    // 0x34d928: 0x8fc20020  lw          $v0, 0x20($fp)
    ctx->pc = 0x34d928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x34d92c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x34d92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_34d930:
    // 0x34d930: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x34d930u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d934: 0xdfbe0030  ld          $fp, 0x30($sp)
    ctx->pc = 0x34d934u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34d938: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x34d938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34d93c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x34d93cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x34d940: 0x3e00008  jr          $ra
    ctx->pc = 0x34D940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34D940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34D948u;
}
