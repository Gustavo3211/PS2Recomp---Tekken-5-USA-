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

// Function: sub_0034ED7C
// Address: 0x34ed7c - 0x34ee74
void sub_0034ED7C_0x34ed7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034ED7C_0x34ed7c");
#endif

    switch (ctx->pc) {
        case 0x34edd0u: goto label_34edd0;
        case 0x34ee18u: goto label_34ee18;
        case 0x34ee2cu: goto label_34ee2c;
        default: break;
    }

    ctx->pc = 0x34ed7cu;

    // 0x34ed7c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x34ed7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x34ed80: 0xffbe0020  sd          $fp, 0x20($sp)
    ctx->pc = 0x34ed80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 30));
    // 0x34ed84: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x34ed84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x34ed88: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x34ed88u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ed8c: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x34ed8cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x34ed90: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x34ed90u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x34ed94: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x34ed94u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x34ed98: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x34ed98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x34ed9c: 0x2442b240  addiu       $v0, $v0, -0x4DC0
    ctx->pc = 0x34ed9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947392));
    // 0x34eda0: 0xafc2001c  sw          $v0, 0x1C($fp)
    ctx->pc = 0x34eda0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 28), GPR_U32(ctx, 2));
    // 0x34eda4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x34eda4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x34eda8: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x34eda8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x34edac: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x34edacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x34edb0: 0x2443000f  addiu       $v1, $v0, 0xF
    ctx->pc = 0x34edb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x34edb4: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x34edb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x34edb8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x34edb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x34edbc: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x34edbcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x34edc0: 0x8fc2001c  lw          $v0, 0x1C($fp)
    ctx->pc = 0x34edc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x34edc4: 0x8c440404  lw          $a0, 0x404($v0)
    ctx->pc = 0x34edc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1028)));
    // 0x34edc8: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x34EDC8u;
    SET_GPR_U32(ctx, 31, 0x34EDD0u);
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x34EDC8u, 0x34EDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34EDD0u;
label_34edd0:
    // 0x34edd0: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x34edd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x34edd4: 0x2442b680  addiu       $v0, $v0, -0x4980
    ctx->pc = 0x34edd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948480));
    // 0x34edd8: 0xafc20014  sw          $v0, 0x14($fp)
    ctx->pc = 0x34edd8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
    // 0x34eddc: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x34eddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x34ede0: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x34ede0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x34ede4: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x34ede4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x34ede8: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x34ede8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x34edec: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x34edecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x34edf0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x34edf0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x34edf4: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x34edf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x34edf8: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x34edf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x34edfc: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x34edfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x34ee00: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x34ee00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x34ee04: 0x8fc50014  lw          $a1, 0x14($fp)
    ctx->pc = 0x34ee04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x34ee08: 0x8fc6000c  lw          $a2, 0xC($fp)
    ctx->pc = 0x34ee08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x34ee0c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x34ee0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x34ee10: 0xc0d2e32  jal         func_34B8C8
    ctx->pc = 0x34EE10u;
    SET_GPR_U32(ctx, 31, 0x34EE18u);
    ctx->pc = 0x34B8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34B8C8u, 0x34EE10u, 0x34EE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34EE18u;
label_34ee18:
    // 0x34ee18: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x34ee18u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x34ee1c: 0x8fc2001c  lw          $v0, 0x1C($fp)
    ctx->pc = 0x34ee1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x34ee20: 0x8c440404  lw          $a0, 0x404($v0)
    ctx->pc = 0x34ee20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1028)));
    // 0x34ee24: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x34EE24u;
    SET_GPR_U32(ctx, 31, 0x34EE2Cu);
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x34EE24u, 0x34EE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34EE2Cu;
label_34ee2c:
    // 0x34ee2c: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x34ee2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x34ee30: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34EE30u;
    {
        const bool branch_taken_0x34ee30 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x34ee30) {
            ctx->pc = 0x34EE48u;
            goto label_34ee48;
        }
    }
    ctx->pc = 0x34EE38u;
    // 0x34ee38: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x34ee38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x34ee3c: 0x3442feff  ori         $v0, $v0, 0xFEFF
    ctx->pc = 0x34ee3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65279);
    // 0x34ee40: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x34EE40u;
    {
        const bool branch_taken_0x34ee40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ee40) {
            ctx->pc = 0x34EE5Cu;
            goto label_34ee5c;
        }
    }
    ctx->pc = 0x34EE48u;
label_34ee48:
    // 0x34ee48: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x34ee48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x34ee4c: 0x2442b680  addiu       $v0, $v0, -0x4980
    ctx->pc = 0x34ee4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948480));
    // 0x34ee50: 0xafc20018  sw          $v0, 0x18($fp)
    ctx->pc = 0x34ee50u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 2));
    // 0x34ee54: 0x8fc20018  lw          $v0, 0x18($fp)
    ctx->pc = 0x34ee54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x34ee58: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x34ee58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_34ee5c:
    // 0x34ee5c: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x34ee5cu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ee60: 0xdfbe0020  ld          $fp, 0x20($sp)
    ctx->pc = 0x34ee60u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34ee64: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x34ee64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34ee68: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x34ee68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x34ee6c: 0x3e00008  jr          $ra
    ctx->pc = 0x34EE6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34EE6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34EE74u;
}
