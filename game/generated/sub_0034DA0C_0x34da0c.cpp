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

// Function: sub_0034DA0C
// Address: 0x34da0c - 0x34db04
void sub_0034DA0C_0x34da0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034DA0C_0x34da0c");
#endif

    switch (ctx->pc) {
        case 0x34da60u: goto label_34da60;
        case 0x34daa8u: goto label_34daa8;
        case 0x34dabcu: goto label_34dabc;
        default: break;
    }

    ctx->pc = 0x34da0cu;

    // 0x34da0c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x34da0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x34da10: 0xffbe0020  sd          $fp, 0x20($sp)
    ctx->pc = 0x34da10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 30));
    // 0x34da14: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x34da14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x34da18: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x34da18u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34da1c: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x34da1cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x34da20: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x34da20u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x34da24: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x34da24u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x34da28: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x34da28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x34da2c: 0x2442b240  addiu       $v0, $v0, -0x4DC0
    ctx->pc = 0x34da2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947392));
    // 0x34da30: 0xafc2001c  sw          $v0, 0x1C($fp)
    ctx->pc = 0x34da30u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 28), GPR_U32(ctx, 2));
    // 0x34da34: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x34da34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x34da38: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x34da38u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x34da3c: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x34da3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x34da40: 0x2443000f  addiu       $v1, $v0, 0xF
    ctx->pc = 0x34da40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x34da44: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x34da44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x34da48: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x34da48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x34da4c: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x34da4cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x34da50: 0x8fc2001c  lw          $v0, 0x1C($fp)
    ctx->pc = 0x34da50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x34da54: 0x8c440404  lw          $a0, 0x404($v0)
    ctx->pc = 0x34da54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1028)));
    // 0x34da58: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x34DA58u;
    SET_GPR_U32(ctx, 31, 0x34DA60u);
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x34DA58u, 0x34DA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DA60u;
label_34da60:
    // 0x34da60: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x34da60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x34da64: 0x2442b680  addiu       $v0, $v0, -0x4980
    ctx->pc = 0x34da64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948480));
    // 0x34da68: 0xafc20014  sw          $v0, 0x14($fp)
    ctx->pc = 0x34da68u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
    // 0x34da6c: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x34da6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x34da70: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x34da70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x34da74: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x34da74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x34da78: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x34da78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x34da7c: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x34da7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x34da80: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x34da80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x34da84: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x34da84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x34da88: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x34da88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x34da8c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x34da8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x34da90: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x34da90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x34da94: 0x8fc50014  lw          $a1, 0x14($fp)
    ctx->pc = 0x34da94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x34da98: 0x8fc6000c  lw          $a2, 0xC($fp)
    ctx->pc = 0x34da98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x34da9c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x34da9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x34daa0: 0xc0d2e32  jal         func_34B8C8
    ctx->pc = 0x34DAA0u;
    SET_GPR_U32(ctx, 31, 0x34DAA8u);
    ctx->pc = 0x34B8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34B8C8u, 0x34DAA0u, 0x34DAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DAA8u;
label_34daa8:
    // 0x34daa8: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x34daa8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x34daac: 0x8fc2001c  lw          $v0, 0x1C($fp)
    ctx->pc = 0x34daacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x34dab0: 0x8c440404  lw          $a0, 0x404($v0)
    ctx->pc = 0x34dab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1028)));
    // 0x34dab4: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x34DAB4u;
    SET_GPR_U32(ctx, 31, 0x34DABCu);
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x34DAB4u, 0x34DABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DABCu;
label_34dabc:
    // 0x34dabc: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x34dabcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x34dac0: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34DAC0u;
    {
        const bool branch_taken_0x34dac0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x34dac0) {
            ctx->pc = 0x34DAD8u;
            goto label_34dad8;
        }
    }
    ctx->pc = 0x34DAC8u;
    // 0x34dac8: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x34dac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x34dacc: 0x3442feff  ori         $v0, $v0, 0xFEFF
    ctx->pc = 0x34daccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65279);
    // 0x34dad0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x34DAD0u;
    {
        const bool branch_taken_0x34dad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34dad0) {
            ctx->pc = 0x34DAECu;
            goto label_34daec;
        }
    }
    ctx->pc = 0x34DAD8u;
label_34dad8:
    // 0x34dad8: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x34dad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x34dadc: 0x2442b680  addiu       $v0, $v0, -0x4980
    ctx->pc = 0x34dadcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948480));
    // 0x34dae0: 0xafc20018  sw          $v0, 0x18($fp)
    ctx->pc = 0x34dae0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 2));
    // 0x34dae4: 0x8fc20018  lw          $v0, 0x18($fp)
    ctx->pc = 0x34dae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x34dae8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x34dae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_34daec:
    // 0x34daec: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x34daecu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34daf0: 0xdfbe0020  ld          $fp, 0x20($sp)
    ctx->pc = 0x34daf0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34daf4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x34daf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34daf8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x34daf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x34dafc: 0x3e00008  jr          $ra
    ctx->pc = 0x34DAFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34DAFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34DB04u;
}
