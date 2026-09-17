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

// Function: sub_0034DD2C
// Address: 0x34dd2c - 0x34de08
void sub_0034DD2C_0x34dd2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034DD2C_0x34dd2c");
#endif

    switch (ctx->pc) {
        case 0x34dd78u: goto label_34dd78;
        case 0x34ddb8u: goto label_34ddb8;
        case 0x34dde0u: goto label_34dde0;
        case 0x34ddecu: goto label_34ddec;
        default: break;
    }

    ctx->pc = 0x34dd2cu;

    // 0x34dd2c: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x34dd2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x34dd30: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x34dd30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x34dd34: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x34dd34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x34dd38: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x34dd38u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34dd3c: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x34dd3cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x34dd40: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x34dd40u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x34dd44: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x34dd44u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x34dd48: 0xafc7000c  sw          $a3, 0xC($fp)
    ctx->pc = 0x34dd48u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 7));
    // 0x34dd4c: 0xafc80010  sw          $t0, 0x10($fp)
    ctx->pc = 0x34dd4cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 8));
    // 0x34dd50: 0xafc00028  sw          $zero, 0x28($fp)
    ctx->pc = 0x34dd50u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 40), GPR_U32(ctx, 0));
    // 0x34dd54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34dd54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34dd58: 0xafc20024  sw          $v0, 0x24($fp)
    ctx->pc = 0x34dd58u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 36), GPR_U32(ctx, 2));
    // 0x34dd5c: 0x27c20018  addiu       $v0, $fp, 0x18
    ctx->pc = 0x34dd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 24));
    // 0x34dd60: 0xafc20034  sw          $v0, 0x34($fp)
    ctx->pc = 0x34dd60u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 52), GPR_U32(ctx, 2));
    // 0x34dd64: 0xafc00030  sw          $zero, 0x30($fp)
    ctx->pc = 0x34dd64u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 48), GPR_U32(ctx, 0));
    // 0x34dd68: 0x27c20020  addiu       $v0, $fp, 0x20
    ctx->pc = 0x34dd68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 32));
    // 0x34dd6c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x34dd6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34dd70: 0xc043ce8  jal         func_10F3A0
    ctx->pc = 0x34DD70u;
    SET_GPR_U32(ctx, 31, 0x34DD78u);
    ctx->pc = 0x10F3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3A0u, 0x34DD70u, 0x34DD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DD78u;
label_34dd78:
    // 0x34dd78: 0xafc2001c  sw          $v0, 0x1C($fp)
    ctx->pc = 0x34dd78u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 28), GPR_U32(ctx, 2));
    // 0x34dd7c: 0x8fc2001c  lw          $v0, 0x1C($fp)
    ctx->pc = 0x34dd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x34dd80: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34DD80u;
    {
        const bool branch_taken_0x34dd80 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x34dd80) {
            ctx->pc = 0x34DD98u;
            goto label_34dd98;
        }
    }
    ctx->pc = 0x34DD88u;
    // 0x34dd88: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x34dd88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x34dd8c: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x34dd8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
    // 0x34dd90: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x34DD90u;
    {
        const bool branch_taken_0x34dd90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34dd90) {
            ctx->pc = 0x34DDF0u;
            goto label_34ddf0;
        }
    }
    ctx->pc = 0x34DD98u;
label_34dd98:
    // 0x34dd98: 0x8fc40008  lw          $a0, 0x8($fp)
    ctx->pc = 0x34dd98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x34dd9c: 0x8fc5000c  lw          $a1, 0xC($fp)
    ctx->pc = 0x34dd9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x34dda0: 0x8fc60010  lw          $a2, 0x10($fp)
    ctx->pc = 0x34dda0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x34dda4: 0x3c070035  lui         $a3, 0x35
    ctx->pc = 0x34dda4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)53 << 16));
    // 0x34dda8: 0x24e7f09c  addiu       $a3, $a3, -0xF64
    ctx->pc = 0x34dda8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294963356));
    // 0x34ddac: 0x8fc8001c  lw          $t0, 0x1C($fp)
    ctx->pc = 0x34ddacu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x34ddb0: 0xc0d3782  jal         func_34DE08
    ctx->pc = 0x34DDB0u;
    SET_GPR_U32(ctx, 31, 0x34DDB8u);
    ctx->pc = 0x34DE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DE08u, 0x34DDB0u, 0x34DDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DDB8u;
label_34ddb8:
    // 0x34ddb8: 0xafc20014  sw          $v0, 0x14($fp)
    ctx->pc = 0x34ddb8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
    // 0x34ddbc: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x34ddbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x34ddc0: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x34DDC0u;
    {
        const bool branch_taken_0x34ddc0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x34ddc0) {
            ctx->pc = 0x34DDD4u;
            goto label_34ddd4;
        }
    }
    ctx->pc = 0x34DDC8u;
    // 0x34ddc8: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x34ddc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x34ddcc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x34DDCCu;
    {
        const bool branch_taken_0x34ddcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ddcc) {
            ctx->pc = 0x34DDF0u;
            goto label_34ddf0;
        }
    }
    ctx->pc = 0x34DDD4u;
label_34ddd4:
    // 0x34ddd4: 0x8fc4001c  lw          $a0, 0x1C($fp)
    ctx->pc = 0x34ddd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x34ddd8: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x34DDD8u;
    SET_GPR_U32(ctx, 31, 0x34DDE0u);
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x34DDD8u, 0x34DDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DDE0u;
label_34dde0:
    // 0x34dde0: 0x8fc4001c  lw          $a0, 0x1C($fp)
    ctx->pc = 0x34dde0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x34dde4: 0xc043cec  jal         func_10F3B0
    ctx->pc = 0x34DDE4u;
    SET_GPR_U32(ctx, 31, 0x34DDECu);
    ctx->pc = 0x10F3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3B0u, 0x34DDE4u, 0x34DDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DDECu;
label_34ddec:
    // 0x34ddec: 0x8fc20018  lw          $v0, 0x18($fp)
    ctx->pc = 0x34ddecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
label_34ddf0:
    // 0x34ddf0: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x34ddf0u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ddf4: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x34ddf4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x34ddf8: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x34ddf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x34ddfc: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x34ddfcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x34de00: 0x3e00008  jr          $ra
    ctx->pc = 0x34DE00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34DE00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34DE08u;
}
